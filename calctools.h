#ifndef CALCTOOLS_H
#define CALCTOOLS_H
#include <cmath>
#include "genericvalues.h"

// @ Jukka J
// Created: 07.04.2023
// Last modification: 16.04.2023
/* TODO: Create function/way to estimate real chamber temperature by acknowledgin heat losses etc. 
& replacing (few) corresponding A_Flame values with estimated chamber temp */

/* Function to calculate temperature of adiabatic flame (via adiabatic flame temperature equation)
double calculateAFlame(double T_oxygen, double C_p_oxygen, double T_ethanol, double C_p_ethanol) {
    double A_Flame = (T_oxygen * C_p_oxygen + T_ethanol * C_p_ethanol) / (C_p_oxygen + C_p_ethanol);
    return A_Flame;
}*/


// Function to calculate adiabatic flame temperature
double adiabaticFlameTemperature(double Cp_oxygen, double Cp_ethanol) {

    // Cp_CO2, Cp_H2O, Moles_oxygen, Moles_ethanol etc. from genericvalues.h
    double Cp_products = CO2_mole_cnt * Cp_CO2 + H2O_mole_cnt * Cp_H2O; // total heat capacity of products (kJ/(kg*K))
    double M_products = CO2_mole_cnt + H2O_mole_cnt; // total number of moles of products
    double C_p1 = (Moles_ethanol * Cp_ethanol + Moles_oxygen  * Cp_oxygen + M_products * Cp_products) / M_products;
    double A_Flame = ((Delta_hc / C_p1) + T_init) * -1.0;
    return A_Flame;
}

// Function to calculate the specific heat ratio of the combustion products
double calculateGamma(double C_p_oxygen, double C_p_ethanol) {
    // Convert specific heat values to J/kg K
    C_p_oxygen *= 1000;
    C_p_ethanol *= 1000;
    
    double R1_LOX = R_LOX;
    double R2_ethanol = R_ethanol;
    // The specific heats at constant volume,
    double C_v_lox = C_p_oxygen - R1_LOX;
    double C_v_ethanol = C_p_ethanol - R2_ethanol;    
    double Gamma_avg = (C_p_ethanol / C_v_ethanol + C_p_oxygen / C_v_lox) / 2;
    return Gamma_avg;
    
    return Gamma_avg;
}

// Function to calculate burning pressure
double calculateBPressure(double P_chamber, double T_chamber, double A_Flame, double C_p_oxygen, double C_p_ethanol) {
    double gamma = calculateGamma(C_p_oxygen, C_p_ethanol);
    double B_p = P_chamber * pow((A_Flame / T_chamber), (gamma / (gamma - 1)));
    return B_p;
}

// Function to calculate mass flow rate
double calculateMFRate(double F, double C_e_v) {

    // Leaving these here (thrust equation and exhaust velocity equation), to use instead this simple approach: 
    // Amb_p from genericvalues.h
    //double M_f_r = F / (C_v_e + (P_exit - Amb_p) * A_t);
    //double M_f_r = F / (C_e_v * (B_p / C_p) * A_t);
    //double M_f_r = (F / C_e_v) + (P_chamber * A_t) * sqrt(gamma / R_mix) * pow((2 / (gamma + 1)), ((gamma + 1) / (2 * (gamma - 1))));
    
    double M_f_r = F / C_e_v;    
    return M_f_r;
}

// Function to calculate specific impulse
double calculateISP(double F, double M_f_r) {
    // Gravitational acceleration (G_f) from genericvalues.h
    double Isp = F / (M_f_r * G_f);
    return Isp;
}

// Function to estimate the characteristic exhaust velocity
double calculateEVelocity(double A_Flame, double gamma, double G_c, double P_chamber) {
    double C_e_v = sqrt((2 * gamma / (gamma - 1)) * G_c * A_Flame * (1 - pow(1 / P_chamber, (gamma - 1) / gamma)));
    return C_e_v;
}

// Function to estimate gas constant for propellant mixture (G_c)
// Parameters mostly from generivalues
double calculateGasConstant(double ratio) {

    // Calculate the average molar mass of the mixture
    double M_mix = (ratio * M_LOX + M_ethanol) / (1 + ratio);
    // Calculate the gas constant for the mixture
    double R_mix = R_gas / M_mix;
    return R_mix;
}

// Function to calculate throat velocity
// TODO: Change A_Flame to real combustion chamber temperature, for improved accuracy
double calculateTVelocity(double R_mix, double A_Flame, double P_exit, double gamma, double P_chamber) {
    double V_t = sqrt((2 * gamma) / (gamma + 1) * R_mix * A_Flame * (1 - pow((P_exit / P_chamber), ((gamma-1) / gamma))));
    return V_t;
}

// Function to calculate the Mach number at the nozzle throat
double calculateMNumber(double P_chamber, double P_exit, double gamma) {
    double M_t = sqrt((2 / (gamma - 1)) * ((P_chamber / P_exit) - 1) * pow(((gamma + 1) / (2 * (gamma - 1))), (gamma - 1) / gamma));
    return M_t;
}

// Function to calculate the density (rho) of the combustion products
double calculateCPDensity(double P_chamber, double A_Flame) {
    // Formula expect pascals, bar was asked from user
    // TODO: Pressure already converted, remove if not needed
    // double P_c_p = 100000.0 * P_chamber;
    // Ratio defined from genericvalues.h
    double R_mix = calculateGasConstant(Lox_ethanol_ratio);
    double rho = P_chamber / (R_mix * A_Flame);
    return rho;
}

// Function to calculate nozzle throat area
double calculateNTArea(double A_e) {
    // N_a_r from genericvalues
    double A_t = A_e / N_a_r;
    return A_t;
}

// Function to calculate pressure at nozzle exit
// A_p_b is boolean for assuming, or not assuming 1 atm pressure, if calculated value is lower
// TODO: option in gui for that
double estimateNEPressure(double P_chamber, double gamma, double areaRatio, bool A_p_b) {
    // double P_exit = (P_chamber / 100000) / pow(1 + ((gamma - 1) / 2) * pow(areaRatio, 2), gamma / (gamma - 1));
    std::cout << "Inputti: " << P_chamber << std::endl;
    double P_exit = P_chamber * pow(1 + pow(M_t_g, 2) * (gamma-1)/2, -gamma/(gamma-1));
    if (A_p_b) {
        if(P_exit < Atm) {
            P_exit = Atm;
        }
    }
    return P_exit;
}


// Function to calculate diameter of the nozzle exit & nozzle throat
double calculateNDiameter(double A_circ_area) {
    double D_n = 2 * sqrt(A_circ_area / M_PI);
    return D_n;
}
 
// Function to calculate nozzle exit area
// TODO: Change A_Flame to real combustion chamber temperature, for improved accuracy
double calculateNEArea(double F, double P_chamber, double C_e_v) {
    double A_e = F / (P_chamber * C_e_v);
    return A_e;
}

// Function to calculate nozzle length
double calculateNLength(double D_n_t) {
    // TODO: Potentially remove, produces non reasonal values:
    // double L_n = (A_e / A_t - 1) * (R_mix * A_Flame / (gamma * P_c * V_t));
    double L_n = D_n_t * N_l_f;
    return L_n;
}

// Function to calculate volume of the nozzle
double calculateVNozzle(double A_t, double A_e, double L_n) {
    double V_n = ((A_t + A_e)/2) * L_n;
    return V_n;
}

// Function to calculate, or rather, estimate center-plane area of the combustion chamber.
double calculateCSArea(double A_t) {
    double A_c = A_t * C_ratio;
    return A_c;
}

// Function to estimate characteristic velocity (which is a measure of how efficiently the propellant is being converted into exhaust gas)
double calculateCVel(double A_t, double P_chamber, double M_f_r, double A_flame) {
    double C_vel = (P_chamber * (A_t * Conv_1k)) / M_f_r;
    return C_vel;
}

// Function to calculate volume of the combustion chamber (also, V_c)
/* It is assumed, that the combustion is adiabatic and reversible, and that
   the propellants are completely vaporized and mixed before combustion.
*/
double calculateVCChamber(double F, double P_chamber, double C_vel) {
    double V_chamber = F / (P_chamber * C_vel);
    return V_chamber * 1000000;
}

// Function to calculate nozzle's center plane area
double calculateNCPArea(double A_t, double A_e, double L_n) {
    double A_n_c_p = M_PI * (A_t + A_e) * sqrt(pow(A_t - A_e, 2) + pow(L_n, 2));
    return A_n_c_p;
}

// Function to calculate combustion chamber length
double calculateCSLength(double D_c, double C_vel) {
    //double L_c = V_c / (M_PI/4 * pow(D_c, 2));
    // M_PI from cmath
    std::cout << "M_PI: " << M_PI << std::endl;
    double L_c = C_vel / (M_PI * D_c);
    return L_c;
}

// Function to estimate diameter of the combustion chamber
double estimateCSDiameter(double D_n_t) {
    // M_PI from cmath
    // TODO: Potentially remove, produces non reasonal values:
    // double D_c = sqrt((4 * V_c * P_chamber) / (M_PI * F * R_mix * A_Flame * C_e_v));
    double D_c = T_c_d_r * D_n_t;
    
    return D_c;
}

// Function to calculate the fillet radius
double calculateFRad(double D_c) {
    // Rad_percentage from genericvalues
    double R_f =  Rad_percentage * D_c;
    return R_f;
}

// Function to calculate the combustion chamber radius
double calculateCCRad(double D_c, double A_t, double R_f) {
    // Estimating cylindrical combustion chamber with a fillet at the start of the nozzle taper
    double R_c = sqrt((D_c / 2) * (D_c / 2) - A_t / M_PI - R_f * R_f); 
    return R_c;
}

/* Function to estimate combustion chamber area, at this point,
   Chamber is assumed to be cylindrical, that has fillet on top end, and which
   tapers to throat
*/
double calculateCWArea(double V_c, double L_c, double R_c, double A_t, double R_f) {
    // Calculate the wall area of the cylindrical section
    double A_c_cyl = 2 * M_PI * R_c * L_c;

    // Calculate the radius of the start of the taper
    double R_c_taper_start = R_c + (A_c_cyl / (2 * M_PI * R_c)) - R_f;

    // Calculate the length of the taper
    double L_taper = (R_c_taper_start - A_t / (2 * M_PI)) / ((R_c_taper_start - A_t / (2 * M_PI)) - R_c);

    // Calculate the radius at the end of the taper
    double R_c_taper_end = A_t / (2 * M_PI);

    // Calculate the wall area of the tapered section
    double A_c_taper = M_PI * L_c * (R_c_taper_start + R_c_taper_end) * sqrt(pow(R_c_taper_start - R_c_taper_end, 2) + pow(L_c, 2)) / 2;
   
    // The total wall area 
    double CC_t_w_a = A_c_cyl + A_c_taper;

    return CC_t_w_a;
}

// Function to calculate the half-angle of the diverging section of the nozzle
double calculateDHAngle(double R_e, double R_t, double L_n) {
    double theta = atan((R_e - R_t) / L_n);
    return theta;
}

// Function to calculate the height of the diverging section of the nozzle
double calculateDHeight(double L_n, double theta) {
    double H_d_s = L_n * tan(theta);
    return H_d_s;
}

// Function to calculate nozzle wall area
double calculateNWArea(double R_n_t, double R_n_e, double H_d_s, double L_n) {
    double A_n_c_p = M_PI * (R_n_t + R_n_e) * sqrt(pow(R_n_t - R_n_e, 2) + pow(H_d_s, 2));
    double A_n_c_l = M_PI * (R_n_t + R_n_e) * L_n;
    double A_t = M_PI * pow(R_n_e, 2);
    double A_c = M_PI * pow(R_n_t, 2);
    double A_n_w = (A_n_c_p - A_t - A_c - A_n_c_l) * (-1);
    return A_n_w;
}

// Universal function to calculate radius of circular area
double calculateRadius(double area) {
    double radius = sqrt(area / M_PI);
    return radius;
}

// Funtion to perform kJ/kg K to J/mol K conversion
double unitConversion1(double J_mol, double Molar_mass) {
    double conversion = (J_mol * 1000.0) / (1.0 / Molar_mass);
    return conversion;
}

#endif // CALCTOOLS_H

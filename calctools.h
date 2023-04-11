#ifndef CALCTOOLS_H
#define CALCTOOLS_H
#include <cmath>
#include "genericvalues.h"

// @ Jukka J
// Created: 07.04.2023
// Last modification: 11.04.2023

// Function to calculate temperature of adiabatic flame (via adiabatic flame temperature equation)
double calculateAFlame(double T_oxygen, double C_p_oxygen, double T_ethanol, double C_p_ethanol) {
    double A_Flame = (T_oxygen * C_p_oxygen + T_ethanol * C_p_ethanol) / (C_p_oxygen + C_p_ethanol);
    return A_Flame;
}

// Function to calculate burning pressure (via isentropic expansion equation)
double calculateBPressure(double P_c, double T_c, double A_Flame, double C_p_oxygen, double C_p_ethanol) {
    double gamma = calculateGamma(C_p_oxygen, C_p_ethanol);
    double B_p = P_c * pow((A_Flame / T_c), (gamma / (gamma - 1)));
    return B_p;
}

// Function to calculate mass flow rate (via thrust equation and exhaust velocity equation)
double calculateMFRate(double F, double C_e_v, double B_p, double A_t, double C_p) {
    double M_f_r = F / (C_e_v * (B_p / C_p) * A_t);
    return M_f_r;
}

// Function to calculate the specific heat ratio of the combustion products
double calculateGamma(double C_p_oxygen, double C_p_ethanol) {
    double R1_LOX = R_LOX;
    double R2_ethanol = R_ethanol;
    double C_v_lox = C_p_oxygen - R1_LOX;
    double C_v_ethanol = C_p_ethanol - R2_ethanol;    
    double Gamma_avg = (C_p_ethanol / C_v_ethanol + C_p_oxygen / C_v_lox) / 2;
    return Gamma_avg;
}

// Function to estimate the characteristic exhaust velocity
double calculateEVelocity(double A_Flame, double gamma, double G_c, double P_chamber) {
    double C_e_v = sqrt((2 * gamma / (gamma - 1)) * G_c * A_Flame * (1 - pow(P_chamber / P_c, (gamma - 1) / gamma)));
    return C_e_v;
}

// Function to estimate gas constant for propellant mixture (G_c)
double calculateGasConstant(double ratio) {
    // Calculate the average molar mass of the mixture
    double M_mix = (ratio * M_LOX + M_ethanol) / (1 + ratio);
    // Calculate the gas constant for the mixture
    double R_mix = R_gas / M_mix;
    return R_mix;
}

// Function to calculate throat velocity
double calculateTVelocity(double R_mix, double A_Flame, double P_exit, double gamma, double P_chamber) {
    double V_t = sqrt((2 * gamma / (gamma + 1)) * R_mix * A_Flame * (1 - pow(P_exit / P_chamber, (gamma-1)/gamma)));
    return V_t;
}

// Function to calculate nozzle throat area
double calculateNTArea(double M_f_r, double rho, double V_t) {
    A_t = M_f_r / (rho * V_t);
    return A_t;
}

// Function to calculate the density (rho) of the combustion products
double calculateCPDensity(double P_chamber, double A_Flame) {
    // Ratio defined from genericvalues.h
    double R_mix = calculateGasConstant(Lox_ethanol_ratio);
    double rho = P_chamber / (R_mix * A_Flame);
    return rho;
}

double estimateNEPressure(double P_chamber, double gamma) {
    double P_exit = P_chamber * pow((2 / (gamma + 1)), (gamma / (gamma - 1)));
    return P_exit;
}

// Function to estimate characteristic velocity (which is a measure of how efficiently the propellant is being converted into exhaust gas)
double estimateCVelocity(double A_t, double P_chamber, double M_f_r, double R_mix, double A_Flame, double gamma) {
    double C_vel = (P_chamber * A_t) / (M_f_r * sqrt(R_mix * A_Flame * gamma));
    return C_vel;
}
 

// Function to calculate nozzle exit area
double calculateNEArea(double F, double P_c, double C_e_v) {
    double A_e = F / (P_c * C_e_v);
    return A_e;
}

// Function to calculate nozzle length
double calculateNLength(double A_e, double A_t, double R_mix, double A_Flame, double gamma, double P_c, double V_t) {
    double L_n = (A_e / A_t - 1) * (R_mix * T_f / (gamma * P_c * V_t));
    return L_n;
}

// Function to calculate volume of the combustion chamber (also, V_c)
double calculateVCChamber(double P_chamber, double F, double C_vel) {
    double V_chamber = F / (C_vel * P_chamber);
    return V_chamber;
}

// Function to calculate cross-sectional area of the combustion chamber.
double calculateCSArea(double V_c, double L_c) {
    double A_c = V_c / L_c;
    return A_c;
}

// Function to calculate combustion chamber length
double calculateCSLength(double V_c, double D_c) {
    // M_PI from cmath
    double L_c = V_c / (M_PI/4 * pow(D_c, 2));
    return L_c;
}

// Function to estimate diameter of the combustion chamber
double estimateCSDiameter(double V_c, double P_chamber, double R_mix, double C_e_v, double A_Flames, double F) {
    // M_PI from cmath
    double D_c = sqrt((4 * V_c * P_chamber) / (M_PI * F * R_mix * A_Flame * C_e_v));
    return D_c;
}

#endif // CALCTOOLS_H

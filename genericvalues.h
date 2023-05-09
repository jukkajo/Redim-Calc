#ifndef GENERICVALUES_H
#define GENERICVALUES_H
#include <QString>
#include <QStringList>
#include <list>
#include <string>

// @ Jukka J
// Created: 05.04.2023
// Last modification: 18.04.2023

// Liquid Oxygen properties
const QStringList LOX_properties = {
    "Liquid Oxygen",   // Propellant name
    "1141",            // Density (kg/m^3)
    "0.820",           // Specific heat (J/kg-K)
    "3030",            // Burning temperature (K)
    "0.656"            // Specific heat (specific heat at constant volume) (J/kg-K)
};

// Ethanol properties
const QStringList Ethanol_properties = {
    "Ethanol",         // Propellant name
    "789",             // Density (kg/m^3)
    "2.57",            // Specific heat (J/kg-K)
    "1890",            // Burning temperature (K)
    "2.18"             // Specific heat (specific heat at constant volume) (J/kg-K)
};

// Combustion product heat capacities in constant pressure:
const double Cp_CO2 = 1.039; // heat capacity at constant pressure (kJ/(kg*K))
const double Cp_H2O = 2.098; // heat capacity at constant pressure (kJ/(kg*K))

// Number of moles of each product formed during combustion
const double CO2_mole_cnt = 2.0;
const double H2O_mole_cnt = 3.0;

double Moles_ethanol = 0.04607;
double Moles_oxygen = 0.7739;   // assuming excess oxygen

// Ratio of CC and nozzle lengths
double R_factor = 0.5;

/*
DeltaHc represents the enthalpy of combustion per unit mass of fuel. Here, the negative sign indicates that the combustion process releases heat, i.e., the combustion reaction is exothermic.
The value of -29.7 kJ/kg represents the heat released per unit mass of ethanol during combustion. The value of 29.7 kJ/kg is a standard heat of combustion value for ethanol at standard conditions (25°C and 1 atm pressure).
*/
const double Delta_hc = -29.7 * 1000.0; // enthalpy of combustion (kJ/kg)

 // Initial temperature of the reactants in the combustion process.
const double T_init = 298.0;

/* The generic mixture ratio (or mixture ratio by mass) of LOX and ethanol for a liquid rocket engine,
is usually in the range of 2.5:1 to 3.0:1.
Ratio of 2.45:1 being the most commonly used value to achieve complete combustion.
This means that for every 1 kg of ethanol, 2.45 kg of LOX are required.
As mixing of propellant cannot be assumed to be ideal with amateur rocketry, it is better
choose bit high er ratio value. Therefore this ratio is used.
*/ 
const double Lox_ethanol_ratio = 2.75;

// Atmospheric pressure in pascals
const double Atm = 101325.0;

// Typical characteristic velocity for a LOX (liquid oxygen) and ethanol propellant combination: 1750 to 1900
const double C_vel_g = 1825;

// "Contraction ratio", typically contraction ratio of a LOX/ethanol engine is in the range of 3 to 5
const double C_ratio = 3.0;

/*
Values for unit conversions, used only for
displaying values, in more reasonable scale.
*/
// Straight-forward from unit to other
const double Conv_to_cm = 100.0;
const double Conv_to_cm2 = 10000.0;
const double Conv_to_cm3 = 1000000.0;

/* These are for acknowledging previous calculation steps, for final value produced.
   Similar numbers as above, but named differently to avoid conversion.
*/
const double Conv_10 = 10;
const double Conv_100 = 100;
const double Conv_1k = 1000;
const double Conv_100k = 100000;
const double Conv_10k = 10000;
const double Conv_1m = 1000000;

/*
Throat-to-chamber-dia-ratio:
Similaly, some design guidelines propose, that for engines with thrust levels greater than 0.5 kN,
the ratio of chamber diameter to nozzle throat diameter may be closer to 2.5 to 3.5.
*/
const double T_c_d_r = 3.5;

/*
Factor to estimate nozzle length:
For small rocket engines, a typical value for the L* parameter is in the range of 15-30.
Nozzle length can be estimated using the following formula:
Ln = L* * Dt
*/
const double N_l_f = 15.0;
/*
LOX and Ethanol can not be stated as perfect gasses, so we should calculate
gas constants by using molar masses and universal gas constant
*/
const double R_gas = 8.314; // (J/(mol-K))
// Molar mass (M) of ethanol 
const double M_ethanol = 0.04607; // (kg/mol)
// Molar mass (M) of LOX
const double M_LOX = 0.031998; // (kg/mol)

// 10% of the combustion chamber diameter is a commonly used value for the fillet radius
const double Rad_percentage = 0.1; 

// Minus sign before the value of ΔHf (enthalpy of formation) indicates that the reaction that forms the compound is exothermic:
// Enthalpy of formation of Ethanol (kJ/mol)
const double delta_Hf_ethanol = -277.7;

// Enthalpy of formation of Liquid Oxygen (kJ/mol)
const double delta_Hf_LOX = -241.8;

/*
For a LOX and ethanol rocket engine, a good/generic starting point value for the Mach number at the nozzle
exit would be around 3. This is because LOX and ethanol propellants have a relatively high specific impulse,
which means that the exhaust gases will be traveling at high velocities.
*/
const double M_t_g = 3.0;

const double M_t = 1.0;

// The initial temperature of the reactants, in Kelvin
const double Tb = 3030.0;

// Ambient pressure in bar
const double Amb_p = 1.01325;

// Gravitational acceleration in m/s^2
const double G_f = 9.80665;

/*
For higher thrust efficiency in a LOX and ethanol rocket engine, higher nozzle area ratio should be considered.
A higher nozzle area ratio will provide a larger expansion ratio, which can increase the thrust efficiency of the engine.
*/

// However, for smaller rocket engines, value between 3.0 to 10.0 should be considered
double N_a_r = 3.0;

// Specific gas constants
const double R_LOX = R_gas / M_LOX;
const double R_ethanol = R_gas / M_ethanol;

// "Reasonable" - ranges - Propellant properties:

// Liquid Oxygen density (Unit: kg/m^3)
std::list<float> LOX_densityRange = {100.0, 1500.0};

// Liquid Oxygen specific heat (Unit: J/kg-K)
std::list<double> LOX_specificHeatRange = {0.5, 1.0};

// Liquid Oxygen burning temperature (Unit: K)
std::list<int> LOX_burningTemperatureRange = {2500, 3500};

// Ethanol density (Unit: kg/m^3)
std::list<float> Ethanol_densityRange = {500.0, 1000.0};

// Ethanol specific heat (Unit: J/kg-K)
std::list<double> Ethanol_specificHeatRange = {0.5, 3.0};

// Ethanol burning temperature (Unit: K)
std::list<int> Ethanol_burningTemperatureRange = {1500, 2500};

//TODO: remove if not used. May be useful for optimization standpoint, later on:

std::list<double> nozzleAreaRatioRange = {20.0, 30.0};

// Cross-sectional area of the combustion chamber (Unit: cm^2)
std::list<double> combustionChamberAreaRange = {1.0, 100.0}; 

// Length of the combustion chamber (Unit: cm)
std::list<double> combustionChamberLengthRange = {1.0, 100.0};

// Nozzle length (Unit: cm)
std::list<double> nozzleLengthRange = {1.0, 100.0};

// Nozzle throat area (Unit: cm^2)
std::list<double> nozzleThroatAreaRange = {0.01, 10.0};

// Nozzle exit area (Unit: cm^2)
std::list<double> nozzleExitAreaRange = {0.1, 50.0};

// Mass flow rate (Unit: kg/s)
std::list<double> massFlowRateRange = {0.01, 10.0};

// Thrust (Unit: Newton)
std::list<int> thrustRange = {1, 5000};

// Chamber pressure (Unit: bar)
std::list<int> chamberPressureRange = {1, 100};

// Returns range is string
template<typename T>
QString listToString(const std::list<T>& lst) {
    QString str = "(";
    auto it = lst.begin();
    if (it != lst.end()) {
        str += QString::number(*it++);
    }
    while (it != lst.end()) {
        str += ", " + QString::number(*it++);
    }
    str += ")";
    return str;
}

#endif // GENERICVALUES_H

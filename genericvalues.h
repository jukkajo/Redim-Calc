#ifndef GENERICVALUES_H
#define GENERICVALUES_H
#include <QString>
#include <QStringList>
#include <list>
#include <string>

// @ Jukka J
// Created: 05.04.2023
// Last modification: 10.04.2023

// Liquid Oxygen properties
const QStringList LOX_properties = {
    "Liquid Oxygen",   // Propellant name
    "1141",            // Density (kg/m^3)
    "918",             // Specific heat (J/kg-K)
    "3030",            // Burning temperature (K)
    "693"              // Specific heat (specific heat at constant volume) (J/kg-K)
};

// Ethanol properties
const QStringList Ethanol_properties = {
    "Ethanol",         // Propellant name
    "789",             // Density (kg/m^3)
    "2440",            // Specific heat (J/kg-K)
    "1890",            // Burning temperature (K)
    "1760"             // Specific heat (specific heat at constant volume) (J/kg-K)
};

/* The generic mixture ratio (or mixture ratio by mass) of LOX and ethanol for a liquid rocket engine,
is usually in the range of 1.5:1 to 2.5:1.
Ratio of 2.45:1 being the most commonly used value to achieve complete combustion.
This means that for every 1 kg of ethanol, 2.45 kg of LOX are required.
Therefore this ratio is used.
*/ 
const double Lox_ethanol_ratio = 2.45;

/*
LOX and Ethanol can not be stated as perfect gasses, so we should calculate
gas constants by using molar masses and universal gas constant
*/
const double R_gas = 8.314; // (J/(mol-K))
// Molar mass (M) of ethanol 
const double M_ethanol = 0.04607; // (kg/mol)
// Molar mass (M) of LOX
const double M_LOX = 0.031998; // (kg/mol)

// Specific gas constants
const double R_LOX = R_gas / M_LOX;
const double R_ethanol = R_gas / M_ethanol;

// "Reasonable" - ranges - Propellant properties:

// Liquid Oxygen density (Unit: kg/m^3)
std::list<float> LOX_densityRange = {100.0, 1500.0};

// Liquid Oxygen specific heat (Unit: J/kg-K)
std::list<double> LOX_specificHeatRange = {500.0, 2000.0};

// Liquid Oxygen burning temperature (Unit: K)
std::list<int> LOX_burningTemperatureRange = {2500, 3500};

// Ethanol density (Unit: kg/m^3)
std::list<float> Ethanol_densityRange = {500.0, 1000.0};

// Ethanol specific heat (Unit: J/kg-K)
std::list<double> Ethanol_specificHeatRange = {1000.0, 3000.0};

// Ethanol burning temperature (Unit: K)
std::list<int> Ethanol_burningTemperatureRange = {1500, 2500};

//TODO: remove if not used. May be useful for optimization standpoint, later on:

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

#include <QApplication>
#include "ver1gui.h"
#include <vector>
#include <string>
#include "genericvalues.h"
#include <QMessageBox>
#include <QObject>
#include <iterator>
#include <QtCore/QObject>
#include <iostream>
#include <QDebug>
#include "labeltexts.h"
#include "calctools.h"
#include <QLCDNumber>

// Important variables
double crossSectionalAreaF = 0.0;
double chamberLengthF = 0.0;
double nozzleLengthF = 0.0;
double nozzleThroatAreaF = 0.0;
double nozzleExitAreaF = 0.0;
double massFlowRateF = 0.0;
// User-inputs to store
int thrustF = 0;
int chamberPressureF = 0;
float loxDensityF = 0.0;
double loxSpecificHeatF = 0.0;
int loxBurningTempF = 0;
float ethanolDensityF = 0.0;
double ethanolSpecificHeatF = 0.0;
int ethanolBurningTempF = 0;
// Variables for intermediate stages
double adiabaticFlame = 0.0; 
double burningPressure = 0.0;


Ui_MainWindow *ui;

// @ Jukka J
// Created: 04.04.2023
// Last modification:14.04.2023

/* TODO:
Optimization entity
Multiply all area relared values, as those displayed as m^2, but displayed as cm^2
Same with m^3 to cm^3
*/

void calculate(double& crossSectionalAreaF, double& chamberLengthF, double& nozzleLengthF, double& nozzleThroatAreaF, double& nozzleExitAreaF, double& massFlowRateF, int& thrustF, int& chamberPressureF, float& loxDensityF, double& loxSpecificHeatF, int& loxBurningTempF, float& ethanolDensityF, double& ethanolSpecificHeatF, int& ethanolBurningTempF) {
    
    // For sake of convenience, datatypes to float. However, for example, it is reasonable to thrusth from user as int, same with Kelvins
    double loxDensityFDouble = loxDensityF;
    double ethanolDensityFDouble = ethanolDensityF;
    double loxBurningTempFDouble = loxBurningTempF;
    double ethanolBurningTempFDouble = ethanolBurningTempF;
    double thrustFDouble = thrustF;
    double chamberPressureFDouble = chamberPressureF;
    
    double rho = calculateCPDensity(P_chamber, A_Flame);
    double A_Flame = calculateAFlame(loxBurningTempFDouble, loxSpecificHeatF, ethanolBurningTempFDouble, ethanolSpecificHeatF);
    double gamma = calculateGamma(loxSpecificHeatF, ethanolSpecificHeatF);
    double P_exit = estimateNEPressure(chamberPressureFDouble, gamma); 
    double R_mix = calculateGasConstant(Lox_ethanol_ratio);
    double V_t = calculateTVelocity(R_mix, A_Flame, P_exit, gamma, chamberPressureFDouble);


    // Lox_ethanol_ratio from genericvalues
    double G_c= calculateGasConstant(Lox_ethanol_ratio);
    double C_e_v = calculateEVelocity(A_Flame, gamma, G_c, chamberPressureFDouble);
    double A_t = calculateNTArea(M_f_r, rho, V_t);
    double C_vel = estimateCVelocity(A_t, chamberPressureFDouble, M_f_r, R_mix, A_Flame, gamma);
    double V_chamber = calculateVCChamber(chamberPressureFDouble, thrustFDouble, C_vel);
    double D_c = estimateCSDiameter(V_chamber, chamberPressureFDouble, R_mix, C_e_v, A_Flame, thrustFDouble);
    double L_c = calculateCSLength(V_chamber, D_c);
    double A_e = calculateNEArea(thrustFDouble, chamberPressureFDouble, C_e_v);
    double L_n = calculateNLength(A_e, A_t, R_mix, A_Flame, gamma, chamberPressureFDouble, V_t);
    double V_n = calculateVNozzle(A_t, A_e, L_n);

    //TODO:
    // Replace first A_Flame parameter with more accurate chamber temperature
    //double B_p = calculateBPressure(chamberPressureFDouble, T_chamber, A_Flame, C_p_oxygen, C_p_ethanol);
    double B_p = calculateBPressure(chamberPressureFDouble, A_Flame, A_Flame, loxSpecificHeatF, ethanolSpecificHeatF);

    // Generating values via calctools
    crossSectionalAreaF = calculateCSArea(V_chamber, L_c);
    //chamberLengthF = ; 
    nozzleLengthF = calculateNLength(A_e, A_t, R_mix, A_Flame, gamma, P_c, V_t);
    nozzleThroatAreaF = ; 
    nozzleExitAreaF = ;
    massFlowRateF = calculateMFRate(thrustF, C_e_v, B_p, A_t, chamberPressureFDouble);

    // Volume of the Nozzle (Unit: cm^3)
    ui->lcdNumber_39->display(V_n);
    
    // Cross-sectional are of the Nozzle throat (Unit: cm^2)
    ui->lcdNumber_40->display(A_t);
    
    // Volume of the combustion chamber (Unit: cm^3)
    ui->lcdNumber_38->display(newValue);
    
    // Length of the combustion chamber (Unit: cm)
    ui->lcdNumber_42->display(L_c);
    
    // Nozzle length (Unit: cm)
    ui->lcdNumber_41->display(nozzleLengthF);
    
    // Cross-sectional are of the combustion chamber (Unit: cm^2)
    double C4 = 
    ui->lcdNumber_44->display(newValue);
    
    // Cross-sectional area of the nozzle (Unit: cm^2)
    double C5 = 
    ui->lcdNumber_45->display(newValue);
    
    // Wall area of the Combustion chamber (Unit: cm^2)
    double C6 = 
    ui->lcdNumber_46->display(newValue);
    
    // Diameter of the nozzle exit (Unit: cm)
    ui->lcdNumber_48->display(newValue);
    
    // Throat diameter (Unit: cm)
    ui->lcdNumber_49->display(newValue);
    
    // Wall area of the nozzle (Unit: cm^2)
    double C7 = 
    ui->lcdNumber_47->display(newValue);
    
    // Required mass flow rate (Unit: kg/s)
    ui->lcdNumber_37->display(massFlowRateF);
    
    // Cross-sectional area of the nozzle exit (Unit: cm^2)
    double C5 = 
    ui->lcdNumber_45->display(newValue);
}


/*
This function is to be called when user click calculate-button in GUI
*/
void validateInputs(QList<QPair<QString, QString>> inputList, double& crossSectionalAreaF, double& chamberLengthF, double& nozzleLengthF, double& nozzleThroatAreaF, double& nozzleExitAreaF, double& massFlowRateF, int& thrustF, int& chamberPressureF, float& loxDensityF, double& loxSpecificHeatF, int& loxBurningTempF, float& ethanolDensityF, double& ethanolSpecificHeatF, int& ethanolBurningTempF) {

    int pointerInt = 0;
    int limit = inputList.size();
    QMessageBox msgBox;
    
    for (auto input : inputList) {
        //QString inputName = lineEdit->objectName(); // Get the name of the QLineEdit
        //QString inputValue = lineEdit->text(); // Get the input value
        QString inputName = input.first;
        QString inputValue = input.second;        
        std::string inputNameStdS = inputName.toStdString();
        pointerInt += 1;
        // Validation logic:
        
        // Methods: not empty, type casting (test), reasonable range
        
        bool correctValue = false;
        QString LOX_densityRangeString = listToString(LOX_densityRange);
        // This for all:
        if (inputValue.isEmpty()) {
            QString title = PROPERTY_NAMES.at(pointerInt);
            msgBox.setWindowTitle(title);
            std::string intStr = std::to_string(pointerInt);
            msgBox.setText("Please give value");
            msgBox.setWindowFlags(Qt::Sheet); // set the parent window to the main window
            msgBox.exec();
            ui->lineEdit_44->setFocus();
            return;
        }
        
        else {
            QString title = PROPERTY_NAMES.at(pointerInt);
            //lineEdit_44 For thrust -> Int
            if (inputNameStdS == "lineEdit_44") {
                int thrust = inputValue.toInt(&correctValue);
                if (correctValue) {
                    std::list<int> thrustRangeL = thrustRange;
                    auto it = thrustRangeL.begin();
                    std::advance(it, 1);
                    if (*thrustRangeL.begin() < thrust && thrust < *it) {
                        thrustF = thrust;
                    } else {
                          QString range = QString("(%1, %2)").arg(thrustRange.front()).arg(thrustRange.back());
                          QString rangeMsg = "Value not within valid range: " + range; 
                          QMessageBox::information(nullptr, title, rangeMsg);
                          return;
                    }
                } else {
                    QMessageBox::information(nullptr, title, "Incorrect value");
                    return;
                }
                   
            }
            //lineEdit_45 For C-pressure -> Int
            if (inputNameStdS == "lineEdit_45") {
                int cPressure = inputValue.toInt(&correctValue);
                if (correctValue) {
                    std::list<int> chamberPressureRangeL = chamberPressureRange;
                    auto it = chamberPressureRangeL.begin();
                    std::advance(it, 1);
                    if (*chamberPressureRangeL.begin() < cPressure && cPressure < *it) {
                        chamberPressureF = cPressure;
                    } else {
                          QString range = QString("(%1, %2)").arg(chamberPressureRange.front()).arg(chamberPressureRange.back());
                          QString rangeMsg = "Value not within valid range: " + range; 
                          QMessageBox::information(nullptr, title, rangeMsg);
                          return;
                    }
                    
                } else {
                    QMessageBox::information(nullptr, title, "Incorrect value");
                    return;
                } 
            }
            //lineEdit_46 For LOX's density -> Float
            //lineEdit_49 For Ethanol's density -> Float
            if (inputNameStdS == "lineEdit_46" || inputNameStdS == "lineEdit_49") {
                float density = inputValue.toFloat(&correctValue);
                if (correctValue) {
                    if (inputNameStdS == "lineEdit_46") {
                        std::list<float> LOX_densityRangeL = LOX_densityRange;
                        auto it = LOX_densityRangeL.begin();
                        std::advance(it, 1);
                        if (*LOX_densityRangeL.begin() < density && density < *it) {
                            loxDensityF = density;
                        } else {
                             QString range = QString("(%1, %2)").arg(LOX_densityRange.front()).arg(LOX_densityRange.back());
                             QString rangeMsg = "Value not within valid range: " + range; 
                             QMessageBox::information(nullptr, title, rangeMsg);
                             return;
                        }
                    } else {
                          std::list<float> Ethanol_densityRangeL = Ethanol_densityRange; 
                          auto it = Ethanol_densityRangeL.begin();
                          std::advance(it, 1);
                          if (*Ethanol_densityRangeL.begin() < density && density < *it) {
                              ethanolDensityF = density;
                          } else {
                             QString range = QString("(%1, %2)").arg(Ethanol_densityRange.front()).arg(Ethanol_densityRange.back());
                             QString rangeMsg = "Value not within valid range: " + range;
                             QMessageBox::information(nullptr, title, rangeMsg);
                             return;
                          }
                    }
                    
                } else {
                    QMessageBox::information(nullptr, title, "Incorrect value");
                    return;
                }
            }
            //lineEdit_47 For LOX's specific heat -> Double
            //lineEdit_50 For Ethanol's specific heat -> Double
            if (inputNameStdS == "lineEdit_47" || inputNameStdS == "lineEdit_50") {
                double sHeat = inputValue.toDouble(&correctValue);
                if (correctValue) {
                    if (inputNameStdS == "lineEdit_47") {
                        std::list<double> LOX_specificHeatRangeL = LOX_specificHeatRange;
                        auto it = LOX_specificHeatRangeL.begin();
                        std::advance(it, 1);
                        if (*LOX_specificHeatRangeL.begin() < sHeat && sHeat < *it) {
                            loxSpecificHeatF = sHeat;
                        } else {
                              QString range = QString("(%1, %2)").arg(LOX_specificHeatRange.front()).arg(LOX_specificHeatRange.back());
                              QString rangeMsg = "Value not within valid range: " + range; 
                              QMessageBox::information(nullptr, title, rangeMsg);
                              return;
                        }
                    } else {
                          std::list<double> Ethanol_specificHeatRangeL = Ethanol_specificHeatRange;
                          auto it = Ethanol_specificHeatRangeL.begin();
                          std::advance(it, 1);
                          if (*Ethanol_specificHeatRangeL.begin() < sHeat && sHeat < *it) {
                              ethanolSpecificHeatF = sHeat;
                          } else {
                                QString range = QString("(%1, %2)").arg(Ethanol_specificHeatRange.front()).arg(Ethanol_specificHeatRange.back());
                                QString rangeMsg = "Value not within valid range: " + range; 
                                QMessageBox::information(nullptr, title, rangeMsg);
                                return;
                          }
                      }
                } else {
                    QMessageBox::information(nullptr, title, "Incorrect value");
                    return;
                }
            }    
            //lineEdit_48 For LOX's burning temp -> Int
            //lineEdit_51 For Ethanol's burning temp -> Int
            if (inputNameStdS == "lineEdit_48" || inputNameStdS == "lineEdit_51") {
                int bTemp = inputValue.toInt(&correctValue);
                if (correctValue) {
                    if (inputNameStdS == "lineEdit_48") {
                        std::list<int> LOX_burningTemperatureRangeL = LOX_burningTemperatureRange;
                        auto it = LOX_burningTemperatureRangeL.begin();
                        std::advance(it, 1);
                        if (*LOX_burningTemperatureRangeL.begin() < bTemp && bTemp < *it) {
                            loxBurningTempF = bTemp;
                        } else {
                              QString range = QString("(%1, %2)").arg(LOX_burningTemperatureRange.front()).arg(LOX_burningTemperatureRange.back());
                              QString rangeMsg = "Value not within valid range: " + range; 
                              QMessageBox::information(nullptr, title, rangeMsg);
                              return;
                        }
                    } else {
                          std::list<int> Ethanol_burningTemperatureRangeL = Ethanol_burningTemperatureRange;
                          auto it = Ethanol_burningTemperatureRangeL.begin();
                          std::advance(it, 1);
                          if (*Ethanol_burningTemperatureRangeL.begin() < bTemp && bTemp < *it) {
                              ethanolBurningTempF = bTemp;
                          } else {
                                QString range = QString("(%1, %2)").arg(Ethanol_burningTemperatureRange.front()).arg(Ethanol_burningTemperatureRange.back());
                                QString rangeMsg = "Value not within valid range: " + range; 
                                QMessageBox::information(nullptr, title, rangeMsg);
                                return;
                          }
                    }
                } else {
                    QMessageBox::information(nullptr, title, "Incorrect value");
                    return;
                }
            }    
        }
    }
     
    // All inputs are valid, proceed with calculation.
    // Call for calculation function, which calls update function
    calculate(crossSectionalAreaF, chamberLengthF, nozzleLengthF, nozzleThroatAreaF, nozzleExitAreaF, massFlowRateF, thrustF, chamberPressureF, loxDensityF, loxSpecificHeatF, loxBurningTempF, ethanolDensityF, ethanolSpecificHeatF, ethanolBurningTempF);

    
}

// Function to fill generic LOX values to GUI
void fillGenericValues1() {

    ui->lineEdit_46->setText(LOX_properties.at(1)); // Density  
    ui->lineEdit_47->setText(LOX_properties.at(2)); // Specific heat
    ui->lineEdit_48->setText(LOX_properties.at(3)); // Burning temperature
}

// Function to fill generic ethanol values to GUI
void fillGenericValues2() {

    ui->lineEdit_49->setText(Ethanol_properties.at(1)); // Density
    ui->lineEdit_50->setText(Ethanol_properties.at(2)); // Specific heat
    ui->lineEdit_51->setText(Ethanol_properties.at(3)); // Burning temperature
}


//TODO: Delete this
void validateInputsCaller(QList<QPair<QString, QString>> inputList) {
    //qDebug() << "Debug message";
    // Loop through the inputList and validate each value
    /*
    for (auto input : inputList) {
        QString name = input.first;
        QString value = input.second;
        //validateInput(name, value);
        std::cout << name.toStdString() << value.toStdString() << std::endl;

    }
    */
    
    validateInputs(inputList, crossSectionalAreaF, chamberLengthF, nozzleLengthF, nozzleThroatAreaF, nozzleExitAreaF, massFlowRateF, thrustF, chamberPressureF, loxDensityF, loxSpecificHeatF, loxBurningTempF, ethanolDensityF, ethanolSpecificHeatF, ethanolBurningTempF);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow MainWindow;
    //Ui_MainWindow ui;
    ui = new Ui_MainWindow;
    ui->setupUi(&MainWindow);
    
    //ui.connectButtonToFunction(ui.pushButton, &test);
    MainWindow.show();
    return a.exec();
}

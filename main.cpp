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
*/

void calculate(double& crossSectionalAreaF, double& chamberLengthF, double& nozzleLengthF, double& nozzleThroatAreaF, double& nozzleExitAreaF, double& massFlowRateF, int& thrustF, int& chamberPressureF, float& loxDensityF, double& loxSpecificHeatF, int& loxBurningTempF, float& ethanolDensityF, double& ethanolSpecificHeatF, int& ethanolBurningTempF) {

    double loxDensityFDouble = loxDensityF;
    std::cout << "loxDensityFDouble: " << loxDensityFDouble << std::endl;

    double ethanolDensityFDouble = ethanolDensityF;
    std::cout << "ethanolDensityFDouble: " << ethanolDensityFDouble << std::endl;

    double loxBurningTempFDouble = loxBurningTempF;
    std::cout << "loxBurningTempFDouble: " << loxBurningTempFDouble << std::endl;

    double ethanolBurningTempFDouble = ethanolBurningTempF;
    std::cout << "ethanolBurningTempFDouble: " << ethanolBurningTempFDouble << std::endl;

    double thrustFDouble = thrustF;
    std::cout << "thrustFDouble: " << thrustFDouble << std::endl;

    double chamberPressureFDouble = chamberPressureF * 100000.0;
    std::cout << "chamberPressureFDouble: " << chamberPressureFDouble << std::endl;

    double A_Flame = adiabaticFlameTemperature(loxSpecificHeatF, ethanolSpecificHeatF);
    std::cout << "A_Flame: " << A_Flame << std::endl; 

    double rho = calculateCPDensity(chamberPressureFDouble, A_Flame);
    std::cout << "rho: " << rho << std::endl;

    double gamma = calculateGamma(loxSpecificHeatF, ethanolSpecificHeatF); 
    std::cout << "gamma: " << gamma << std::endl;
    
    double P_exit = estimateNEPressure(chamberPressureFDouble, gamma, N_a_r, true);
    std::cout << "P_exit: " << P_exit << std::endl;

    double R_mix = calculateGasConstant(Lox_ethanol_ratio);
    std::cout << "R_mix: " << R_mix << std::endl;

    double V_t = calculateTVelocity(R_mix, A_Flame, P_exit, gamma, chamberPressureFDouble);
    std::cout << "V_t: " << V_t << std::endl;

    // Lox_ethanol_ratio from genericvalues
    double G_c= calculateGasConstant(Lox_ethanol_ratio);
    std::cout << "G_c: " << G_c << std::endl;

    double C_e_v = calculateEVelocity(A_Flame, gamma, G_c, chamberPressureFDouble);
    std::cout << "C_e_v: " << C_e_v << std::endl;

    massFlowRateF = calculateMFRate(thrustFDouble, C_e_v);
    std::cout << "massFlowRateF: " << massFlowRateF << std::endl;

    double A_e = calculateNEArea(thrustFDouble, chamberPressureFDouble, C_e_v);
    std::cout << "A_e: " << A_e << std::endl;

    double A_t = calculateNTArea(A_e);
    std::cout << "A_t: " << A_t << std::endl;

    double B_p = calculateBPressure(chamberPressureFDouble, A_Flame, A_Flame, loxSpecificHeatF, ethanolSpecificHeatF);
    std::cout << "B_p: " << B_p << std::endl;

    double C_vel = calculateCVel(A_t, chamberPressureFDouble, massFlowRateF, A_Flame);  
    std::cout << "C_vel: " << C_vel << std::endl;

    double A_c = calculateCSArea(A_t);
    std::cout << "A_c: " << A_c << std::endl; 
    
    double V_chamber = calculateVCChamber(C_vel, chamberPressureFDouble, C_vel);
    std::cout << "V_chamber: " << V_chamber << std::endl;
    
    double temp = (A_t * Conv_1k);
    double D_n_t = calculateNDiameter(temp);
    std::cout << "D_n_t: " << D_n_t << std::endl;

    double D_c = estimateCSDiameter(D_n_t);
    std::cout << "D_c: " << D_c << std::endl;

    double L_c = calculateCSLength(D_c, C_vel);
    std::cout << "L_c: " << L_c << std::endl;

    double L_n = calculateNLength(D_n_t);
    std::cout << "L_n: " << L_n << std::endl;

    double V_n = calculateVNozzle(A_t, A_e, L_n);
    std::cout << "V_n: " << V_n << std::endl;

    double A_n_c_p = calculateNCPArea(A_t, A_e, L_n);
    std::cout << "A_n_c_p: " << A_n_c_p << std::endl;

    double R_f = calculateFRad(D_c);
    std::cout << "R_f: " << R_f << std::endl;

    double R_c = calculateCCRad(D_c, A_t, R_f);
    std::cout << "R_c: " << R_c << std::endl;

    double CC_t_w_a = calculateCWArea(V_chamber, L_c, R_c, A_t, R_f);
    std::cout << "CC_t_w_a: " << CC_t_w_a << std::endl;

    double D_n_e = calculateNDiameter(A_e);
    std::cout << "D_n_e: " << D_n_e << std::endl;

    double R_n_t = D_n_t / 2;
    std::cout << "R_n_t: " << R_n_t << std::endl;

    double R_n_e = D_n_e / 2;
    std::cout << "R_n_e: " << R_n_e << std::endl;

    double theta = calculateDHAngle(R_n_e, R_n_t, L_n);
    std::cout << "theta: " << theta << std::endl;
    
    double H_d_s = calculateDHeight(L_n, theta);
    std::cout << "H_d_s: " << H_d_s << std::endl;
    
    double A_n_w = calculateNWArea(R_n_t, R_n_e, H_d_s, L_n);
    std::cout << "A_n_w: " << A_n_w << std::endl;
    
    double Isp = calculateISP(thrustFDouble, massFlowRateF);
    std::cout << "Isp: " << Isp << std::endl;
    
    // TODO: Ask from user in gui, implement like so: ui->lcdNumber_39->display(QString::number(V_n, 'f', decimalCut));
    int decimalCut = 3;
    
    
    /* Here values are updated to gui. Unit-conversions are done at this phase,
    for sake of simplicity, because equations and units are in relation in calculation 
    entity.
    */ 
    
    // Volume of the Nozzle (Unit: cm^3)
    ui->lcdNumber_39->display(QString::number((V_n * Conv_to_cm3 * Conv_10k), 'f', decimalCut));
    
    // Cross-sectional area of the Nozzle throat (Unit: cm^2)
    ui->lcdNumber_40->display(QString::number((A_t * Conv_to_cm2 * Conv_1k), 'f', decimalCut));
    
    // Volume of the combustion chamber (Unit: cm^3)
    ui->lcdNumber_38->display(QString::number((V_chamber * Conv_1k), 'f', decimalCut));
    
    // Length of the combustion chamber (Unit: cm)
    ui->lcdNumber_42->display(QString::number((L_c / Conv_100 * R_factor), 'f', decimalCut));
    
    // Nozzle length (Unit: cm)
    ui->lcdNumber_41->display(QString::number((L_n * Conv_100), 'f', decimalCut));
    
    // Center-plane area of the combustion chamber (Unit: cm^2)
    ui->lcdNumber_44->display(QString::number((A_c * Conv_1m) * Conv_100, 'f', decimalCut));
    
    // Center-plane area of the nozzle (Unit: cm^2)
    ui->lcdNumber_45->display(QString::number((A_n_c_p * Conv_1m * Conv_100), 'f', decimalCut));
    
    // Wall area of the Combustion chamber (Unit: cm^2)
    ui->lcdNumber_46->display(QString::number((CC_t_w_a / Conv_1m / Conv_100), 'f', decimalCut));
    
    // Diameter of the nozzle exit (Unit: cm)
    ui->lcdNumber_48->display(QString::number((D_n_e * Conv_10k), 'f', decimalCut));
    
    // Throat diameter (Unit: cm)
    ui->lcdNumber_49->display(QString::number((D_n_t * Conv_to_cm), 'f', decimalCut));
    
    // Wall area of the nozzle (Unit: cm^2)
    ui->lcdNumber_47->display(QString::number((A_n_w * Conv_to_cm2), 'f', decimalCut));
    
    // Massflowrate (Unit: kg/s)
    ui->lcdNumber_43->display(QString::number(massFlowRateF, 'f', decimalCut));
    
    // Cross-sectional area of the nozzle exit (Unit: cm^2) 
    ui->lcdNumber_51->display(QString::number((A_e * Conv_1m * Conv_100), 'f', decimalCut));
    
    // Specific impulse (Unit: s) 
    ui->lcdNumber_50->display(QString::number(Isp, 'f', decimalCut));

    // Charasteristic velocity (Unit: m/s) 
    ui->lcdNumber_52->display(QString::number(C_vel, 'f', decimalCut));
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

//TODO: Connect calculate-button straight to validateInputs?
void validateInputsCaller(QList<QPair<QString, QString>> inputList) {    
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

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
//
Ui_MainWindow *ui;

// @ Jukka J
// Created: 04.04.2023
// Last modification:7.04.2023

/* TODO:
Store inputs Yes
Store calculated values 

Create:
Validation entity and prepared statements for validation messages yes
Calculation entity
Updater entity
Optimization entity
Action listeners for gen. value fills and calculate-event
*/


void calculateAndUpdate() {

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
    calculateAndUpdate();
    std::cout << "End of func" << intStr << std::endl;
}


//TODO: Delete this
void validateInputsCaller(QList<QPair<QString, QString>> inputList) {
    qDebug() << "Debug message";
    // Loop through the inputList and validate each value
    for (auto input : inputList) {
        QString name = input.first;
        QString value = input.second;
        //validateInput(name, value);
        std::cout << name.toStdString() << value.toStdString() << std::endl;

    }
    
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

//
// Created by PC on 19.06.2024.
//

#ifndef UNITCONVERTER_H
#define UNITCONVERTER_H

#include <string>
using namespace std;

double convertLength(double value, string from, string to);
double convertWeight(double value, string from, string to);
double convertTime(double value, string from, string to);
double convertTemperature(double value, string from, string to);
double convertVolume(double value, string from, string to);

#endif
#include <iostream>
#include <string>
#include "unitconverter.h"

using namespace std;

int main() {
    double value;
    string from, to;

    cout << "Enter the value and units to convert from (e.g., 10 cm): ";
    cin >> value >> from;
    cout << "Enter the unit to convert to (e.g., m): ";
    cin >> to;

    double result;
    if (from == "cm" || from == "m" || from == "km" || from == "dm") {
        result = convertLength(value, from, to);
    } else if (from == "kg" || from == "g" || from == "t") {
        result = convertWeight(value, from, to);
    } else if (from == "s" || from == "min" || from == "h") {
        result = convertTime(value, from, to);
    } else if (from == "C" || from == "F" || from == "K") {
        result = convertTemperature(value, from, to);
    } else if (from == "l" || from == "ml") {
        result = convertVolume(value, from, to);
    } else {
        cout << "Invalid units!" << endl;
        return 0;
    }

    cout << value << " " << from << " = " << result << " " << to << endl;

    return 0;
}

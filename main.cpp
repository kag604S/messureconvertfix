#include <iostream>
#include <string>
#include "unitconverter.h"

using namespace std;

int main() {
    double value;
    string from, to;


    do{
        int error = 1;
    cout << "\nEnter the value and units to convert from (e.g., 10 cm) (type 0 for exit): ";
    cin >> value;
        if(value == 0){
            return 0;
        }
    cin >> from;
    cout << "Enter the unit to convert to (e.g., m): ";
    cin >> to;


    double result;
    if (from == "cm" || from == "m" || from == "km" || from == "dm") {
        if (to == "cm" || to == "m" || to == "km" || to == "dm"){
        result = convertLength(value, from, to);
            }
        else{
            cout << "\nyou cant convert " << from << "to " << to ;
            return 1;
        }
    } else if (from == "kg" || from == "g" || from == "t") {

        if (to == "kg" || to == "g" || to == "t" ){
            result = convertWeight(value, from, to);
        }
        else{
            cout << "\nyou cant convert " << from << "to " << to ;
            return 1;
        }
    } else if (from == "s" || from == "min" || from == "h") {

        if (to == "s" || to == "min" || to == "h" ){
            result = convertTime(value, from, to);
        }
        else{
            cout << "\nyou cant convert " << from << "to " << to ;
            return 1;
        }
    } else if (from == "C" || from == "F" || from == "K") {

        if (to == "C" || to == "F" || to == "K"){
            result = convertTemperature(value, from, to);
        }
        else{
            cout << "\nyou cant convert " << from << "to " << to ;
            return 1;
        }
    } else if (from == "l" || from == "ml") {

        if (to == "l" || to == "ml" ){
            result = convertVolume(value, from, to);;
        }
        else{
            cout << "\nyou cant convert " << from << "to " << to ;
            return 1;
        }
    } else {
        cout << "\nInvalid units!" << endl;
        error = 2;
    }

    if(result>=2147483647 || result<=-2147483647 ){
        cout << "\nresult is to high";
        return 1;

    }

    if(to == "C" && result< -273.15){
        cout << "\nCan't go lower than zero absolute";
        error = 2;
    }

    if(to == "F" && result< -459){
        cout << "\nCan't go lower than zero absolute";
        error = 2;
    }


        if (error == 1){
    cout <<"\n" << value << " " << from << " = " << result << " " << to << endl;
            }

        } while (1==1);

}

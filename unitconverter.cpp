#include "unitconverter.h"

using namespace std;

double convertLength(double value, string from, string to) {
    double result;
    if (from == "cm") {
        if (to == "m") {
            result = value / 100.0;
        } else if (to == "km") {
            result = value / 100000.0;
        } else if (to == "dm") {
            result = value / 10.0;
        } else {
            result = value;
        }
    } else if (from == "m") {
        if (to == "cm") {
            result = value * 100.0;
        } else if (to == "km") {
            result = value / 1000.0;
        } else if (to == "dm") {
            result = value * 10.0;
        } else {
            result = value;
        }
    } else if (from == "km") {
        if (to == "cm") {
            result = value * 100000.0;
        } else if (to == "m") {
            result = value * 1000.0;
        } else if (to == "dm") {
            result = value * 10000.0;
        } else {
            result = value;
        }
    } else if (from == "dm") {
        if (to == "cm") {
            result = value * 10.0;
        } else if (to == "m") {
            result = value / 10.0;
        } else if (to == "km") {
            result = value / 10000.0;
        } else {
            result = value;
        }
    }
    return result;
}

double convertWeight(double value, string from, string to) {
    double result;
    if (from == "kg") {
        if (to == "g") {
            result = value * 1000.0;
        } else if (to == "t") {
            result = value / 1000.0;
        } else {
            result = value;
        }
    } else if (from == "g") {
        if (to == "kg") {
            result = value / 1000.0;
        } else if (to == "t") {
            result = value / 1000000.0;
        } else {
            result = value;
        }
    } else if (from == "t") {
        if (to == "kg") {
            result = value * 1000.0;
        } else if (to == "g") {
            result = value * 1000000.0;
        } else {
            result = value;
        }
    }
    return result;
}

double convertTime(double value, string from, string to) {
    double result;
    if (from == "s") {
        if (to == "min") {
            result = value / 60.0;
        } else if (to == "h") {
            result = value / 3600.0;
        } else {
            result = value;
        }
    } else if (from == "min") {
        if (to == "s") {
            result = value * 60.0;
        } else if (to == "h") {
            result = value / 60.0;
        } else {
            result = value;
        }
    } else if (from == "h") {
        if (to == "s") {
            result = value * 3600.0;
        } else if (to == "min") {
            result = value * 60.0;
        } else {
            result = value;
        }
    }
    return result;
}

double convertTemperature(double value, string from, string to) {
    double result;
    if (from == "C") {
        if (to == "F") {
            result = (value * 9.0 / 5.0) + 32.0;
        } else if (to == "K") {
            result = value + 273.15;
        } else {
            result = value;
        }
    } else if (from == "F") {
        if (to == "C") {
            result = (value - 32.0) * 5.0 / 9.0;
        } else if (to == "K") {
            result = (value + 459.67) * 5.0 / 9.0;
        } else {
            result = value;
        }
    } else if (from == "K") {
        if (to == "C") {
            result = value - 273.15;
        } else if (to == "F") {
            result = (value * 9.0 / 5.0) - 459.67;
        } else {
            result = value;
        }
    }
    return result;
}

double convertVolume(double value, string from, string to) {
    double result;
    if (from == "l") {
        if (to == "ml") {
            result = value * 1000.0;
        } else {
            result = value;
        }
    } else if (from == "ml") {
        if (to == "l") {
            result = value / 1000.0;
        } else {
            result = value;
        }
    }
    return result;
}
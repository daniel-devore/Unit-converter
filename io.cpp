// Functions to get user input and print answers to screen

#include "io.h"
#include <iostream>
#include <string>

// Get units that are to be converted
char getUnitChar() {

    std::cout << "What units are to be converted? " 
        << "(E: energy, T: temperature, D: distance) ";

    char unt { };

    std::cin >> unt;

    return unt;

}

// Get unit that temperature is being converted from
char fromTunt() {

    std::cout << "What unit of Temperature converting from? (C: Celsius, F: Fahrenheit, K: Kelvin) ";

    char untT { };

    std::cin >> untT;

    return untT;

}

// Get unit that temperature is being converted to
char toTunt() {

    std::cout << "What unit of Temperature converting to? " 
        << "(C: Celsius, F: Fahrenheit, K: Kelvin) ";

    char untT { };

    std::cin >> untT;

    return untT;

}

// Get decimal or integer value for conversion from user
double getUserValue() {

    std::cout << "What is the value needed for conversion? ";

    double x {};

    std::cin >> x;

    return x;

}

// Print value of conversion to screen
void PrintValue(double x, std::string fromunt, double y, std::string tount) {

    // std::cout << x << " m = " << y << " km" << std::endl;
    // std::cout << x << " m = " << y << " Mm" << std::endl;
    std::cout << x << " " << fromunt << " == " << y 
        << " " << tount << std::endl; 

}

/*

    This program converts (metric) units of length, energy, and temperature 
    into different unit scales

    Ex. meters into kilometers
    Ex. C into K, etc.

    Created by: Daniel Devore, Ph.D.
    Vers.: 1.7 -- clean
    Date: Aug. 26, 2024

*/

#include "io.h"
#include "temp.h"
#include "SI-conv.h"
#include "nrg.h"
#include <string>

int main()
{

    char untConv { getUnitChar() };
    double fromVal { getUserValue() };
    double toVal { };
    std::string frun { };
    std::string tun { };

    if (untConv == 'T') {
        std::cout << "Converting temperature " << std::endl;
        // Get the unit that is converting from
        char untfrom { fromTunt() };
        // Get the unit that is converting to
        char untto { toTunt() };
        // Get the value of the original temperature
        toVal = Tconv(fromVal, untfrom, untto);
        frun = std::string(1, untfrom);
        tun = std::string(1, untto);
    }

    else if (untConv == 'D') {
        std::cout << "Conerting distance " << std::endl;
        std::cout << "What unit converting from? ";
        std::getline(std::cin >> std::ws, frun);
        std::cout << "What unit converting to? ";
        std::getline(std::cin >> std::ws, tun);

        toVal = ou_to_nu(fromVal, frun, tun);
    }

    else {
        std::cout << "Converting Energy " << std::endl;
        std::cout << "What unit converting from? (H: hartrees, kJ: kJ/mol, J: J, eV: eV, kcal: kcal/mol, wn: cm^-1) ";
        std::getline(std::cin >> std::ws, frun);
        std::cout << "What unit converting to? ";
        std::getline(std::cin >> std::ws, tun);

        toVal = oE_to_nE(fromVal, frun, tun);
    }

    PrintValue(fromVal, frun, toVal, tun);

    return 0;

}

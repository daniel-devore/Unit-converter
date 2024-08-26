//  Convert metric units of length into different metric length scales

#include "SI-conv.h"
#include <string>

// Convert from the base unit to other unit with only one char as prefix
double bu_to_nu(double x, std::string newunt) {

    double newval { };

    if (newunt == "Qm")
        newval = x / 1e30;

    if (newunt == "Rm")
        newval = x / 1e27;

    if (newunt == "Ym")
        newval = x / 1e24;

    if (newunt == "Zm")
        newval = x / 1e21;

    if (newunt == "Em")
        newval = x / 1e18;

    if (newunt == "Pm")
        newval = x / 1e15;

    if (newunt == "Tm")
        newval = x / 1e12;

    if (newunt == "Gm")
        newval = x / 1e9;

    if (newunt == "Mm")
        newval = x / 1e6;

    if (newunt == "km")
        newval = x / 1e3;

    if (newunt == "hm")
        newval = x / 1e2;

    if (newunt == "dam")
        newval = x / 1e1;

    if (newunt == "dm")
        newval = x / 1e-1;

    if (newunt == "cm")
        newval = x / 1e-2;

    if (newunt == "mm")
        newval = x / 1e-3;

    if (newunt == "mim")
        newval = x / 1e-6;

    if (newunt == "nm")
        newval = x / 1e-9;

    if (newunt == "pm")
        newval = x / 1e-12;

    if (newunt == "fm")
        newval = x / 1e-15;

    if (newunt == "am")
        newval = x / 1e-18;

    if (newunt == "zm")
        newval = x / 1e-21;

    if (newunt == "ym")
        newval = x / 1e-24;

    if (newunt == "rm")
        newval = x / 1e-27;

    if (newunt == "qm")
        newval = x / 1e-30;

    return newval;

}

// Convert from the base unit to other unit with only one char as prefix
double ou_to_bu(double x, std::string oldunt) {

    double newval { };

    if (oldunt == "Qm")
        newval = x * 1e30;

    if (oldunt == "Rm")
        newval = x * 1e27;

    if (oldunt == "Ym")
        newval = x * 1e24;

    if (oldunt == "Zm")
        newval = x * 1e21;

    if (oldunt == "Em")
        newval = x * 1e18;

    if (oldunt == "Pm")
        newval = x * 1e15;

    if (oldunt == "Tm")
        newval = x * 1e12;

    if (oldunt == "Gm")
        newval = x * 1e9;

    if (oldunt == "Mm")
        newval = x * 1e6;

    if (oldunt == "km")
        newval = x * 1e3;

    if (oldunt == "hm")
        newval = x * 1e2;

    if (oldunt == "dam")
        newval = x * 1e1;

    if (oldunt == "dm")
        newval = x * 1e-1;

    if (oldunt == "cm")
        newval = x * 1e-2;

    if (oldunt == "mm")
        newval = x * 1e-3;

    if (oldunt == "mim")
        newval = x * 1e-6;

    if (oldunt == "nm")
        newval = x * 1e-9;

    if (oldunt == "pm")
        newval = x * 1e-12;

    if (oldunt == "fm")
        newval = x * 1e-15;

    if (oldunt == "am")
        newval = x * 1e-18;

    if (oldunt == "zm")
        newval = x * 1e-21;

    if (oldunt == "ym")
        newval = x * 1e-24;

    if (oldunt == "rm")
        newval = x * 1e-27;

    if (oldunt == "qm")
        newval = x * 1e-30;

    return newval;

}

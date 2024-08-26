// Convert Energy units
// Convert from and to Hartrees

#include "nrg.h"

double hart_to_nE(double oldnrg, std::string newEunit) {

    double newnrg { };

    if (newEunit == "eV") {
        newnrg = oldnrg * 27.211386;
    }

    if (newEunit == "wn") {
        newnrg = oldnrg * 219474.63;
    }

    if (newEunit == "kcal") {
        newnrg = oldnrg * 627.5095;
    }

    if (newEunit == "kJ") {
        newnrg = oldnrg * 2625.5;
    }

    if (newEunit == "J") {
        newnrg = oldnrg * 4.359e-18;
    }

    return newnrg;

}

double oE_to_hart(double oldnrg, std::string oldEunit) {

    double newnrg { };

    if (oldEunit == "eV") {
        newnrg = oldnrg / 27.211386;
    }

    if (oldEunit == "wn") {
        newnrg = oldnrg / 219474.63;
    }

    if (oldEunit == "kcal") {
        newnrg = oldnrg / 627.5095;
    }

    if (oldEunit == "kJ") {
        newnrg = oldnrg / 2625.5;
    }

    if (oldEunit == "J") {
        newnrg = oldnrg / 4.359e-18;
    }

    return newnrg;
    
}

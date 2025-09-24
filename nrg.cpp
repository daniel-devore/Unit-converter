// Convert Energy units
// Convert from and to Hartrees

#include "nrg.h"

double oE_to_nE(double& oldnrg, const std::string& oldEunit, const std::string& newEunit)
{
    // Convert to base unit, Hartrees
    double hrtnrg = oldEunit == "eV"   ? oldnrg / 27.211386 :
                    oldEunit == "wn"   ? oldnrg / 219474.63 :
                    oldEunit == "kcal" ? oldnrg / 627.5095  :
                    oldEunit == "kJ"   ? oldnrg / 2625.5    :
                    oldEunit == "J"    ? oldnrg / 4.359e-18 :
                                         oldnrg / 1.0;

    // Convert to new unit
    double newnrg = newEunit == "eV"   ? hrtnrg * 27.211386 :
                    newEunit == "wn"   ? hrtnrg * 219474.63 :
                    newEunit == "kcal" ? hrtnrg * 627.5095  :
                    newEunit == "kJ"   ? hrtnrg * 2625.5    :
                    newEunit == "J"    ? hrtnrg * 4.359e-18 :
                                         hrtnrg * 1.0;

    return newnrg;
}


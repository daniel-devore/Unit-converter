// Convert Energy units
// Convert from and to Hartrees

#include "nrg.h"

double hart_to_nE(double& oldnrg, const std::string& newEunit)
{
    double newnrg = newEunit == "eV"   ? oldnrg * 27.211386 :
                    newEunit == "wn"   ? oldnrg * 219474.63 :
                    newEunit == "kcal" ? oldnrg * 627.5095  :
                    newEunit == "J"    ? oldnrg * 2625.5    :
                                         oldnrg * 4.359e-18;

    return newnrg;

}

double oE_to_hart(double& oldnrg, const std::string& oldEunit)
{
    double newnrg = oldEunit == "eV"   ? oldnrg / 27.211386 :
                    oldEunit == "wn"   ? oldnrg / 219474.63 :
                    oldEunit == "kcal" ? oldnrg / 627.5095  :
                    oldEunit == "J"    ? oldnrg / 2625.5    :
                                         oldnrg / 4.359e-18;

    return newnrg;
    
}

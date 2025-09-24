//  Convert metric units of length into different metric length scales

#include "SI-conv.h"
#include <string>

// Convert from the base unit to other unit with only one char as prefix
double bu_to_nu(double& x, const std::string& newunt) 
{
    double newval = newunt == "Qm"  ? x / 1e30  :
                    newunt == "Rm"  ? x / 1e27  :
                    newunt == "Ym"  ? x / 1e24  :
                    newunt == "Zm"  ? x / 1e21  :
                    newunt == "Em"  ? x / 1e18  :
                    newunt == "Pm"  ? x / 1e15  :
                    newunt == "Tm"  ? x / 1e12  :
                    newunt == "Gm"  ? x / 1e9   :
                    newunt == "Mm"  ? x / 1e6   :
                    newunt == "km"  ? x / 1e3   :
                    newunt == "hm"  ? x / 1e2   :
                    newunt == "dam" ? x / 1e1   :
                    newunt == "dm"  ? x / 1e-1  :
                    newunt == "cm"  ? x / 1e-2  :
                    newunt == "mm"  ? x / 1e-3  :
                    newunt == "mim" ? x / 1e-6  :
                    newunt == "nm"  ? x / 1e-9  :
                    newunt == "pm"  ? x / 1e-12 :
                    newunt == "fm"  ? x / 1e-15 :
                    newunt == "am"  ? x / 1e-18 :
                    newunt == "zm"  ? x / 1e-21 :
                    newunt == "ym"  ? x / 1e-24 :
                    newunt == "rm"  ? x / 1e-27 :
                    newunt == "qm"  ? x / 1e-30 :
                                      x / 1;  

    return newval;

}

// Convert from the base unit to other unit with only one char as prefix
double ou_to_bu(double& x, const std::string& oldunt) 
{
    double newval = oldunt == "Qm"  ? x * 1e30  :
                    oldunt == "Rm"  ? x * 1e27  :
                    oldunt == "Ym"  ? x * 1e24  :
                    oldunt == "Zm"  ? x * 1e21  :
                    oldunt == "Em"  ? x * 1e18  :
                    oldunt == "Pm"  ? x * 1e15  :
                    oldunt == "Tm"  ? x * 1e12  :
                    oldunt == "Gm"  ? x * 1e9   :
                    oldunt == "Mm"  ? x * 1e6   :
                    oldunt == "km"  ? x * 1e3   :
                    oldunt == "hm"  ? x * 1e2   :
                    oldunt == "dam" ? x * 1e1   :
                    oldunt == "dm"  ? x * 1e-1  :
                    oldunt == "cm"  ? x * 1e-2  :
                    oldunt == "mm"  ? x * 1e-3  :
                    oldunt == "mim" ? x * 1e-6  :
                    oldunt == "nm"  ? x * 1e-9  :
                    oldunt == "pm"  ? x * 1e-12 :
                    oldunt == "fm"  ? x * 1e-15 :
                    oldunt == "am"  ? x * 1e-18 :
                    oldunt == "zm"  ? x * 1e-21 :
                    oldunt == "ym"  ? x * 1e-24 :
                    oldunt == "rm"  ? x * 1e-27 :
                    oldunt == "qm"  ? x * 1e-30 :
                                      x * 1;

    return newval;

}

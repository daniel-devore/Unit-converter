//  Convert metric units of length into different metric length scales

#include "SI-conv.h"
#include <string>

double ou_to_nu(double& x, const std::string& oldunt, const std::string& newunt)
{
    double basval = oldunt == "Qm"  ? x * 1e30  :
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
                                      x * 1e0   ;

    double newval = newunt == "Qm"  ? basval / 1e30  :
                    newunt == "Rm"  ? basval / 1e27  :
                    newunt == "Ym"  ? basval / 1e24  :
                    newunt == "Zm"  ? basval / 1e21  :
                    newunt == "Em"  ? basval / 1e18  :
                    newunt == "Pm"  ? basval / 1e15  :
                    newunt == "Tm"  ? basval / 1e12  :
                    newunt == "Gm"  ? basval / 1e9   :
                    newunt == "Mm"  ? basval / 1e6   :
                    newunt == "km"  ? basval / 1e3   :
                    newunt == "hm"  ? basval / 1e2   :
                    newunt == "dam" ? basval / 1e1   :
                    newunt == "dm"  ? basval / 1e-1  :
                    newunt == "cm"  ? basval / 1e-2  :
                    newunt == "mm"  ? basval / 1e-3  :
                    newunt == "mim" ? basval / 1e-6  :
                    newunt == "nm"  ? basval / 1e-9  :
                    newunt == "pm"  ? basval / 1e-12 :
                    newunt == "fm"  ? basval / 1e-15 :
                    newunt == "am"  ? basval / 1e-18 :
                    newunt == "zm"  ? basval / 1e-21 :
                    newunt == "ym"  ? basval / 1e-24 :
                    newunt == "rm"  ? basval / 1e-27 :
                    newunt == "qm"  ? basval / 1e-30 :
                                      basval / 1e0   ;

    return newval;
}


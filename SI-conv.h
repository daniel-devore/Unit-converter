#ifndef SI_UNIT_CONV_H
#define SI_UNIT_CONV_H

#include <string>

double bu_to_nu(double& x, const std::string& newunt);
double ou_to_bu(double& x, const std::string& oldunt);

#endif

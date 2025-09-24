#ifndef E_CONV_H
#define E_CONV_H

#include <string>

double hart_to_nE(double& oldnrg, const std::string& newEunit);
double oE_to_hart(double& oldnrg, const std::string& oldEunit);

#endif

// Code file for converting temperature

#include "temp.h"

double Tconv(double& tem, const char& fromunt, const char& tount)
{

    double newtemp = fromunt == 'C' && tount == 'K' ? tem + 273.15                :
                     fromunt == 'C' && tount == 'F' ? tem * 9 / 5 + 32            :
                     fromunt == 'K' && tount == 'C' ? tem - 273.15                :
                     fromunt == 'K' && tount == 'F' ? (tem - 273.15) * 9 / 5 + 32 :
                     fromunt == 'F' && tount == 'C' ? (tem - 32) * 5 / 9          :
                                                      (tem - 32) * 5 / 9 + 273.15;

    return newtemp;

}

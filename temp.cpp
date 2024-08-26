// Code file for converting temperature

#include "temp.h"

double Tconv(double tem, char fromunt, char tount) {

    double newtemp { };

    if (fromunt == 'C') {
        if (tount == 'K')
            newtemp = tem + 273.15;
        else
            newtemp = tem * 9 / 5 + 32;
    };

    if (fromunt == 'K') {
        if (tount == 'C')
            newtemp = tem - 273.15;
        else
            newtemp = (tem - 273.15) * 9 / 5 + 32;
    };

    if (fromunt == 'F') {
        if (tount == 'C')
            newtemp = (tem - 32) * 5 / 9;
        else
            newtemp = (tem - 32) * 5 / 9 + 273.15;
    };

    return newtemp;

}

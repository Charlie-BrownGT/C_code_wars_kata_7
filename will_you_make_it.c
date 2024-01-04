#include <stdbool.h>

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
    double range = 0;

    range = fuel_left * mpg;

    if(distance_to_pump <= range){
        return true;
    }
    else
    return false;
}
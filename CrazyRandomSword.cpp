/* 
 * File:   CrazyRandomSword.cpp
 * Author: Joshua Carbee   jbc15e
 *  
 */

#include "CrazyRandomSword.h"
#include <stdlib.h>
#include <math.h>
#include <ctime>
double CrazyRandomSword::hit(double armor){
    srand(time(NULL));
    double temp = ((1/3) * hitPoints) - 2;
    double damage = rand() % (int)temp + 2;
    if(damage < 0){
        return 0;
    }
    return damage;
}

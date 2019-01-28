/* 
 * File:   CrazyRandomSword.cpp
 * Author: Joshua Carbee   jbc15e
 *  
 */

#include "CrazyRandomSword.h"
#include <stdlib.h>
#include <math.h>
double CrazyRandomSword::hit(double armor){
    double temp = rand() %(int)floor(((1/3)*hitPoints - 2))  + 2;
    double damage = armor - temp;
    if(damage < 0){
        return 0;
    }
    return damage;
}

/* 
 * File:   CrazyRandomSword.cpp
 * Author: Joshua Carbee   jbc15e
 *  
 */

#include "CrazyRandomSword.h"


double CommonSword::hit(double armor){
    double temp = rand() %((1/3)*hitPoints - 2)  + 2)
    double damage = armor - temp;
    if(damage < 0){
        return 0;
    }
    return damage;
}

/* 
 * File:   CommonBow.cpp
 * Author: Joshua Carbee   jbc15e
 *  
 */

#include "CommonBow.h"


double CommonBow::hit(double armor){
    double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}

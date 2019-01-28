/* 
 * File:   Dart.cpp
 * Author: Joshua Carbee  jbc15e
 *  
 */

#include "Dart.h"


double Dart::hit(double armor){
    double damage = 0;
    if(armor >=20)
    {
	damage = (hitPoints * 2) - armor;	
    }
    else
    {
	damage = hitPoints - armor;
    }
    if(damage < 0){
        return 0;
    }
    return damage;
}

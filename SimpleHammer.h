/* 
 * File:   SimpleHammer.h
 * Author: Joshua Carbee   jbc15e
 * 
 * Created on January 27th, 2019  6:37 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, if armor is less than 30, ignores all armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) //Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */


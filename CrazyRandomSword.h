/* 
 * File:   CrazyRandomSword.h
 * Author: Joshua Carbee
 * 
 * Created on January 28th, 2019  2:38 PM
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword that chooses random numbers
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", (rand() % 93 + 7)) //Calls the constructor with string Crazy random sword and a random number between 7 and 100
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */


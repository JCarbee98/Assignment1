/* 
 * File:   CommonBow.h
 * Author: Joshua Carbee   jbc15e
 * 
 * Created on January 27th, 2019, 6:21 PM
 */

#include <string>
#include "Weapon.h"

#ifndef COMMONBOW_H
#define COMMONBOW_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CommonBow : public Weapon {
public:

    CommonBow() : Weapon("Common bow",25.0) //Calls Weapon(name, hitpoints) constructor with values Common BOW and 25.0
    {
    }

    virtual ~CommonBow() {};

    virtual double hit(double armor);

};

#endif /* COMMONBOW_H */


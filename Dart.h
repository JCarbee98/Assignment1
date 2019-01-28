/* 
 * File:   Dart.h
 * Author: Joshua Carbee   jbc15e
 * 
 * Created on January 28, 2019, 5:58 PM
 */

#include <string>
#include "Weapon.h"

#ifndef DART_H
#define DART_H

/**
 * Defines the behavior of a dart with hitpoints of 10 that does double damage if armor is above 20.
 */
class Dart : public Weapon {
public:

    Dart() : Weapon("Dart",10.0) //Calls Weapon(name, hitpoints) constructor with values Dart and 10.0
    {
    }

    virtual ~Dart() {};

    virtual double hit(double armor);

};

#endif /* DART_H */


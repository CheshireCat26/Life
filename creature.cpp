//
// Created by nail1 on 05.01.2019.
//

#include "creature.h"
#include <cstdlib>


void Creature::eat()
{
    int chane = rand() % 101;
    if (food >= hunger)
        food -= hunger;
    else
    {
        health -= die;
    }
    if (chane >= eatChance && health > 0)
        food += eatSpeed;
}

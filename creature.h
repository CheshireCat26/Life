//
// Created by nail1 on 05.01.2019.
//

#ifndef LIFE_CREATURE_H
#define LIFE_CREATURE_H

class Creature
{
public:
    Creature() : food{100}, health{100} {}

    int getFood() { return food; }
    int getHealth() { return health; }

    void eat(); //Существо пытается есть

private:
    int food;
    int health;
    const static int hunger = 2; //Скорость с которой убывает food
    const static int eatSpeed = 3; //Скорость увеличение food
    const static int die = 2; //Скороть с которой убывает die
    const static int eatChance = 50;
};


#endif //LIFE_CREATURE_H

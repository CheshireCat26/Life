#include <iostream>
#include "creature.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int day = 0;
    Creature c;
    while (c.getHealth() >= 0)
    {
        c.eat();
        day++;
        cout << c.getFood() << endl;
    }

    cout << day << endl;
    return 0;
}
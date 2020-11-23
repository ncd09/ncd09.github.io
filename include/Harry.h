#ifndef HARRY_H
#define HARRY_H
#include <Hero.h>

class Harry : public Hero
{
private:
    bool elderWand = false;
public:
    Harry(int mana);
    int fightDeadEater(int i, int R, int event[]);
    void deadEater(int i, int R, int event[]);
    int severusSnape();
    void faceVoldemort(int i ,int R, int event[]);
};

#endif // HARRY_H

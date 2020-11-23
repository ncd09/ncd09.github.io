#ifndef GINNY_H
#define GINNY_H
#include <Hero.h>

class Ginny : public Hero
{
   public:
        Ginny(int mana);
        void faceGiant(int i, int R, int event[]);
};

#endif // GINNY_H

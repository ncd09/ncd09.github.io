#ifndef HERMIONE_H
#define HERMIONE_H
#include <Hero.h>

class Hermione : public Hero
{
   public:
       Hermione(int mana);
       void faceGiant(int i, int R, int event[]);
};

#endif // HERMIONE_H

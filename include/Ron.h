#ifndef RON_H
#define RON_H
#include <Hero.h>

class Ron: public Hero
{
   public:
       Ron(int mana);
       void regen(int R);
       int findPrime(int x);

};

#endif // RON_H

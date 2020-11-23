#include "Hermione.h"
#include <algorithm>
Hermione::Hermione(int mana)
{
    HP = HPmax = 900;
    MP = mana;
}
void Hermione::faceGiant(int i, int R, int event[]){
    if(std::__gcd(HP,event[i] % 100) != 1){
        Hero::faceGiant(i,R,event);
    }
}

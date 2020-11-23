#include "Ginny.h"
#include <algorithm>
Ginny::Ginny(int mana){
    HP = HPmax = 777;
    MP = mana;
}
void Ginny::faceGiant(int i, int R, int event[]){
    if(std::__gcd(HP,event[i] % 100) != 1){
        Hero::faceGiant(i,R,event);
    }
}

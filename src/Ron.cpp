#include "Ron.h"
Ron::Ron(int mana){
    HP = HPmax = 888;
    MP = mana;
}
int Ron::findPrime(int x){
    for (int i = x - 1; i > 1; i++)
    if(isPrime(i))
        return i;
    return 0;
}
void Ron::regen(int R){
    if (R >= 3){
        int P = findPrime(R), HPregen = MP / P;
        if(HPmax - HP >= HPregen){
            HP = HP + HPregen;
            MP = MP - HPregen*P;
        }else{
            MP = MP - (HPmax - HP)*P;
            HP = HPmax;
        }

    }
}


#include "Harry.h"
Harry::Harry(int mana){
    HP = HPmax = 999;
    MP = mana;
}
int Harry::fightDeadEater(int i, int R, int event[]){
    int h1 = (i+1) % (100+R);
    int h2 = event[i] % (100+R);
    if ((h2 > h1)&&(h2 > MP)&&(isPrime(h2))){
        if(cloak)
            return -1;
        else
            return 0;
    }
    else
        return 1;
}
void Harry::deadEater(int i, int R, int event[]){
    if (fightDeadEater(i,R,event)== 0)
        HP = HP - event[i];
    else if(fightDeadEater(R,i,event) == 1){
        if(999-MP >= event[i])
            MP = MP + event[i];
        else
            MP = 999;
    }
}
int Harry::severusSnape(){
    if(!cloak){
        HP = HPmax;
        MP = 999;
        elderWand = true;
    }
    return 0;
}
void Harry::faceVoldemort(int i, int R, int event[]){
    if(elderWand){
        HP = HPmax;
        MP = 999;
    }else{
        if(checkFibo(i)){
            if(fight(R,i,event) == 1){
                MP = 999;
                HP = HPmax;
            }
            else
                HP = -1;
        }else
            HP = -1;
    }
}

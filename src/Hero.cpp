#include "Hero.h"
#include <cmath>
bool Hero::checkHorcrux(int n){
    if (horcrux == n)
        return true;
    else return false;
}
bool Hero::checkHP(){
    if (HP <= 0)
        return true;
    else return false;
}
int Hero::fight(int i, int R,int event[]){
    int h1 = (i+1) % (100+R);
    int h2 = event[i] % (100+R);
    if (h1 >= h2)
        return 1;
    else if (cloak)
        return -1;
    else return 0;
}
void Hero::deadEater(int i, int R, int event[]){
    if (fight(i,R,event)== 0)
        HP = HP - event[i];
    else if(fight(i,R,event) == 1){
        if(999-MP >= event[i])
            MP = MP + event[i];
        else
            MP = 999;
    }
}
void Hero::regen(int R){
    if(HPmax - HP >= MP){
        HP = HP + MP;
        MP = 0;
    }else{
        MP = MP - (HPmax - HP);
        HP = HPmax;
    }
}
void Hero::evadeMuggle(int *i,int event[]){
    if(!cloak){
        int f = MP - (event[(*i)] % 100);
        if (f > 4){
            if (sqrt(f) == round(sqrt(f))){
                    MP = (round(sqrt(f)) - 1)*(round(sqrt(f)) - 1);
                }
            else
                MP = floor(sqrt(f))*floor(sqrt(f));
        }
        else{
            if (*i < 2)
                *i = -2;
            else{
                event[(*i)] = -1;
                *i = *i -3;
            }
        }
    }
}
void Hero::faceSphinx(int i, int R, int event[]){
    if (!cloak){
        if (fight(i,R,event) == 0)
            horcrux = 0;
        else
            cloak = true;
    }
}
bool Hero::isPrime(int x){
    if(x < 2)
        return false;
    else if(x < 4)
        return true;
    else
        for(int i = 2; i < sqrt(x); i++)
            if(x % i == 0)
                return false;
    return true;
}
int Hero::checkGiant(int i, int event[]){
    int x = event[i] % 100;
    for(int i = x/2; i > 1; i++){
        if (x % i == 0){
            if (isPrime(i))
                return i;
        }
    }
    return 1;
}
void Hero::faceGiant(int i, int R, int event[]){
    if(!cloak){
       if(fight(i,R,event)==0){
            HP = HP - event[i];
            MP = MP - checkGiant(i,event);
       }
    }
}
int Hero::checkConsecutive(int i, int event[], int length){
    int offsetLeft = 1, offsetRight = 1,offsetMax = 1;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length ;j++){
            if (i != j){
                if(event[i] - offsetLeft == event[j])
                    offsetLeft++;
                else if(event[i] + offsetRight == event[j])
                    offsetRight++;
            }
        }
        if(offsetLeft + offsetRight - 1 > offsetMax)
            offsetMax = offsetLeft + offsetRight - 1;
        offsetLeft = 1;
        offsetRight = 1;
    }
    return offsetMax;
}

void Hero::bellatrixLestrange(int R, int i, int event[],int length){
    if(!cloak){
        if (fight(i,R,event) == 0){
            HP = HP - event[i];
            if(horcrux <= checkConsecutive(i,event,length))
                horcrux = 0;
            else
                horcrux = horcrux - checkConsecutive(i,event,length);
        }
        else {
            if(999-MP >= event[i])
                MP = MP + event[i];
            else
                MP = 999;
            horcrux--;
        }
    }
}
int Hero::fibonacci(int x){
    int f, f1=1, f2=1;
    if (x <= 2)
        return 1;
    else
        while(f1 + f2 < x){
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
    return f;
}
void Hero::severusSnape(){
    if(!cloak){
        HP = fibonacci(HP);
    }
}
bool Hero::checkFibo(int x){
    int f1 = 1, f2 = 1, f = f1 + f2;
    if(x == 0)
        return false;
    else if(x < 4)
        return true;
    while(f < x){
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }
    if(f == x)
        return true;
    else
        return false;
}
void Hero::faceVoldemort(int i, int R, int event[]){
    if(checkFibo(i)){
        if(fight(i,R,event) == 1){
            MP = 999;
            HP = HPmax;
        }
        else
            HP = -1;
    } else
        HP = -1;
}













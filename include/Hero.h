#ifndef HERO_H
#define HERO_H

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Hero{
public:
    int HP,MP,horcrux = 0,HPmax;
    bool cloak = false;
public:
    bool checkHorcrux(int n);
    bool checkHP();
    int fight(int i, int R, int event[]);
    void deadEater(int i, int R, int event[]);
    void regen(int R);
    void evadeMuggle(int *i,int event[]);
    void faceSphinx(int i, int R, int event[]);
    void faceGiant(int i, int R, int event[]);
    void bellatrixLestrange(int R, int i, int event[], int length);
    void severusSnape();
    void faceVoldemort(int i ,int R, int event[]);
    int checkGiant(int i, int event[]);
    bool isPrime(int x);
    int checkConsecutive(int i, int event[], int length);
    int fibonacci(int x);
    bool checkFibo(int x);

};

#endif // HERO_H


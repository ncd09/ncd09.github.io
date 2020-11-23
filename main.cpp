#include <iostream>
#include <Harry.h>
#include <Hermione.h>
#include <Ginny.h>
#include <Ron.h>
using namespace std;

int main()
{
    int R,N,ID,mana,length = 0,event[1000];
    char c;
    cin >> R >> N >> ID >> mana;
    do{
        cin >> event[length];
        length++;
        c = getchar();
    }while(c!='\n');
    switch(ID){
        case 1:{
            Harry Potter(mana);
            int i = 0;
            do{
                int step = event[i] / 100;
                if(step == 1){
                    Potter.deadEater(i,R,event);
                    if (Potter.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else if(step == 2)
                    Potter.evadeMuggle(&i,event);
                else if(step == 3)
                    Potter.faceSphinx(i,R,event);
                else if(step == 5){
                    Potter.faceGiant(i,R,event);
                    if (Potter.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else
                switch(event[i]){
                    case 0:
                        Potter.horcrux++;
                        if(Potter.checkHorcrux(N)){
                            cout << Potter.HP + Potter.MP << endl;
                            return 0;
                        }
                        break;
                    case 1:
                        Potter.regen(R);
                        break;
                    case 666:
                        Potter.bellatrixLestrange(R,i,event,length);
                        if (Potter.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                    case 777:
                        Potter.severusSnape();
                        break;
                    case 999:
                        Potter.faceVoldemort(i,R,event);
                        if (Potter.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                }
                i++;
            }while((i < length)&&(i > -1));
            cout << 0 << endl;
            return 0;
        }
        case 2:{
            Hermione Granger(mana);
            int i = 0;
            do{
                int step = event[i] / 100;
                if(step == 1){
                    Granger.deadEater(i,R,event);
                    if (Granger.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else if(step == 2)
                    Granger.evadeMuggle(&i,event);
                else if(step == 3)
                    Granger.faceSphinx(i,R,event);
                else if(step == 5){
                    Granger.faceGiant(i,R,event);
                    if (Granger.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else
                switch(event[i]){
                    case 0:
                        Granger.horcrux++;
                        if(Granger.checkHorcrux(N)){
                            cout << Granger.HP + Granger.MP << endl;
                            return 0;
                        }
                        break;
                    case 1:
                        Granger.regen(R);
                        break;
                    case 666:
                        Granger.bellatrixLestrange(R,i,event,length);
                        if (Granger.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                    case 777:
                        Granger.severusSnape();
                        break;
                    case 999:
                        Granger.faceVoldemort(i,R,event);
                        if (Granger.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                }
                i++;
            }while((i < length)&&(i > -1));
            cout << 0 << endl;
            return 0;
        }
        case 3:{
            Ron Weasley(mana);
            int i = 0;
            do{
                int step = event[i] / 100;
                if(step == 1){
                    Weasley.deadEater(i,R,event);
                    if (Weasley.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else if(step == 2)
                    Weasley.evadeMuggle(&i,event);
                else if(step == 3)
                    Weasley.faceSphinx(i,R,event);
                else if(step == 5){
                    Weasley.faceGiant(i,R,event);
                    if (Weasley.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else
                switch(event[i]){
                    case 0:
                        Weasley.horcrux++;
                        if(Weasley.checkHorcrux(N)){
                            cout << Weasley.HP + Weasley.MP << endl;
                            return 0;
                        }
                        break;
                    case 1:
                        Weasley.regen(R);
                        break;
                    case 666:
                        Weasley.bellatrixLestrange(R,i,event,length);
                        if (Weasley.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                    case 777:
                        Weasley.severusSnape();
                        break;
                    case 999:
                        Weasley.faceVoldemort(i,R,event);
                        if (Weasley.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                }
                i++;
            }while((i < length)&&(i > -1));
            cout << 0 << endl;
            return 0;
        }
        case 4:{
            Ginny Weasley(mana);
            int i = 0;
            do{
                int step = event[i] / 100;
                if(step == 1){
                    Weasley.deadEater(i,R,event);
                    if (Weasley.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else if(step == 2)
                    Weasley.evadeMuggle(&i,event);
                else if(step == 3)
                    Weasley.faceSphinx(i,R,event);
                else if(step == 5){
                    Weasley.faceGiant(i,R,event);
                    if (Weasley.checkHP()){
                        cout << -1 << endl;
                        return 0;
                    }
                }
                else
                switch(event[i]){
                    case 0:
                        Weasley.horcrux++;
                        if(Weasley.checkHorcrux(N)){
                            cout << Weasley.HP + Weasley.MP << endl;
                            return 0;
                        }
                        break;
                    case 1:
                        Weasley.regen(R);
                        break;
                    case 666:
                        Weasley.bellatrixLestrange(R,i,event,length);
                        if (Weasley.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                    case 777:
                        cout << -1 << endl;
                        return 0;
                        break;
                    case 999:
                        Weasley.faceVoldemort(i,R,event);
                        if (Weasley.checkHP()){
                            cout << -1 << endl;
                            return 0;
                        }
                        break;
                }
                i++;
            }while((i < length)&&(i > -1));
            cout << 0 << endl;
            return 0;
        }
    }
    return 0;
}

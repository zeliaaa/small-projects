#include <iostream>

using namespace std;

class prostokat;

class punkt
{
    string nazwa;
    float x,y;
public:
    punkt(string="A",float=0,float=0);


    void wczytaj();

    friend void sedzia (punkt pkt, prostokat p);

};

class prostokat

{
    string nazwa;
    float x,y,szerokosc,wysokosc;

public:
    prostokat(string="brak",float=0,float=0,float=1,float=1);

    void wczytaj();

    friend void sedzia (punkt pkt, prostokat p);
};

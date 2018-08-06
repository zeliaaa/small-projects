#include <iostream>
#include "prostokat.h"

using namespace std;


punkt::punkt(string n, float xx, float yy)
{
    nazwa=n;
    x=xx;
    y=yy;
}

void punkt::wczytaj()
{
    cout<<"Podaj x: "<<endl;
    cin>>x;
    cout<<"Podaj y: "<<endl;
    cin>>y;
    cout<<"Podaj nazwe punktu: "<<endl;
    cin>>nazwa;
}




prostokat::prostokat(string n, float xx, float yy, float wys, float szer)

{
    nazwa=n;
    x=xx;
    y=yy;
    szerokosc=szer;
    wysokosc=wys;
}


void prostokat::wczytaj()
{
    cout<<"Podaj x: "<<endl;
    cin>>x;
    cout<<"Podaj y: "<<endl;
    cin>>y;
    cout<<"Podaj wysoko\230\206: "<<endl;
    cin>>wysokosc;
    cout<<"Podaj szeroko\230\206: "<<endl;
    cin>>szerokosc;

    cout<<"Podaj nazwe prostokata: "<<endl;
    cin>>nazwa;
}

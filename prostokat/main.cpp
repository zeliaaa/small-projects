#include <iostream>
#include "prostokat.h"
using namespace std;

void sedzia(punkt pkt,prostokat p)

{
    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)
            &&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))

            cout<<endl<<"punkt: "<<pkt.nazwa<<" Nalezy do prostokata o nazwie "<<p.nazwa<<endl;
            else
                cout<<endl<<"punkt: "<<pkt.nazwa<<" Nie Nalezy do prostokata o nazwie "<<p.nazwa<<endl;
    }


int main()
{

    punkt pkt1("A",3,17);


    prostokat p1("Prostok\245t",0,0,6,4);

    sedzia (pkt1,p1);


    return 0;
}

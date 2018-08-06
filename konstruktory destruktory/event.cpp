#include <iostream>
#include "event.h"


using namespace std;




void Event::load()
{
    cout<<endl<<"Nazwa wydarzenia: ";
    cin>>name;
    cout<<endl<<"Dzieñ: ";
    cin>>day;
    cout<<endl<<"miesiac: ";
    cin>>month;
    cout<<endl<<"rok: ";
    cin>>year;
    cout<<endl<<"godzina: ";
    cin>>hour;
    cout<<endl<<"minuta: ";
    cin>>minutes;
}


void Event::show()

{
    cout<<endl<<name<<endl<<day<<"."<<month<<"."<<year<<endl<<hour<<":"<<minutes;


}



Event::Event(string n,int d,int m,int y, int h, int mi)
{
    name=n;
    day=d;
    year=y;
    month=m;
    hour=h;
    minutes=mi;





}




Event::~Event()
{
    cout<<endl<<"to ja, destruktor sie nazywam, kasuje obiekty, slowa przepraszam nie uzywam";
}

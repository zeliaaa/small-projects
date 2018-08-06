#include <iostream>

using namespace std;

class Zwierze
{
    public:

    string gatunek;
    string imie;
    int wiek;

    void dodaj_zwierze()
    {
        cout>>"Podaj gatunek"<<endl;
        cin<<gatunek;
        cout>>"podaj imie"<<endl;
        cin<<imie;
        cout>>"Podaj wiek"<<endl;
        cin<<wiek;

    }
    void daj_glos()
    {
        if (gatunek=="kot")
        {
            cout<<imie<<"a wiek to: "<<wiek<<"miau!"<<endl;
        }
       else if (gatunek=="koza")
        {
            cout<<imie<<"a wiek to: "<<wiek<<"meee!"<<endl;
        }

         else if (gatunek=="krowa")
        {
            cout<<imie<<"a wiek to: "<<wiek<<"muuuu!"<<endl;
        }

        else cout<<"nie znany gatunek"<<endl;


    }


};


int main()
{

    zwierze z1;

    z1.dodaj_zwierze();
    z1.daj_glos();


    cout << "Hello world!" << endl;
    return 0;
}

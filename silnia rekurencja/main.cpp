#include <iostream>

using namespace std;

int p;

long int silnia (int m)


{
    if (m==0)
    {
        return 1;

    }
    else
    {
      return silnia(m-1)*m ;
    }
}

int main()




{


cout<<"witaj w programie, ktory rekurencyjnie liczy silnie"<<endl;
cout<<"Podaj prosze liczbe, z ktorej zostanie policzona silnia"<<endl2;
cin>>p;

    cout << silnia(p) << endl;
    return 0;
}

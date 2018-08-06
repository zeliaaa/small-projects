#include <iostream>
#include <iomanip>
using namespace std;



long double fib[10000];
int n;

int main()
{
    cout << "Witaj w programie ciag Fibanaciego" << endl<<"Ile wyrazow ciagu mam wyznaczyc?";
    cin>>n;

    fib[0]=0;

    fib[1]=1;


    for (int i=2; i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];

        cout<<setprecision(10000);
      //  cout<<fib[i]<<endl;



    }

cout<<"wyraz numer "<<n<<" :"<<endl<<fib[n-1];


    return 0;
}

#include <iostream>

using namespace std;

int main()

{
    string napis;
    int dlu;




    cout << "Podaj swoj wyraz do odwrocenia" << endl;
    cin>>napis;


    dlu=napis.length();



    for (int i=dlu-1;i>=0;i--)


    {
        cout << napis[i];
    }








    return 0;
}

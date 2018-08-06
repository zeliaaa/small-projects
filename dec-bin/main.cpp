#include <cstdlib>
#include <iostream>
using namespace std;

void dec_bin(int liczba)
{
	int i=0,tab[1000];

	while(liczba)
	{
		tab[i++]=liczba%2;
		liczba/=2;
	}

	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
}

int main()
{
	int liczba;

	cout<<"Podaj liczbe: ";
	cin>>liczba;

	cout<<liczba<<" po zamianie na postac binarna: ";
	dec_bin(liczba);
	cout<<endl;

	system("pause");
	return 0;
}

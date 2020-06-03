#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
class sortowanie{
	public:
		sortowanie();
		~sortowanie();
		string napis;
		ofstream wyjscie;
	void wczytaj();
	void sortuj();
	void wypisz();
};
sortowanie::sortowanie(){
	wyjscie.open("wyjscie.txt");
}
sortowanie::~sortowanie(){
	wyjscie.close();
}
void sortowanie::wczytaj(){
	cout<<"Podaj napis: ";
	cin>>napis;
}
void sortowanie::sortuj(){
    for (int i=0; i<napis.length()-1; i++)
    {
        for (int j=0; j<napis.length()-1; j++)
        {
            if (napis[j]>napis[j+1])
            swap(napis[j], napis[j+1]);
        }
    }
}
void sortowanie::wypisz(){
	wyjscie<<napis;
	cout<<napis<<endl;
}
int main()
{
    sortowanie s1;
	s1.wczytaj();
	s1.sortuj();
	s1.wypisz();
    return 0;   
}

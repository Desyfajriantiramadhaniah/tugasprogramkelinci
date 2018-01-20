#include <iostream>
#include <string>
using namespace std;

class Kelinci{
	public:
		void jenis(string jenis);
		string warnaBulu;
		string jenisKelinci;
		string makananKelinci;
		string warnaMata;
};

int main(){
		Kelinci a,b,c;
	
	
	a.warnaBulu = "Putih ";
	b.warnaBulu = "Coklat ";
	c.warnaBulu = "Hitam ";
	
	a.makananKelinci = "Wortel";
	b.makananKelinci = "Kangkung";
	c.makananKelinci = "Wortel dan kangkung";
cout<<"\n\t\t\tNAMA : Desy Fajrianti Ramadhaniah\n";
	cout<<"\t\t\tNPM  : 16630306\n";
	cout<<"\t\t\tProgram Kelinci\n";
	cout<<"------------------------------------------------------------------------------ \n";
	
	cout <<"1. " << a.jenisKelinci;
	cout<< "Warnanya " << a.warnaBulu;
	a.jenis("Anggora ");
	cout << "\tMakanannya "<<a.makananKelinci<<endl;
	cout << "\n";
	
		cout <<"2. " << b.jenisKelinci;
	cout<< "Warnanya " << b.warnaBulu;
	b.jenis("Persia ");
	cout << "\tMakanannya "<<b.makananKelinci<<endl;
	cout << "\n";
	
}


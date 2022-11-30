// Suyun sýcaklýðýna göre katý, sývý, gaz olduðunu bulan program

#include <iostream>
using namespace std;

main(){
	
	int sicaklik;
	
	cout << "Sicaklik Giriniz:";
	cin >> sicaklik;
	
	if (sicaklik<0){
		cout << "Katidir";
	}
	else if (sicaklik>100){
		cout << "Gazdir";
	}
	else{
		cout << "Sividir";
	}
	
}

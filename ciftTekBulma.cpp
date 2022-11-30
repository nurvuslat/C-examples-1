//Girilen sayýnýn çift mi tek mi olduðunu bulan program

#include <iostream>
using namespace std;	

int main(){
	
	int sayi;
	
	cout << "Sayiyi Giriniz:";
	cin >> sayi;
	
	if (sayi%2==0){
		cout << "Sayi Cifttir";
	}
	else{
		cout << "Sayi Tektir";
	}
	
	return 0;
	
}

//Girilen 3 sayýdan en büyük olaný bulan preogram

#include <iostream>
using namespace std;

main(){
	
	int a,b,c;
	
	cout << "1. Sayiyi Giriniz:";
	cin >> a;
	cout << "2. Sayiyi Giriniz:";
	cin >> b;
	cout << "3. Sayiyi Giriniz:";
	cin >> c;
	
	if (a>b && a>c){
		cout << "Birinci Sayi En Buyuk";
	}
	else if(b>a && b>c){
		cout << "Ikinci Sayi En Buyuk";
	}	
	else{
		cout << "Ucuncu Sayi En Buyuk";
	}

	
	
}

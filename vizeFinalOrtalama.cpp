//Vize ve final notuna göre geçme kalma durumu hesaplayan program

#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int vize, final;
	double ort;
	
	cout << "Vize Notunu Giriniz:";
	cin >> vize;
	cout << "Final Notunu Giriniz:";
	cin >> final;
	
	if(vize>100 || final >100 || vize<0 || final<0){
		cout << "Geçersiz Not Girdiniz";
	}
	
	ort = vize * 0.4 +final * 0.6;
	cout << "Ortalamanýz:" << ort << endl;
	
	if(ort<60){
		cout << "Kaldýnýz";
	}
	else{
		cout << "Geçtiniz";
	}
	
	return 0;
	
	
}



//Vize ve final notuna g�re ge�me kalma durumu hesaplayan program

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
		cout << "Ge�ersiz Not Girdiniz";
	}
	
	ort = vize * 0.4 +final * 0.6;
	cout << "Ortalaman�z:" << ort << endl;
	
	if(ort<60){
		cout << "Kald�n�z";
	}
	else{
		cout << "Ge�tiniz";
	}
	
	return 0;
	
	
}



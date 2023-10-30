#include <iostream>

using namespace std;

int main(){
	int nilai;
	cout << "masukan nilai anda: ";
	cin >> nilai;
	 
	if (nilai >= 90) {
		cout << "Nilai A" << endl;
	}
	else if(nilai >= 80) {
		cout << "Nilai B" << endl;
    }
	else if(nilai >= 70) {
		cout << "Nilai D" << endl;
    }
    else if(nilai >= 50) {
		cout << "Nilai D" << endl;
    }
	else if(nilai >= 0) {
		cout << "Nilai Mu Elek Cok" << endl;
    }
	
	return 0;
}

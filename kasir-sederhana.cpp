#include <iostream>
using namespace std;

main() {
		double hargaBarang, jumlah;
		cout << "\n==============================\n 	Mesin Kasir 	\n==============================" <<endl;
		cout << "Masukan harga Barang \t: ";
		cin >> hargaBarang;
		cout << "Masukan Total Barang \t: ";
		cin >> jumlah;
		
		double total = hargaBarang * jumlah;
		cout << "=============================="<<endl ;
		cout << "Total jumlah keseluruhan harga barang : "<<total<<endl;
		cout << "==============================" <<endl;
		
		double tunai;
		cout << "Masukan jumlah uang: ";
		cin >> tunai;
		double uangKembalian = tunai - total;
		
		cout << "Total Uang Kembalian "<< uangKembalian;
		
	}

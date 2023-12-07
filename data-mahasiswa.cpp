#include<iostream>
#include <fstream>
using namespace std;

class mhs{
	public :
		string nama[50];
		string prodi[50];
		double nilai[50];
		int jml;
};

int inpt(){
	int jumlah;
	cout<<"Masukan jumlah data yang ingin anda input : ";
	cin>>jumlah;
	cin.ignore();
	return jumlah;
}

int main(){
	mhs data;
	mhs();
	do{
	data.jml = inpt();
	
	for(int i = 1; i <= data.jml; i++){
		cout<<"Masukkan nama mahasiswa ke-"<<i<<" : ";
		getline(cin, data.nama[i]);
		cout<<"Prodi : ";
		getline(cin, data.prodi[i]);
		cout<<"Nilai : ";
		cin>>data.nilai[i];
		cin.ignore();
	}
	
	system("cls");
	ofstream outputFile("data.txt", ios::app);
	if(outputFile.is_open()){
	for(int i = 1; i <= data.jml; i++){
		outputFile<<"====================================\n";
		outputFile<<"Nama  : "<<data.nama[i]<<endl;
		outputFile<<"Prodi : "<<data.prodi[i]<<endl;
		outputFile<<"Nilai : "<<data.nilai[i]<<endl;
		outputFile<<"====================================\n";	
		}
		outputFile.close();
		system("cls");
		for(int i = 1; i <= data.jml; i++){
			cout<<"====================================\n";
            cout << "Nama  : " << data.nama[i] << endl;
            cout << "Prodi : " << data.prodi[i] << endl;
            cout << "Nilai : " << data.nilai[i] << endl;
            cout<<"====================================\n";
        }
		cout<<"Menambahkan data sukses!\n";
		cout<<"Data tersimpan di file (data.txt)\n";
	}
		char ulang;
		ulang = false;
		cout<<"apakah ingin menambahkan data lagi (Y/N) : ";
		cin>>ulang;
		if(ulang != 'y' && ulang != 'Y'){
			cout<<"Terimakasih";
			break;		
		}
	}while(true);
}

#include <iomanip>
#include "../model/mJadwalBioskop.h"

using namespace std;

void vAddJadwal(){
  string inputNamaStudioBioskop;
  string inputNamaFilm;
  string inputBatasUsia;
  string inputTanggalTayang;
  string inputDurasiTayang; 
  int inputHargaTiket;

    cout<<"Masukan Nama Studio : ";
    cin>> inputNamaStudioBioskop;
    cout<<"Masukan Nama Film : ";
    cin>>inputNamaFilm;
    cout<<"Masukan Batas Usia : ";
    cin>>inputBatasUsia;
    cout<<"Masukan Tanggal Tayang : ";
    cin>>inputTanggalTayang;
    cout<<"Masukan Durasi Film : ";
    cin>>inputDurasiTayang;
    cout<<"Masukan Harga tiket : ";
    cin>>inputHargaTiket;

  mAddJadwal(inputNamaStudioBioskop, inputNamaFilm, inputBatasUsia, inputTanggalTayang, inputDurasiTayang, inputHargaTiket);
}


void vViewJadwalBioskop(){
    mViewJadwal();
}

void vSearchJadwal(){
    int inptKodeFilm;

    cout<<"Masukan Kode Film : ";
    cin>>inptKodeFilm;

    int index = mSearchJadwal(inptKodeFilm);
        if(index != -1){
          cout << "========================================================================================================================================\n";
          cout << setw(75)<<"- Data Bioskop -\n";
          cout << "========================================================================================================================================\n";
          cout << setw(20)<< left << "Nama Film" << setw(20) << "Kode Film" << setw(20) << "Batas Usia" << setw(25) << "Tanggal Tayang" << setw(20) << "Studio" << setw(20) << "Durasi Tayang" << setw(20) << "Harga Tiket" << endl;
          cout << "========================================================================================================================================\n";
          cout << setw(20) << left << nameFilm[index] << setw(20) << kodeFilm[index] << setw(20) << batasUsia[index] << setw(25) << tanggalTayang[index] << setw(20) << namaStudioBioskop[index] << setw(20) << durasiTayang[index] << setw(20) << hargaTiket[index] << endl;
          cout << "========================================================================================================================================\n";

        }else{
            cout<<"Data Bioskop Tidak Ditemukan."<<endl;
        }
}
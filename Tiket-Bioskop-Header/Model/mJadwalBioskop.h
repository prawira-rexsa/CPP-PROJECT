#include <iostream>
#include <string>
#include "../database/dbJadwal.h"


using namespace std;

void mAddJadwal(string inptNamaStudioBioskop, string inptNamaFilm, string inptBatasUsia, string inptTanggalTayang, string inptDurasiTayang, int inptHargaTiket){
    int index = mSearchStudioBioskop(inptNamaStudioBioskop);
    int indexFilm = mSearchfilm(inptNamaFilm);

    if (index != -1 && indexFilm != -1){
        kodeFilm[nJadwal] = nJadwal+1;
        namaStudioBioskop[nJadwal] = inptNamaStudioBioskop;
        nameFilm[nJadwal] = inptNamaFilm;
        batasUsia[nJadwal] = inptBatasUsia;
        tanggalTayang[nJadwal] = inptTanggalTayang;
        durasiTayang[nJadwal] = inptDurasiTayang;
        hargaTiket[nJadwal] = inptHargaTiket;
        nJadwal++;
    }else {
        cout<<"Data Studio atau Film Tidak Ditemukan\n";
    }
}

void mViewJadwal(){
    cout << "========================================================================================================================================\n";
    cout <<"                                                           - Data Bioskop -                                                           "<<endl;
    cout << "========================================================================================================================================\n";
    cout << setw(20)<< left << "Nama Film" << setw(20) << "Kode Film" << setw(20) << "Batas Usia" << setw(25) << "Tanggal Tayang" << setw(20) << "Studio" << setw(20) << "Durasi Tayang" << setw(20) << "Harga Tiket" << endl;
    cout << "========================================================================================================================================\n";
    for(int i=0; i < nJadwal; i++){
        cout << setw(20) << left << nameFilm[i] << setw(20) << kodeFilm[i] << setw(20) << batasUsia[i] << setw(25) << tanggalTayang[i] << setw(20) << namaStudioBioskop[i] << setw(20) << durasiTayang[i] << setw(20) << hargaTiket[i] << endl;
    }
     cout << "========================================================================================================================================\n";
}

int mSearchJadwal(int inptKodeFilm){
    int index;
    for(int i = 0; i < nJadwal; i++){
        if(kodeFilm[i] == inptKodeFilm){
            index = i;
            break;
        }
    }
    return index;
}
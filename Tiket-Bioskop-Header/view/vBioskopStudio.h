#include <iostream>
#include <string>
#include "../model/mstudio.h"

using namespace std;

void vAddStudio(){
    string namaStudioInpt;
    int jumlahKursiInpt;
    cout<<"Masukan Nama Studio : ";
    cin>>namaStudioInpt;
    cout<<"Masukan Jumlah Kursi : ";
    cin>>jumlahKursiInpt;

    mAddStudio(namaStudioInpt, jumlahKursiInpt);
}

void vViewStudio(){
    mViewStudio();
}

void vSearchsStudioBioskop(){
    string namaStudioInpt;
    cout<<"Masukan Nama Studio : ";
    cin>>namaStudioInpt;

    int index = mSearchStudioBioskop(namaStudioInpt);
    if(index != -1){
        cout<<"- DATA STUDIO DITEMUKAN\n";
        cout<<"Nama Studio : "<<namaStudio[index]<<endl;
        cout<<"Jumlah Kursi : "<<jumlahKursi[index]<<endl;

    } else{
        cout<<"Studio Tidak DItemukan\n";
    }
}
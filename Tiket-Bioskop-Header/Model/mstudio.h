#include <iostream>
#include "../database/dbStudio.h"

using namespace std;

void mAddStudio(string inptNamaStudio, int inptJumlahStudio){
    namaStudio[indexStudio] = inptNamaStudio;
    jumlahKursi[indexStudio] = inptJumlahStudio;
    indexStudio++;
}

void mViewStudio(){
    cout<<"Daftar Studio\n";
    for(int i = 0; i < indexStudio; i++){
            cout<<"Nama Studio : "<<namaStudio[i]<<endl;
            cout<<"Jumlah Kursi : "<<jumlahKursi[i]<<endl;
    }
}

int mSearchStudioBioskop(string inptNamaStudio){
    int index = -1;
    for(int i = 0; i < indexStudio; i++){
        if(namaStudio[i] == inptNamaStudio){
            index = i;
            break;
        }
    }
    return index;
}
#include <iostream>
#include <string>
#include "../model/modelfilm.h"

using namespace std;

void vAddfilm(){
    string judulfilminput;
    string batasanusiainput;
    string tahunrilis;
    cout << "masukkan judul film : ";
    cin >> judulfilminput;
    cout << "batasan usia : ";
    cin >> batasanusiainput;
    cout << "tahun rilis : ";
    cin >> tahunrilis;
    mAddfilm (judulfilminput, batasanusiainput, tahunrilis);
}

void vViewfilm(){
    mViewfilm();
}

void vSearchFilm(){
    string judulfilminput;
    
    cout<<"Masukan Judul Film : ";
    cin>>judulfilminput;

    int index= mSearchfilm(judulfilminput);
    if(index != -1){
        cout<<"- DATA FILM DITEMUKAN -\n";
        cout<<"Judul Film : "<<film[index]<<endl;
        cout<<"Batasan Usia : "<<usia[index]<<endl;
        cout<<"Tahun Rilis : "<<tahunrilis[index];
    }else {
        cout<<"Nama Film Tidak Ditemukan\n";
    }
}
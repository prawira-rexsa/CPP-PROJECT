#include <iostream>
#include <string>
#include "../database/dbFIlm.h"

using namespace std;

void mAddfilm(string inpnfilm, string inpnusia, string inpnrilis){
    film[namaFilm] = inpnfilm;
    usia[namaFilm] = inpnusia;
    tahunrilis [namaFilm] = inpnrilis;
    namaFilm++;
}
void mViewfilm(){
    cout << "daftar film"<<endl;
    for (int i =0; i < namaFilm; i++){
        cout << "nama film : "<< film [i] << endl;
        cout << "hanya untuk usia : "<< usia [i] << endl;
        cout << "tahun rilis : " << tahunrilis [i] << endl;
        cout << endl;
    }
}

int mSearchfilm (string inpnfilm){
    int index = -1;
    for (int i = 0; i < namaFilm; i++){
        if (film [i] == inpnfilm){
            index = i;
            break;
        }
    }
    return index;
}
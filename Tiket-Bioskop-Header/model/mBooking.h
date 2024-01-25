#include <iostream>
#include <string>
#include "../database/dbBooking.h"

using namespace std;

void mBooking (double& totalPesan)
{
    for(int i = 1; i <= jml; i++){
        cout<<"Masukan kode kursi ke-"<< i <<" : ";
        cin>>kursi;

        if (kursi >= "a0" && kursi <= "c4") {
        kursiTerpilih += " | " + kursi; // menyimpan hasil inputan kursi yang telah dipilih -
        } else {
            cout<<"Kode kursi tidak valid"<<endl;

            while(kursi < "a0" || kursi > "c4"){
            cout<<"Masukan kode kursi ke-"<< i <<" : ";
            cin>>kursi;
            kursiTerpilih += " | " + kursi;
            }   
        }
    }
}
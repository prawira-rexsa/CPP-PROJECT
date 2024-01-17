#include <iostream>
#include "Battle/dataBattle.h"

using namespace std;

int main(){
    int pilih;
    vRaceTable();
    vClassTables();
    addCharacter();
    do {
        cout << "\n\n1. Farming\n";
        cout << "2. Battle\n";
        cout << "0. Keluar\n";
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih) {
            case 1:
                vFarming();
                charFarming();
            break;
            case 2:
                tabelMonster();
                doBattle();
            break;
            case 0:
                cout << "Adios!!";
        }
    }while (pilih !=0);
}
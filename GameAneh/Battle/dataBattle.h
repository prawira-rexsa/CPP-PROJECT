#include <iostream>
#include <string>
#include "../Database/dbBattle.h"
#include "../Farming/dataFarm.h"

using namespace std;

void tabelMonster (){
    cout << "=========================================================\n";
    cout << "Monster \t\t || HP \t\t\t || AP\n";
    cout << "=========================================================\n";
    cout << "aboleth \t\t || 100 \t\t || 12\n";
    cout << "death slaad \t\t || 300 \t\t || 10\n";
    cout << "red dragon wyrmling \t || 500 \t\t || 15\n";
    cout << "=========================================================\n";
    
}

void doBattle () {
    string monsters[] = {"aboleth", "death slaad", "red dragon wyrmling"};
    int monsterHP[] = {100, 300, 500};
    int monsterAP[] = {12, 10, 15};

    int playerHP = resultHP;
    int playerAP = resultAP; 

    int currentMonster = 0; 

    cin.ignore();
    cout<<"Select Monster : ";
    string inputMonster;
    getline (cin,inputMonster);

    int index = -1;
    for (int i = 0; i < 3; i++) {
        if (inputMonster == monsters[i]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Monster tidak ditemukan!\n";
        return;
    }

    currentMonster = index;

    for (int turn = 1; turn <= playerAP; turn++) {
        cout << "Turn " << turn << endl;
        cout << "- " << name[nameChar] << " attacking " << monsters[currentMonster] << endl;
        monsterHP[currentMonster] -= playerAP;
        cout << name[nameChar] << "'s HP: " << playerHP << endl;
        cout << monsters[currentMonster] << "'s HP: " << monsterHP[currentMonster] << endl;

        if (monsterHP[currentMonster] <= 0) {
            cout << "You win!" << endl;
            break;
        }

        cout << "- " << monsters[currentMonster] << " attacking " << name[nameChar] << endl;
        playerHP -= monsterAP[currentMonster];
        cout << name[nameChar] << "'s HP: " << playerHP << endl;
        cout << monsters[currentMonster] << "'s HP: " << monsterHP[currentMonster] << endl;

        if (playerHP <= 0) {
            cout << "You lose!" << endl;
            break;
        }
    }
}
#include <iostream>
#include "../Database/dbChar.h"
using namespace std;

void vRaceTable(){
    cout<<"========================================\n";
    cout<<"Race \t\t | HP\t\t | AP\t\t\n";
    cout<<"========================================\n";
    cout<<"Elf\t\t | 100 \t\t | 9\t\t \n";
    cout<<"Human\t\t | 150\t\t | 7\t\t\n";
    cout<<"Orc\t\t | 200 \t\t | 5\t\t\n";
    cout<<"========================================\n";
}

void vClassTables(){
    cout<<"===============================================\n";
    cout<<"Class \t\t | Bonus HP\t | Bonus AP\t\t\n";
    cout<<"===============================================\n";
    cout<<"Fighter\t\t | 100 \t\t | 3\t\t \n";
    cout<<"Wizard\t\t | 50\t\t | 5\t\t\n";
    cout<<"Ranger\t\t | 80 \t\t | 4\t\t\n";
    cout<<"===============================================\n";
}

void addCharacter(){

    cout << "Nama Player\t: ";
    cin >> name[nameChar];
    cout << "Race\t\t: ";
    cin >> races[nameChar];
    cout << "Class\t\t: ";
    cin >> classes[nameChar];


    if (races[nameChar] == "Elf" || races[nameChar] == "elf") {
        raceHP = 100;
        raceAP = 9;
    } else if (races[nameChar] == "Human" || races[nameChar] == "human") {
        raceHP = 150;
        raceAP = 7;
    } else if (races[nameChar] == "Orc" || races[nameChar] == "orc") {
        raceHP = 200;
        raceAP = 5;
    } else {
        cout << "Race tidak valid.\n";
        return;
    }


    if (classes[nameChar] == "Fighter" || classes[nameChar] == "fighter" ) {
        classHPBonus = 100;
        classAPBonus = 3;
    } else if (classes[nameChar] == "Wizard" || classes[nameChar] == "wizard") {
        classHPBonus = 50;
        classAPBonus = 5;
    } else if (classes[nameChar] == "Ranger" || classes[nameChar] == "ranger") {
        classHPBonus = 80;
        classAPBonus = 4;
    } else {
        cout << "Class tidak valid.\n";
        return;
    }

    CharHP = raceHP + classHPBonus;
    CharAP = raceAP + classAPBonus;

    cout <<endl << "Nama\t: " << name[nameChar] <<endl;
    cout << "Race\t: " << races[nameChar] <<endl;
    cout << "Class\t: " << classes[nameChar] <<endl;
    cout << "HP\t: " << CharHP << endl;
    cout << "AP\t: " << CharAP;
}

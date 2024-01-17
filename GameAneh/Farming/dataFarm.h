#include <iostream>
#include "../Database/dbFarm.h"
#include "../Char/dataChar.h"
#include <string>

using namespace std;

void vFarming(){
    cout<<"\n==========================================================================================================\n";
    cout<<"Terrain\t\t | HP REQUIRED\t\t | AP REQUIRED\t\t | HP OBTAINED\t\t | AP OBTAINED\t\t\n";
    cout<<"==========================================================================================================\n";
    cout<<"Gehenna\t\t | 150 \t\t\t | 8 \t\t\t | +100 \t\t | +8\t\t\n";
    cout<<"Pandemonium\t | 400 \t\t\t | 20 \t\t\t | +150 \t\t | +12 \t\t\n";
    cout<<"Atra-hasis\t | 700 \t\t\t | 50 \t\t\t | +200 \t\t | +15 \t\t\n";
    cout << "Inazuma\t\t | 1500 \t\t | 100 \t\t\t | +300 \t\t | +25 \t\t\n";
    cout << "Eridu city\t | 3500 \t\t | 200 \t\t\t | +500 \t\t | +40 \t\t";
    cout<<"\n==========================================================================================================\n";
}

void charFarming(){
    
    int requiredHP, requiredAP, obtainedHP, obtainedAP;
    int totalHP = raceHP + classHPBonus;
    int totalAP = raceAP + classAPBonus;

    requiredHP = requiredAP = obtainedHP = obtainedAP = 0;

    cout << "Terrain : ";
    cin >> Terrain[indexFarm];

    if (Terrain[indexFarm] == "Gehenna" || Terrain[indexFarm] == "gehenna" ) {
        if (totalHP >= 150 && raceAP + classAPBonus >= 8) {
            requiredHP = 150;
            requiredAP = 8;
            obtainedHP = 100;
            obtainedAP = 8;
        }
    } else if (Terrain[indexFarm] == "Pandemonium" || Terrain[indexFarm] == "pandemonium" ) {
        if (totalHP >= 400 && totalAP >= 20) {
            requiredHP = 400;
            requiredAP = 20;
            obtainedHP = 150;
            obtainedAP = 12;
        }else{
            cout << "HP or AP required is not met!\n";
            return;
        }    
    } else if (Terrain[indexFarm] == "Atra-hasis" || Terrain[indexFarm] == "atra-hasis" ) {
        if (totalHP >= 700 && totalAP >= 50) {
        requiredHP = 700;
        requiredAP = 50;
        obtainedHP = 200;
        obtainedAP = 15;
        }else {
            cout<<"HP or AP required is not met!\n";
            return;
        }
    } else if (Terrain[indexFarm] == "Inazuma" || Terrain[indexFarm] == "inazuma" ) {
        if (totalHP >= 1500 && totalAP >= 100) {
        requiredHP = 1500;
        requiredAP = 100;
        obtainedHP = 300;
        obtainedAP = 25;
        }else {
            cout<<"HP or AP required is not met!\n";
            return;
        }
    }  else if (Terrain[indexFarm] == "Eridu City" || Terrain[indexFarm] == "eridu city" ) {
        if (totalHP >= 3500 && totalAP >= 200) {
        requiredHP = 3500;
        requiredAP = 200;
        obtainedHP = 500;
        obtainedAP = 40;
        }else {
            cout<<"HP or AP required is not met!\n";
            return;
        }
    }else{
        cout << "Terrain invalid\n";
    } 

    raceHP += obtainedHP;
    raceAP += obtainedAP;

    
    resultHP = totalHP + obtainedHP;
    resultAP = totalAP + obtainedAP;

    cout << "\nNama\t: " << name[nameChar] <<endl;
    cout << "Race\t: " << races[nameChar] <<endl;
    cout << "Class\t: " << classes[nameChar] <<endl;
    cout << "HP\t: " << resultHP << endl;
    cout << "AP\t: " << resultAP;
}
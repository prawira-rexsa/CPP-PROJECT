#include <iostream>
#include <string>
#include "view/vFilm.h"
#include "view/vBioskopStudio.h"
#include "view/vJadwalBioskop.h"
#include "view/vUserLogin.h"
#include "view/vWalletBioskop.h"
#include "view/vBooking.h"

using namespace std;


void static_value()
{
   mAddfilm("Beautiful in White", "18+", "2023");
   mAddfilm("Dear Who?", "18+", "2024");

   mAddStudio("studio1", 50);
   mAddStudio("studio2", 50);

   mAddJadwal("studio1", "Beautiful in White", "18+", "1-01-2024", "110 menit", 35000);
   mAddJadwal("studio2", "Dear Who?", "13+", "10-01-2024", "110 menit", 35000);

   mUserLogin("admin", "admin@operabioskop.com", "qwerty123");
}

void menu_wallet() 
{
   vMyBioskop();
}

void menu_jadwal(){
    vViewJadwalBioskop();
}


void adminMenu() {
    
    cout << "- COMING SOON :D -\n";
}


void userMenu(const string& username) {
    
    int choice;
    double totalPesan;

   do 
   {
      cout << "\nSelamat datang "<<username<<" di opera bioskop\n";
      cout << "1. MyBioskop E-Wallet\n";
      cout << "2. Jadwal Film\n";
      cout << "3. Booking Tiket\n";
      cout << "0. Logout\n";
      cout << "Pilih menu : ";
      cin >> choice;

      switch (choice)
      {
         case 1:
            menu_wallet();
         break;
         case 2:
            menu_jadwal();
         break;
         case 3:
            vViewJadwalBioskop();
            viewBooking();
         break;
         case 0:   
            cout << "\nSilahkan login kembali\n";
         break;
         default:
            cout << "Pilihan tidak valid\n";
         break;
      }
   } while (choice != 0);
}


int main(){
    int choice;
    static_value();
    string loginNamaPengguna;

    do{
        cout<<  "=============================\n";
        cout << "|     - OPERA BIOSKOP  -    |\n";
        cout << "=============================\n";
        cout<<"1. Login\n";
        cout<<"2. Register\n";
        cout<<"99. exit\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                login(loginNamaPengguna);
                if (loginNamaPengguna == "admin") {
                    adminMenu();
                } else {
                    userMenu(loginNamaPengguna);
                }
            break;
            case 2 :
                vUserLogin();
            break;
            case 99 :
                cout<<"Exiting Program...\n";
            break;
            default :
                cout<<"Invalid Choice, Please Try Again!\n";
        }
    }while(choice != 99);
}
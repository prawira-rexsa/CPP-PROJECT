#include <iostream>
#include "datasiswa.h"

using namespace std;

int main() {
    int inptAbsen_07730, input_07730, menu_07730;
    int index_07730 = 5;
    string namaSiswa_07730[index_07730];
    int jmlSiswa_07730 = 0;
    char absensiSiswa_07730[index_07730], lnjtAbsen_07730;

do {
    cout<<"Program Absensi Siswa\n";
    cout<<"1.  Daftar Siswa\n";
    cout<<"2.  Tambahkan siswa\n";
    cout<<"3.  Hapus Siswa \n";
    cout<<"4.  Absensi Siswa\n";
    cout<<"5.  Daftar Absensi Siswa\n";
    cout<<"0. keluar\n";
    cout << "Pilih Menu : ";
    cin >> input_07730;

    
        switch (input_07730) {
            case 1:
                    tampilkanJumlahSiswa_07730(jmlSiswa_07730, namaSiswa_07730);

            break;
            case 2:
                    tambahkanSiswa_07730(namaSiswa_07730, jmlSiswa_07730, index_07730);

             break;
             case 3:
                    hapusSiswa_07730(namaSiswa_07730, jmlSiswa_07730, inptAbsen_07730);

             break;
             case 4:
                    cout<<"Note : Ketik H(hadir)/I(izin)/S(sakit)/A(alpha)\n";
                    kehadiranSiswa_07730(namaSiswa_07730, absensiSiswa_07730, jmlSiswa_07730);
                    cout<<"Absensi telah selesai \n";
            
             break;
             case 5: 
                 updateAbsensiSiswa_07730(namaSiswa_07730, absensiSiswa_07730,lnjtAbsen_07730, inptAbsen_07730, jmlSiswa_07730);
            
            break;
             case 0:
             cout<<"terimakasih\n";
           
             break;
        }
    } while (input_07730 != 0); 

    return 0;
}

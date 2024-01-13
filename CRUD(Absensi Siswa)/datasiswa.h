#include <iostream>
using namespace std;

void tampilkanJumlahSiswa_07730(int jmlSiswa_07730, string namaSiswa_07730[]) {
    if (jmlSiswa_07730 == 0) {
        cout << "Belum ada siswa yang ditambahkan.\n";
    } else {
        cout << "Daftar Siswa:\n";
        for (int i_07730 = 0; i_07730 < jmlSiswa_07730; ++i_07730) {
            cout << i_07730 + 1 << ". " << namaSiswa_07730[i_07730] << endl;
        }
    }
}

void tambahkanSiswa_07730(string namaSiswa_07730[], int &jmlSiswa_07730, int index_07730){
    if(jmlSiswa_07730 < index_07730){
        cout << "Masukkan nama siswa: ";
        cin.ignore();
        getline(cin, namaSiswa_07730[jmlSiswa_07730]);
        jmlSiswa_07730++;

        cout << "Siswa berhasil ditambahkan.\n";
    } else {
        cout << "Kapasitas maksimum siswa telah tercapai.\n";
    }
}


void hapusSiswa_07730(string namaSiswa_07730[], int &jmlSiswa_07730, int inptAbsen_07730) {
    if (jmlSiswa_07730 == 0) {
        cout << "Belum ada siswa yang ditambahkan.\n";
    } else {
        cout << "Daftar Siswa:\n";
        for (int i_07730 = 0; i_07730 < jmlSiswa_07730; ++i_07730) {
            cout << i_07730 + 1 << ". " << namaSiswa_07730[i_07730] << endl;
        }

        cout << "Masukkan nomor siswa yang ingin dihapus: ";
        cin >> inptAbsen_07730;

        if (inptAbsen_07730 >= 1 && inptAbsen_07730 <= jmlSiswa_07730) {
            for (int i_07730 = inptAbsen_07730 - 1; i_07730 < jmlSiswa_07730 - 1; ++i_07730) {
                namaSiswa_07730[i_07730] = namaSiswa_07730[i_07730 + 1];
            }
            jmlSiswa_07730--;
            cout << "Siswa berhasil dihapus.\n";
        } else {
            cout << "Nomor siswa tidak valid.\n";
        }
    }
}


void kehadiranSiswa_07730(string namaSiswa_07730[], char absensiSiswa_07730[], int jmlSiswa_07730){
    for(int i_07730 = 0; i_07730 < jmlSiswa_07730; i_07730++){
        cout<<i_07730 + 1<<". "<<namaSiswa_07730[i_07730]<<": ";
        cin>>absensiSiswa_07730[i_07730];
    
        while (absensiSiswa_07730[i_07730] != 'H' && absensiSiswa_07730[i_07730] != 'I' && absensiSiswa_07730[i_07730] != 'S' && absensiSiswa_07730[i_07730] != 'A'){
            cout<<"Inputan tidak valid\n";
            cout<<"Ketik H(hadir)/I(izin)/S(sakit)/A(alpha) : ";
            cin>>absensiSiswa_07730[i_07730];
        }
    }
}

void updateAbsensiSiswa_07730(string namaSiswa_07730[], char absensiSiswa_07730[], char lnjtAbsen_07730, int inptAbsen_07730, int jmlSiswa_07730){
    for(int i_07730 = 0; i_07730 < jmlSiswa_07730; i_07730++){
        cout<<i_07730 + 1<<". "<<namaSiswa_07730[i_07730]<<" ("<<absensiSiswa_07730[i_07730]<<") "<<endl;
    }
        cout<<"Tekan (Y) untuk memperbarui abseni, Tekan (N) untuk kembali ke menu : ";
        cin>>lnjtAbsen_07730;
        if(lnjtAbsen_07730 == 'Y' || lnjtAbsen_07730 == 'y'){
            cout<<"Pilih absen siswa yang ingin diperbarui : ";
            cin>>inptAbsen_07730;
                
            if(inptAbsen_07730 >= 1 && inptAbsen_07730 <= jmlSiswa_07730){
                cout << inptAbsen_07730 << ". " << namaSiswa_07730[inptAbsen_07730 - 1] << " (" << absensiSiswa_07730[inptAbsen_07730 - 1] << ") " << endl;
                cout << "Perbarui absen siswa [H/I/S/A] : ";
                cin >> absensiSiswa_07730[inptAbsen_07730 - 1];
                
                if(absensiSiswa_07730[inptAbsen_07730 - 1] == 'H' || absensiSiswa_07730[inptAbsen_07730 - 1] == 'I' || absensiSiswa_07730[inptAbsen_07730 - 1] == 'S' || absensiSiswa_07730[inptAbsen_07730 - 1] == 'A'){
                        cout<<"Sukses memperbarui absensi siswa.\n";
                }else {
                    while (absensiSiswa_07730[inptAbsen_07730 - 1] != 'H' && absensiSiswa_07730[inptAbsen_07730 - 1] != 'I' && absensiSiswa_07730[inptAbsen_07730 - 1] != 'S' && absensiSiswa_07730[inptAbsen_07730 - 1] != 'A'){
                        cout<<"Inputan tidak valid\n";
                        cout<<"Ketik H(hadir)/I(izin)/S(sakit)/A(alpha) : ";
                        cin>>absensiSiswa_07730[inptAbsen_07730 - 1];

                        cout<<"Sukses memperbarui absensi siswa.\n";
                    }
                }      
            } else{
                    cout<<"Absensi siswa tidak tersedia\n";
                    cout<<"Pilih kembali absen siswa yang ingin diperbarui : ";
                    cin>>inptAbsen_07730;

                    cout << inptAbsen_07730 << ". " << namaSiswa_07730[inptAbsen_07730 - 1] << " (" << absensiSiswa_07730[inptAbsen_07730 - 1] << ") " << endl;
                    cout << "Perbarui absen siswa [H/I/S/A] : ";
                    cin >> absensiSiswa_07730[inptAbsen_07730 - 1];

                    cout << "Sukses memperbarui absensi.\n";
            }
        }
}   
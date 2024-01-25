#include <iostream>
#include "../model/mWalletBioskop.h"
using namespace std;

void vMyBioskop ()
{
    int metode, tekan, pilih, index, jml;
        
    cout << "\nMyBioskop E-Wallet\n";
    cout << "1. Top Up Saldo\n";
    cout << "2. Tampil Saldo\n";
    cout << "Pilih :";
    cin >> pilih;

    if (pilih == 1) 
    {   
        cout << "Masukkan jumlah Top Up : ";
        cin >> bayar;
        mTopupSaldo(totalSaldo, bayar);
        cout << "\nPilih metode pembayaran\n";
        cout << "1. BCA\n";
        cout << "2. DANA\n";
        cout << "Pilih : ";
        cin >> metode;

        switch (metode)
        {
        case 1:
            cout << "Silahkan Transfer ke Rekening berikut";
            cout << "\n3516276162 a/n HRD OPERA BIOSKOP";
            break;
        case 2:
            cout << "Silahkan Transfer ke Rekening berikut";
            cout << "\n081904086611 a/n HRD OPERA BIOSKOP";
            break;
        }
            cout << "\nDengan total " << bayar;
            cout << "\nTekan 1 jika sudah bayar : ";
            cin >> tekan;
    } 
    else if (pilih == 2)
    {   
        cout<<"Sisa Saldo Anda : "<<totalSaldo<<endl; 
    }
    else
    {
        cout << "Pilihan Anda tidak valid\n";
    }
}
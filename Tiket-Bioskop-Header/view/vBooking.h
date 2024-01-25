#include <iostream>
#include "../model/mBooking.h"

using namespace std;

void viewBooking()
{
    double totalPesan;
    cout<<"Masukan Kode Film : ";
    cin>>inptKodeFilm;

    int index = mSearchJadwal(inptKodeFilm);
    if(index != -1){
        cout<<"Nama Film\t\t\t: "<<nameFilm[index];
        cout<<"\nBatas Usia\t\t\t: "<<batasUsia[index];
        cout<<"\nTanggal Tayang\t\t\t: "<<tanggalTayang[index];
        cout<<"\nNama Studio\t\t\t: "<<namaStudioBioskop[index];
        cout<<"\nDurasi Tayang\t\t\t: "<<durasiTayang[index];
        cout<<"\nHarga Tiket\t\t\t: "<<hargaTiket[index]<<endl;
    }else{
        cout<<"Data Bioskop Tidak Ditemukan."<<endl;
    }

    cout<<"Jumlah tiket yang dipesan\t: ";
    cin>>jml;
    cout<<"\n|============================================|\n";
    cout<<"|  a1  |  a2  |  a3  |  |  a4  |  a5  |  a6  |\n";
    cout<<"|============================================|\n";
    cout<<"|  a7  |  a8  |  a9  |  |  a0  |  b1  |  b2  |\n";
    cout<<"|============================================|\n";
    cout<<"|  b3  |  b4  |  b5  |  |  b6  |  b7  |  b8  |\n";
    cout<<"|============================================|\n";
    cout<<"|  b9  |  b0  |  c1  |  |  c2  |  c3  |  c4  |\n";
    cout<<"|============================================|\n";
    cout<<"|               Layar Bioskop                |\n";
    cout<<"|============================================|\n";

    mBooking(totalPesan);

     hargaTiket[index] *= jml;
    cout<<"Total Harga\t: "<<hargaTiket[index];
    cout<<"\nJumlah Tiket\t: "<<jml<<" Tiket";
    cout<<"\nTekan 1 untuk bayar, tekan 0 untuk membatalkan pesanan : ";
    cin>>pay;
    
    if(pay == 1){
        if(hargaTiket[index] >= totalSaldo){
            cout<<"Saldo Anda Tidak Mencukupi\n";
            cout<<"Silahkan TopUp Saldo Anda\n";
            return;
        }else {
            totalPesan = totalSaldo - hargaTiket[index];
            totalSaldo = totalPesan;
            cout<<"sisa saldo anda : "<<totalPesan;
            for(int i = 1; i <= jml; i++){
                cout<<"\n+-----------------------------------------------+-----------------------------------------------+\n";
                cout<<"|                                        TIKET BIOSKOP KE-"<<i<<                   "\t\t\t\t\t|\n";          
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                cout<<"|Film              :  "<<nameFilm[index]<<"\n";
                cout<<"|Kode Kursi        : "<<kursiTerpilih<<" |"<<endl;
                cout<<"|Durasi            :  "<<durasiTayang[index]<<endl;
                cout<<"|Tanggal           :  "<<tanggalTayang[index]<<endl;
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                cout<<"|Selamat Menonton "                                                                     <<"\n";
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
            } 

        }
    }else {
        cout<<"Pesanan di batalkan\n";
    }
}
#include <iostream>
using namespace std;

int main(){
    string nama, namaFilm,ulang, kursiTerpilih, kursi, waktu, wktTayang,  jam, jmTayang;
    float jml, harga,  total, ttlKembalian;
    char sukses, prntTiket;
    double uangMsk;
    int kode;
    bool selesai = true;


    cout<<"==============================================\n";
    cout<<"*                                            *\n";
    cout<<"*       SELAMAT DATANG DI OPERA BIOSKOP      *\n";
    cout<<"*                                            *\n";
    cout<<"==============================================\n";

    cout<<"Masukan nama anda sebelum membeli : ";
    getline(cin, nama);
    cout<<endl;

    cout<<"--------------------------------------------------------------------------\n";
    cout<<"*                        Jadwal Bioskop Hari Ini                         *\n";
    cout<<"--------------------------------------------------------------------------\n";
    cout<<"|1. Dear Zahwa                        |    Rp45.000    |\n";
    cout<<"|2. Datangnya Yajuj Majuj di ITATS    |    Rp35.000    |\n";
    cout<<"|3. Spiderman Indie Home              |    Rp20.000    |\n";
    cout<<"--------------------------------------------------------------------------\n";
    cout<<"Pilih kode film [1|2|3]                  : ";
    cin>>kode;
    while(kode < 1 || kode > 3){
        cout<<"Kode film tidak valid"<<endl;
        cout<<"Silahkan pilih kode film lain        : ";
        cin>>kode;
    }  if(kode == 1){
        namaFilm = "Dear Zahwa";
        harga = 45000;
        total = harga * jml;
    } else if(kode == 2){
        namaFilm = "Datangnya Yajuj Majuj di ITATS";
        harga = 35000;
        total = harga * jml;
    } else if(kode == 3){
        namaFilm = "Spiderman Indie Home";
        harga = 20000;
        total = harga * jml;
    }

    switch (kode){
             case 1:
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"*                    Tanggal Tayang                  *\n";
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"|1. 17 November 2023                                 |\n";
                        cout<<"|2. 18 November 2023                                 |\n";
                        cout<<"|3. 19 November 2023                                 |\n";
                        cout<<"------------------------------------------------------\n";
                        cout<<"Pilih Tanggal Tayang : ";
                        cin>>waktu;
                            while(waktu < "1" || waktu > "3"){
                            cout<<"Yang Anda Inputkan Tidak Valid\n";
                            cout<<"Pilih Tanggal Tayang : ";
                            cin>>waktu;
                                } if(waktu == "1"){
                                wktTayang = "17 November 2023";                         
                            } else if(waktu == "2"){
                                wktTayang = "18 November 2023";
                            } else if(waktu == "3"){
                                wktTayang = "19 November 2023";
                            }
                           
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"*                     Jam Tayang                     *\n";
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"|1. 12:00 - 13:00                                    |\n";
                        cout<<"|2. 14:55 - 15.55                                    |\n";
                        cout<<"|3. 17:50 - 18.50                                    |\n";
                        cout<<"------------------------------------------------------\n";
                        cout<<"Pilih jam tayang : ";
                        cin>>jam;
                            while(jam < "1" || jam > "3"){
                            cout<<"Yang Anda Inputkan Tidak Valid\n";
                            cout<<"Pilih jam tayang : ";
                            cin>>jam;
                            } if(jam == "1"){
                                 jmTayang = "12:00 - 13:00";                       
                            } else if(jam == "2"){
                                 jmTayang = "14:55 - 15.55";
                            } else if(jam == "3"){
                                 jmTayang = "17:50 - 18.50";
                            }

                        cout<<"Masukkan jumlah tiket yang anda pesan     : ";
                        cin>>jml; 

                      
             break;
             case 2 :
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"*                    Tanggal Tayang                  *\n";
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"|1. 17 November 2023                                 |\n";
                        cout<<"|2. 18 November 2023                                 |\n";
                        cout<<"|3. 19 November 2023                                 |\n";
                        cout<<"------------------------------------------------------\n";
                        cout<<"Pilih Tanggal Tayang : ";
                        cin>>waktu;
                            while(waktu < "1" || waktu > "3"){
                            cout<<"Yang Anda Inputkan Tidak Valid\n";
                            cout<<"Pilih Tanggal Tayang : ";
                            cin>>waktu;
                                } if(waktu == "1"){
                                wktTayang = "17 November 2023";                         
                            } else if(waktu == "2"){
                                wktTayang = "18 November 2023";
                            } else if(waktu == "3"){
                                wktTayang = "19 November 2023";
                            }
                           
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"*                     Jam Tayang                     *\n";
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"|1. 12:00 - 13:00                                    |\n";
                        cout<<"|2. 14:55 - 15.55                                    |\n";
                        cout<<"|3. 17:50 - 18.50                                    |\n";
                        cout<<"------------------------------------------------------\n";
                        cout<<"Pilih jam tayang : ";
                        cin>>jam;
                            while(jam < "1" || jam > "3"){
                            cout<<"Yang Anda Inputkan Tidak Valid\n";
                            cout<<"Pilih jam tayang : ";
                            cin>>jam;
                            } if(jam == "1"){
                                 jmTayang = "12:00 - 13:00";                       
                            } else if(jam == "2"){
                                 jmTayang = "14:55 - 15.55";
                            } else if(jam == "3"){
                                 jmTayang = "17:50 - 18.50";
                            }
                        cout<<"Masukkan jumlah tiket yang anda pesan     : ";
                        cin>>jml; 
             break;
             case 3 :
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"*                    Tanggal Tayang                  *\n";
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"|1. 17 November 2023                                 |\n";
                        cout<<"|2. 18 November 2023                                 |\n";
                        cout<<"|3. 19 November 2023                                 |\n";
                        cout<<"------------------------------------------------------\n";
                        cout<<"Pilih Tanggal Tayang : ";
                        cin>>waktu;
                            while(waktu < "1" || waktu > "3"){
                            cout<<"Yang Anda Inputkan Tidak Valid\n";
                            cout<<"Pilih Tanggal Tayang : ";
                            cin>>waktu;
                                } if(waktu == "1"){
                                wktTayang = "17 November 2023";                         
                            } else if(waktu == "2"){
                                wktTayang = "18 November 2023";
                            } else if(waktu == "3"){
                                wktTayang = "19 November 2023";
                            }
                           
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"*                     Jam Tayang                     *\n";
                        cout<<"---------------------------+--------------------------\n";
                        cout<<"|1. 12:00 - 13:00                                    |\n";
                        cout<<"|2. 14:55 - 15.55                                    |\n";
                        cout<<"|3. 17:50 - 18.50                                    |\n";
                        cout<<"------------------------------------------------------\n";
                        cout<<"Pilih jam tayang : ";
                        cin>>jam;
                            while(jam < "1" || jam > "3"){
                            cout<<"Yang Anda Inputkan Tidak Valid\n";
                            cout<<"Pilih jam tayang : ";
                            cin>>jam;
                            } if(jam == "1"){
                                 jmTayang = "12:00 - 13:00";                       
                            } else if(jam == "2"){
                                 jmTayang = "14:55 - 15.55";
                            } else if(jam == "3"){
                                 jmTayang = "17:50 - 18.50";
                            }
                        cout<<"Masukkan jumlah tiket yang anda pesan     : ";
                        cin>>jml; 
             break;
    }      
      
    cout<<"|============================================|\n";
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
    
    if(kode == 1){
        harga = 45000;
        total = harga * jml;
    } else if(kode == 2){
        harga = 35000;
        total = harga * jml;
    } else if(kode == 3){
        harga = 20000;
        total = harga * jml;
    }


    cout<<"---------------------------+--------------------------\n";
    cout<<"*                    Total Pesanan                   *\n";
    cout<<"---------------------------+--------------------------\n";
    cout<<"Judul film : "<<namaFilm<<endl;
    cout<<"Jumlah tiket : "<<jml<<endl;
    cout<<"Total yang harus dibayar : "<<total<<endl;
    cout<<"---------------------------+--------------------------\n";
    cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
    cin>>sukses;
    if(sukses == 'Y' || sukses == 'y'){
    cout<<"Masukan jumlah uang anda \t: ";
    cin>>uangMsk;
    ttlKembalian = uangMsk - total;
        while(uangMsk < total){
            cout<<"uang anda tidak mencukupi\n";
            cout<<"Masukan jumlah uang anda \t: ";
            cin>>uangMsk;
            ttlKembalian = uangMsk - total;
            selesai = (sukses == 'Y' || sukses == 'y');
        }
    } else{
        selesai = false;
    }

    if(selesai){
        cout<<"total pesanan\n";
        cout<<"Total harga tiket : "<<total<<endl;
        cout<<"Uang tunai : "<<uangMsk<<endl;
        cout<<"Uang Kembalian : "<<ttlKembalian<<endl;
        cout<<"Ketik (Y) untuk memunculkan tiket anda : ";
        cin>>prntTiket;

        
        if(prntTiket == 'Y' || prntTiket == 'y'){

            for(int i = 1; i <= jml; i++){
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                cout<<"|                                        TIKET BIOSKOP KE-"<<i<<                   "\t\t\t\t\t|\n";          
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                cout<<"|Film              :  "<<namaFilm<<"\n";
                cout<<"|Kode Kursi        : "<<kursiTerpilih<<" |"<<endl;
                cout<<"|Jam               :  "<<jmTayang<<endl;
                cout<<"|Tanggal           :  "<<wktTayang<<endl;
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                cout<<"|Selamat Menonton "<<nama                                                                     <<"\n";
                cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
            }   

            
        }else {
                while(!(prntTiket == 'Y' || prntTiket == 'y')){
                    cout<<"Inputan tidak valid\n";
                    cout<<"Ketik kembali (Y) untuk memunculkan tiket anda :";
                    cin>>prntTiket;
                for(int i = 1; i <= jml; i++){
                    cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                    cout<<"|                                        TIKET BIOSKOP KE-"<<i<<                   "\t\t\t\t\t|\n";          
                    cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                    cout<<"|Film              :  "<<namaFilm<<"\n";
                    cout<<"|Kode Kursi        : "<<kursiTerpilih<<" |"<<endl;
                    cout<<"|Jam               :  "<<jmTayang<<endl;
                    cout<<"|Tanggal           :  "<<wktTayang<<endl;
                    cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                    cout<<"|Selamat Menonton "<<nama                                                                     <<"\n";
                    cout<<"+-----------------------------------------------+-----------------------------------------------+\n";
                }

                }
        }
    } else{
        cout<<"Pembelian dibatalkan";
    }
    return 0;
}

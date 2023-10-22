#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int pil, pil1, pil2, jml1, jml2, total[2];
    int uangMsk;
    int makanan[3] = {25000, 30000, 45000};
    int minuman[3] = {10000, 18000, 25000};
    char ulang, sukses;

do {
    awal1 :
    cout<<"------------------------------------------------------------------------------\n";
    cout<<"                               Menu Makanan                                   "<<endl;
    cout<<"------------------------------------------------------------------------------\n";
    cout<<"1. Nasi Goreng Spesial \t\t\t\t| Rp25.000"<<"\n2. Ayam Bakar Madu \t\t\t\t| Rp30.000"<<"\n3. Sushi Roll Variasi \t\t\t\t| Rp45.000\n";
    cout<<"------------------------------------------------------------------------------\n";
    cout<<"Pilih Menu Makanan Berdasarkan Angka (cth 1) \t: ";
    cin>>pil1;
    if(pil1 == 1){
        cout<<"Total yang mau anda pesan \t\t\t: ";
        cin>>jml1;
    }else if(pil1 == 2){
        cout<<"Total yang mau anda pesan \t\t\t: ";
        cin>>jml1;
    }else if(pil1 == 3){
        cout<<"Total yang mau anda pesan \t\t\t: ";
        cin>>jml1;
    }
    cout<<"------------------------------------------------------------------------------\n";
    

    switch(pil1){
        case 1: 
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                               Menu Minuman                                  "<<endl;          
                cout<<"------------------------------------------------------------------------------\n";
                cout<<" 1. Es Teh Semanis Zahwa \t\t\t| Rp10.000\n";
                cout<<" 2. Smoothie Buah Sega \t\t\t\t| Rp18.000\n";
                cout<<" 3. Latte Caramel \t\t\t\t| Rp25.000\n";
                cout<<" 0. Untuk Kembali Ke Menu Makanan\n";
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Pilih Menu Minuman \t\t\t\t: ";
                cin>>pil2;
                if(pil2 == 1 ){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 2){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 3){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 0){
                    goto awal1;
                }
                cout<<"------------------------------------------------------------------------------\n";
                system("cls");
                
        switch(pil2){
            case 1:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[0] * jml1) + (minuman[0] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal2 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal2;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            case 2:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[1] * jml1) + (minuman[1] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal3 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal3;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            case 3:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[2] * jml1) + (minuman[2] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal4 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal4;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            default:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Tidak ada pilihan menu, Dibaca Lagi Bub"<<endl;
                cout<<"------------------------------------------------------------------------------\n";
        }
        break;
        case 2:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                               Menu Minuman                                  "<<endl;          
                cout<<"------------------------------------------------------------------------------\n";
                cout<<" 1. Es Teh Semanis Zahwa \t\t\t| Rp10.000\n";
                cout<<" 2. Smoothie Buah Sega \t\t\t\t| Rp18.000\n";
                cout<<" 3. Latte Caramel \t\t\t\t| Rp25.000\n";
                cout<<" 0. Untuk Kembali Ke Menu Makanan\n";
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Pilih Menu Minuman \t\t\t\t: ";
                cin>>pil2;
                if(pil2 == 1 ){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 2){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 3){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 0){
                    goto awal1;
                }
                cout<<"------------------------------------------------------------------------------\n";
                system("cls");
                
        switch(pil2){
            case 1:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[0] * jml1) + (minuman[0] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal5 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal5;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            case 2:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[1] * jml1) + (minuman[1] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal6 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal6;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            case 3:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[2] * jml1) + (minuman[2] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal7 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal7;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
               break;
            default:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Tidak ada pilihan menu, Dibaca Lagi Bub"<<endl;
                cout<<"------------------------------------------------------------------------------\n";
        }
        break;
        case 3:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                               Menu Minuman                                  "<<endl;          
                cout<<"------------------------------------------------------------------------------\n";
                cout<<" 1. Es Teh Semanis Zahwa \t\t\t| Rp10.000\n";
                cout<<" 2. Smoothie Buah Sega \t\t\t\t| Rp18.000\n";
                cout<<" 3. Latte Caramel \t\t\t\t| Rp25.000\n";
                cout<<" 0. Untuk Kembali Ke Menu Makanan\n";
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Pilih Menu Minuman \t\t\t\t: ";
                cin>>pil2;
                if(pil2 == 1 ){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 2){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 3){
                    cout<<"Jumlah porsi yang mau anda pesan \t\t: ";
                    cin>>jml2;
                }else if(pil2 == 0){
                    goto awal1;
                }
                cout<<"------------------------------------------------------------------------------\n";
                system("cls");
                
        switch(pil2){
            case 1:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[0] * jml1) + (minuman[0] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal8 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal8;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            case 2:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[1] * jml1) + (minuman[1] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal9 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal9;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            case 3:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"                              Menghitung Pesanan                                  "<<endl; 
                cout<<"------------------------------------------------------------------------------\n";
                total[1] = (makanan[2] * jml1) + (minuman[2] * jml2);
                cout<<"Nasi Goreng \t\t\t\t\t: "<<jml1<<" porsi\n";
                cout<<"Es Teh Semanis Zahwa \t\t\t\t: "<<jml2<<" porsi\n";
                cout<<"Total pesanan yang harus dibayar \t\t: "<<total[1]<<endl;
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Ketik (Y) untuk membayar | Ketik (N) untuk membatalkan pesanan : ";
                cin>>sukses;
                cout<<"------------------------------------------------------------------------------\n";    
            
                if(sukses == 'Y' || sukses == 'y'){
                    awal0 :
                    cout<<"Masukan jumlah uang anda \t\t\t: ";
                    cin>>uangMsk;
                    if(uangMsk < total[1]){
                        cout<<"Uang anda tidak mencukupi\n";
                        cout<<"------------------------------------------------------------------------------\n";
                        cout<<"Tekan (0) untuk kembali ke menu pembayaran \t: ";
                        cin>>ulang;
                        cout<<"------------------------------------------------------------------------------\n";
                        goto awal0;
                    } 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"                               Struk Pembayaran                                  "<<endl; 
                    cout<<"------------------------------------------------------------------------------\n";
                    cout<<"Uang tunai \t\t\t\t\t: "<<uangMsk<<endl;
                    total[2] = uangMsk - total[1];
                    cout<<"Total Seluruh Pesanan Anda \t\t\t: "<<total[1]<<endl;
                    cout<<"Uang Kembalian \t\t\t\t\t: "<<total[2]<<endl;
                } else if(sukses == 'N' || sukses == 'n') {
                    cout<<"Kalau tidak jadi pesan mending pulang saja ya :)"<<endl;
                }
                cout<<"------------------------------------------------------------------------------\n";
                break;
            default:
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Tidak ada pilihan menu, Dibaca Lagi Bub"<<endl;
                cout<<"------------------------------------------------------------------------------\n";
        }
        break;
                default :
                cout<<"------------------------------------------------------------------------------\n";
                cout<<"Tidak ada pilihan menu, Dibaca Lagi Bub!!"<<endl;
                cout<<"------------------------------------------------------------------------------\n";
        
    }
        cout << "Ingin memilih menu lain (y/n) : ";
        cin >> ulang;
        cout << endl;
        system("cls");
    }
    while (ulang == 'y' || ulang == 'Y');
    cout << "maturnuwun baginda...";
    cout << endl;
    
}

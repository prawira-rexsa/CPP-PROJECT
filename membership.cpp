#include <iostream>
using namespace std;

main(){
    int awal, menu, jmlBarang;
    double hargaBarang, total, ttlPoint;
    char ulang, ulangBlnj;
    string nama, namaBarang;
    bool exit = false;

    cout<<"     SELAMAT DATANG DI MESIN KASIR KAMI \n";
    cout<<"Ketik angka (1) untuk melanjutkan program kasir : ";
    cin>>awal;

    while(awal > 1){
        cout<<"Inputan Tidak Valid\n";
        cout<<"Ketik kembali angka (1) untuk melanjutkan program kasir : ";
        cin>>awal;
    }

    system("cls");
    
do{

    cout<<"----------------------------------\n";
    cout<<"              Menu                \n";
    cout<<"----------------------------------\n";
    cout<<"1. isi nama pelanggan\n";
    cout<<"2. pembelanjaan\n";
    cout<<"3. informasi pelanggan\n";
    cout<<"4. exit\n"; 
    cout<<"Masukan pilihan anda : ";
    cin>>menu;
    cin.ignore();

    

    switch(menu){
        case 1:
                cout<<"Masukan nama pelanggan : ";
                getline(cin, nama);
                cout<<"Tekan (y) untuk kembali ke menu : ";
                cin>>ulang;
        break;
        case 2:
                cout<<"----------------------------------\n";
                cout<<"        Menu Pembelanjaan         \n";
                cout<<"----------------------------------\n";
                cout<<"masukkan nama barang : ";
                getline(cin, namaBarang);
                cout<<"masukkan harga barang : ";
                cin>>hargaBarang;
                cout<<"masukkan jumlah barang : ";
                cin>>jmlBarang;

                total = hargaBarang * jmlBarang;
                ttlPoint = total / 10000;

                cout<<"tekan (y) untuk kembali ke manu : ";
                cin>>ulang;
        break;
        case 3 :
                cout<<"----------------------------------\n";
                cout<<"     menu informasi pelanggan     \n";
                cout<<"----------------------------------\n";
                cout<<"Nama pelanggan : "<<nama<<endl;
                        if(total >= 0 && total <= 999999){
                            cout<<"Status member : silver\n";
                            cout<<"Jumlah point : "<<ttlPoint<<endl;
                        }else if(total >= 10000000 && total <= 19999999){
                            cout<<"Status member : gold\n";
                            cout<<"Jumlah point : "<<ttlPoint<<endl;
                        }else {
                            cout<<"Status member : platinum\n";
                            cout<<"Jumlah point : "<<ttlPoint<<endl;
                        }
                cout<<"Tekan (Y) untuk memulai kembali, tekan (N) untuk keluar : ";
                cin>>ulang;
        break;
        case 4 :
        exit = true;
    }
}
    while(ulang == 'Y' || ulang == 'y');
    cout<<"terimakasih telah berbelanja";
    return 0;
}
    

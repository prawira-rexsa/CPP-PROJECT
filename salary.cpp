#include <iostream>
#include <iomanip>
using namespace std;

//inputan karyawan
void masukkanData(int jml, string nama[], string shift[], int jmlIzin[]) {
    for(int i = 0; i < jml; i++){
        cout << "masukan nama karyawan ke-" << i + 1 << " : ";
        cin >> nama[i];
        cout << "Masukan shift kerja karyawan ke-" << i + 1 << "(Pagi/Malam) : ";
        cin >> shift[i];
        cout << "Masukan jumlah izin/sakit karyawan ke-" << i + 1 << " : ";
        cin >> jmlIzin[i];
    }
}

//proses perhitungan gaji
void perhitunganGaji(int jml, string shift[], int jmlIzin[], int hadir[], double total[], double pajak[], double ttlGaji[], double gajiPerHari[]){
    for(int i = 0; i < jml; i++){
        if(shift[i] == "malam"){
            gajiPerHari[i] = 160000;
            hadir[i] = 30 - jmlIzin[i];
            total[i] = gajiPerHari[i] * (30 - jmlIzin[i]);
            pajak[i] = total[i] * 0.05;
            ttlGaji[i] = total[i] - pajak[i];
    }else {
            gajiPerHari[i] = 120000;
            hadir[i] = 30 - jmlIzin[i];
            total[i] = gajiPerHari[i] * (30 - jmlIzin[i]);
            pajak[i] = total[i] * 0.05;
            ttlGaji[i] = total[i] - pajak[i];
    }
   }
}

int main(){
    string nama[100], shift[100];
    int jmlC:\GO,hadir[100], jmlIzin[100];
    double total[100], pajak[100], ttlGaji[100], gajiPerHari[2];

    cout<<"Masukan jumlah karyawan : ";
    cin>>jml;

    masukkanData(jml, nama, shift, jmlIzin);
    perhitunganGaji(jml, shift, jmlIzin, hadir, total, pajak, ttlGaji, gajiPerHari);

    cout<<fixed<<setprecision(0);
    cout<<"=====+=============+==============+================+============+==============+==================\n";
    cout << left << setw(10) << "No" << setw(15) << "Nama" << setw(15) << "Shift" << setw(15) << "Kehadiran" << setw(15) << "Gaji" << setw(15) << "Pajak" << setw(15) << "Gaji Bersih" << endl;
    cout<<"=====+=============+==============+================+============+==============+==================\n";
    for (int i = 0; i < jml; i++) {
    cout << left << setw(10) << i + 1 << setw(15) << nama[i] << setw(15) << shift[i] << setw(15) << hadir[i] << setw(15)<< total[i] << setw(15)<< pajak[i] << setw(15) <<ttlGaji[i] << endl;
    }
}


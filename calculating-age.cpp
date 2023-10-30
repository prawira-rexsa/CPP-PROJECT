#include <iostream>
using namespace std;

main(){
    int tahunSekarang, tahunLahir, hasil;

    printf("Masukan tahun sekarang : \n");
    scanf("%d", &tahunSekarang);
    printf("Masukan tahun lahir : \n");
    scanf("%d", &tahunLahir);

    hasil = tahunSekarang - tahunLahir;

    printf("Umur anda sekarang adalah : %d%s", hasil, " tahun\n");

    if(hasil <= 12){
            cout<<"Usia anda kategori anak-anak";
        } else if(hasil <= 18){
            cout<<"Usia anda kategori remaja";
        } else if(hasil <= 35){
            cout<<"Usia anda kategori dewasa muda";
        } else if(hasil <= 59){
            cout<<"Usia anda kategori dewasa madya";
        } else{
            cout<<"Usia anda mendekati yang maha kuasa";
    }
}

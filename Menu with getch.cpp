#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    char pilih;
    int menu, pesan, uang, kembali, tambahan;
    int total = 0;
    string tambah;

    do {

        system ("cls");

    cout<<"==========================="<<endl;
    cout<<"Selamat datang Di Nusantara"<<endl;
    cout<<"            MENU           "<<endl;
    cout<<"==========================="<<endl;

    cout<<"1. Makanan\n2. Minuman"<<endl;

    pilih = getche();

    if (pilih == '1'){

        system ("cls");

        cout <<"Pilihlah Menu Makanan Yang Tersedia:" <<endl;
        cout <<"1. Nasi Rendang   Rp. 15.000"<<endl;
        cout <<"2. Nasi Padang    Rp. 12.000"<<endl;

        cout<<"Masukkan Menu = "; cin>>menu;

        switch (menu){

            case 1: 
            system ("cls");
                cout<<"Anda Memilih ---> Nasi Rendang   Rp. 15.000"<<endl;
                cout<<"Berapa Porsi Yang Ingin Anda Pesan = ";
                cin>>pesan;

                total += (pesan * 15000);
            break;
            case 2:

            system ("cls");

                cout<<"Anda Memilih ---> Nasi Padang    Rp. 12.000";
                cout<<"Berapa Porsi Yang Ingin Anda Pesan = ";
                cin>>pesan;

                total += (pesan * 12000);
            break;

            default:
            system ("cls");
                cout<<"Anda Membatalkan Pesanan"<<endl;
            break;

        }
    } if (pilih == '2'){

        system ("cls");

        cout<<"Pilihlah Menu Minuman Yang Tersedia"<<endl;
        cout<<"1. Teh Es       Rp. 3.000"<<endl;
        cout<<"2. Kopi Hitam   Rp. 2.000"<<endl;

        cout<<"Masukkan Menu = "; cin>>menu;

        switch(menu){

            case 1:
            system ("cls");
                cout<<"Anda Memilih ---> Teh Es       Rp. 3.000"<<endl;
                cout<<"Berapa Gelas Anda Ingin Memesan = "; cin>>pesan;

                total += (pesan * 3000);
            break;
            case 2:
            system ("cls");
                cout<<"Anda Memilih ---> Kopi Hitam       Rp. 2.000"<<endl;
                cout<<"Berapa Gelas Anda Ingin Memesan = "; cin>>pesan;

                total += (pesan * 2000);
            break;

        }
    }

    cout<<"Apakah Anda Ingin menambah pesanan (y/t)"; cin>>tambah;

    }while (tambah == "y");

    cout<<"Total pembelian "<<total<<endl;
    cout<<"Masukkan Uang Anda = "; cin>>uang;

    if (uang > total){

        
        kembali = uang - total;
        cout<<"Jadi kembalian Anda adalah = "<<kembali<<endl;


    }else if (uang < total){

        cout<<"uang anda tidak cukup, silahkan tambah uang anda "<<endl;
        cout<<"Masukkan uang anda = "; cin>>tambahan;

        kembali = (uang + tambahan)-total;

        cout<<"Sisa kembalian anda adalah = "<<kembali<<endl;
    } else {

        cout<<"Uang Anda Pas "<<endl;

    }
    system("pause");
    system("cls");
    cout<<"Terimakasih"<<endl;

}

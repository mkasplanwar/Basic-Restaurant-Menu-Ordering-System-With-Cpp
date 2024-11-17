#include <iostream>
using namespace std;

int main(){
	
	int a, b, price, pesan, uang, tambahan, kembali;
	int total = 0;
	string ulang, nama, tambah;
	string menu[4][5] = {
		{ "Ayam Lalapan", "Ayam Balado", "Ayam Bakar", "Ayam Karih", "Sup Ayam"},
		{"Gudeg Yogya","Sup Asperagus", "Terong Balado", "Tumis jagus Buncis","Cap Cay"},
		{"Teh Es", "Teh Susu", "Kopi Hitam", "Kopi Gula Aren", "Syrup Kelapa Muda"},
		{"Es Campur", "Es Doger Istemewa", "Martabak Istimewa", "Peanut Butter Toast", "Banana Honey Toast"}
	};
	int harga[4][5] = {
		{ 15000, 15000, 20000, 12000, 10000 },
		{ 15000, 10000, 8000, 10000, 15000},
		{ 3000, 5000, 3000, 5000, 5000 },
		{ 10000, 10000, 15000, 12000, 12000}
	};
	
	while (a >= 1 <= 4){

		system ("cls");
		
		cout<<"SELAMAT DATANG DI RESTORAN KITA\nMADE BY ANWAR"<<endl<<endl;
		cout<<"Menu Yang Tersedia Di Restoran"<<endl;
		cout<<"\n\t1. Makanan\n\t2. Sayuran\n\t3. Minuman\n\t4. Dessert & Snacks"<<endl<<endl;
		
		cout<<"Masukkan Pilihan Menu Anda, (tekan 0 untuk Cancel) = ";
		cin>>a;
		cout<<"\n-------------------------------------------------------"<<endl<<endl;
		
		if (a == 0 || a > 4){
		
		cout<<"Apakah Anda Ingin Membatalkan Pesanan (y/n) = ";
		cin>>ulang;
			if (ulang == "y"){
				
				cout<<"\nTERIMA KASIH, SEMOGA ANDA PUAS";
				break;
			}	
		}
		switch (a){
			
		case 1:

		system ("cls");

			cout<<"Pilih Menu Makanan Yang Tersedia" <<endl <<endl;
			cout<<"\t1. Nasi + Ayam Lalapan             Rp. 15.000"<<endl;
			cout<<"\t2. Nasi + Ayam Balado              Rp. 15.000"<<endl;
			cout<<"\t3. Nasi + Ayam Bakar               Rp. 20.000"<<endl;
			cout<<"\t4. Nasi + Ayam Karih               Rp. 12.000"<<endl;
			cout<<"\t5. Nasi + Sup Ayam                 Rp. 10.000"<<endl <<endl;

			cout<<"Masukkan Menu Pilihan Anda = ";
			cin>>b;
			if (b == 0 || b > 4){
		
			cout<<"Apakah Anda Ingin Membatalkan Pesanan (y/n) = ";
			cin>>ulang;
				if (ulang == "y"){
					
					cout<<"\nTERIMA KASIH, SEMOGA ANDA PUAS";
					break;
				}	
			}
			switch (b){

				case 1:
				 	nama = menu[0][0];
					price = harga[0][0];
				break;
				case 2:
					nama = menu[0][1];
					price = harga[0][1];
				break;
				case 3:
					nama = menu[0][2];
					price = harga[0][2];
				break;
				case 4:
					nama = menu[0][3];
					price = harga[0][3];
				break;
				case 5:
					nama = menu[0][4];
					price = harga[0][4];
				break;
			}
		break;
		case 2:
		     
			system ("cls");

			cout<<"Silahkan Pilih Menu Sayuran Yang Tersedia"<<endl;
			cout<<"\t1. Gudeg Yogya            Rp. 15.000"<<endl;
			cout<<"\t2. Sup Asperagus          Rp. 10.000"<<endl;
			cout<<"\t3. Terong Balado          Rp. 8.000"<<endl;
			cout<<"\t4. Tumis Jagung Buncis    Rp. 10.000"<<endl;
			cout<<"\t5. Cap Cay                Rp. 15.000"<<endl <<endl;

			cout<<"Masukkan Pilihan Menu Anda = ";
			cin>>b;

			if (b == 0 || b > 4){
		
			cout<<"Apakah Anda Ingin Membatalkan Pesanan (y/n) = ";
			cin>>ulang;
				if (ulang == "y"){
					
					cout<<"\nTERIMA KASIH, SEMOGA ANDA PUAS";
					break;
				}	
			} switch (b){
				case 1:
					nama = menu[1][0];
					price = harga[1][0];
				break;
				case 2:
					nama = menu[1][1];
					price = harga[1][1];
				break;
				case 3:
					nama = menu[1][2];
					price = harga[1][2];
				break;
				case 4:
					nama = menu[1][3];
					price = harga[1][3];
				break;
				case 5:
					nama = menu[1][4];
					price = harga[1][4];
				break;

			}
		break;
		case 3:

		system ("cls");

			cout<<"Silahkan Pilih Menu Minuman Yang Tersedia"<<endl;
			cout<<"\t1. Es Teh                     Rp. 3.000"<<endl;
			cout<<"\t2. Teh Susu                   Rp. 5.000"<<endl;
			cout<<"\t3. Kopi Hitam                 Rp. 3.000"<<endl;
			cout<<"\t4. Kopi Gula Aren             Rp. 5.000"<<endl;
			cout<<"\t5. Syrup Kelapa Muda          Rp. 5.000"<<endl <<endl;

			cout<<"Masukkan Pilihan Menu Anda = ";
			cin>>b;

			if (b == 0 || b > 4){
		
			cout<<"Apakah Anda Ingin Membatalkan Pesanan (y/n) = ";
			cin>>ulang;
				if (ulang == "y"){
					
					cout<<"\nTERIMA KASIH, SEMOGA ANDA PUAS";
					break;
				}	
			} 
			switch (b){
				case 1:
					nama = menu[2][0];
					price = harga[2][0];
				break;
				case 2:
					nama = menu[2][1];
					price = harga[2][1];
				break;
				case 3:
					nama = menu[2][2];
					price = harga[2][2];
				break;
				case 4:
					nama = menu[2][3];
					price = harga[2][3];
				break;
				case 5:
					nama = menu[2][4];
					price = harga[2][4];
				break;
			}
		break;
		case 4:

		system ("cls");
			cout<<"Silahkan Pilih Menu Dessert & Snacks Yang Tersedia"<<endl;
			cout<<"\t1. Es Campur                   Rp. 10.000"<<endl;
			cout<<"\t2. Es Doger Istimewa           Rp. 10.000"<<endl;
			cout<<"\t3. Martabak Manis              Rp. 15.000"<<endl;
			cout<<"\t4. Peanut Butter Toast         Rp. 12.000"<<endl;
			cout<<"\t5. Banana Honey Toast          Rp. 12.000"<<endl <<endl;

			cout<<"Masukkan Pilihan Menu Anda = ";
			cin>>b;

			if (b == 0 || b > 4){
		
			cout<<"Apakah Anda Ingin Membatalkan Pesanan (y/n) = ";
			cin>>ulang;
				if (ulang == "y"){
					
					cout<<"\nTERIMA KASIH, SEMOGA ANDA PUAS";
					break;
				}	
			} 
			switch (b){
				case 1:
					nama = menu[3][0];
					price = harga[3][0];
				break;
				case 2:
					nama = menu[3][1];
					price = harga[3][1];
				break;
				case 3:
					nama = menu[3][2];
					price = harga[3][2];
				break;
				case 4:
					nama = menu[3][3];
					price = harga[3][3];
				break;
				case 5:
					nama = menu[3][4];
					price = harga[3][4];
				break;
			}
			break;

		}

		system ("cls");

		cout<<"\n\n---------------------------------------------------------------"<<endl;
		cout<<"Anda Memilih -------> Menu "<<nama<<" Dengan Harga Rp. "<<price<<endl;
		cout<<"---------------------------------------------------------------"<<endl<<endl;

		cout<<"Berapa Banyak Porsi Anda Ingin Memesan = ";
		cin>>pesan;

		total += (pesan * price);

		cout<<"\n\n-------Pesanan Anda Sudah Kami Proses-------"<<endl<<endl;
	
		cout<<"Apakah Anda Ingin Menambah Pesanan Anda (y/n) = ";
		cin>>tambah;
			if (tambah == "n"){
				break;
			}
	}
	cout<<"\n\n------------------------------------------------------------------"<<endl;
	cout <<"\n\nTotal Pembelian Anda Adalah Rp. " <<total <<endl <<endl;
    cout << "Masukkan Uang Anda = ";
    cin >> uang;
        if (uang > total) {
            kembali = uang - total;
            cout << "Jadi, Kembalian Anda = Rp. " << kembali << endl;
        } else if (uang < total) {
            cout << "Uang Anda Tidak Cukup, Silahkan Tambahkan Sisa Kekurangannya" << endl << endl;
            cout << "Masukkan Uang Anda = Rp. ";
            cin >> tambahan;
            kembali = (uang + tambahan) - total;
            cout << "Sisa Kembalian Anda Adalah = Rp. " << kembali;
        } else {
            cout << "Uang Anda Pas" << endl;
        }
        cout<<"\n\n\n-----------Terima Kasih Telah Berkunjung-------------"<<endl<<endl;
}  

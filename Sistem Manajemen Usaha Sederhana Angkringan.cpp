#include<iostream>
using namespace std;

int main(){
	int pilihan,harga,total_menu=0,sementara,pemilihan_materi;
	int porsi_1,porsi_semua=0;
	char menu, pengulangan,menu_utama;
	string nama_menu;
	
	
	do{
	cout<<"=======Menu Utama=======\n";
	cout<<"1. Catat menu\n";
	cout<<"2. Pengelolaan harian\n";
	cout<<"3. Transaksi\n";
	cout<<"Pilih Salah Satu:";
	cin >> pemilihan_materi;
	cout<<"===========================================================\n\n";
	
	//CATAT MENU
	if(pemilihan_materi==1){
		cout << "=== Operasional Harian Penjualan ===\n";
		cout << "1. Gultik          	= 10000\n";
    	cout << "2. Nasi Bakar      	= 3000\n";
    	cout << "3. Sate Taichan    	= 3000\n";
    	cout << "4. Sate Telur Ayam 	= 3000\n";
    	cout << "5. Sate Sayap Ayam 	= 5000\n";
    	cout << "6. Sate Ceker Ayam 	= 5000\n";
		cout << "7. Sate Pala Ayam  	= 5000\n";
    	cout << "8. Sate Sosis Besar	= 3000\n";
    	cout << "9. Sate Sosis Kecil	= 3000\n";
    	cout << "10. Sate All Varian	= 3000\n";
    
	do{
		cout<<"Catat menu(1-10):";
		cin>>pilihan;
		cout<<"===========================================================\n\n";
	
	switch(pilihan){
    case 1: harga = 10000; nama_menu = "Gultik"; break;
    case 2: harga = 3000;  nama_menu = "Nasi Bakar"; break;
	case 3: harga = 3000;  nama_menu = "Sate Taichan"; break;
    case 4: harga = 3000;  nama_menu = "Sate Telur Ayam"; break;
    case 5: harga = 5000;  nama_menu = "Sate Sayap Ayam"; break;
    case 6: harga = 5000;  nama_menu = "Sate Ceker Ayam"; break;
    case 7: harga = 5000;  nama_menu = "Sate Pala Ayam"; break;
    case 8: harga = 3000;  nama_menu = "Sate Sosis Besar"; break;
    case 9: harga = 3000;  nama_menu = "Sate Sosis Kecil"; break;
    case 10: harga = 3000; nama_menu = "Sate All Varian"; break;
    default:
        continue;
	}

	if (pilihan==1||pilihan==2||pilihan==3||pilihan==4||pilihan==5||pilihan==6||pilihan==7||pilihan==8||pilihan==9||pilihan==10){
		cout<<"Di pilihan anda memilih: "<<nama_menu<<"  Rp."<<harga<<"\n";
		cout<<"Berapa porsi:";
		cin>>porsi_1;
		total_menu+=porsi_1*harga;
		sementara=porsi_1*harga;
		porsi_semua+=porsi_1;
	}
		
		cout<<"Total menu ini: "<<sementara<<"\n";
		cout<<"Total harga total menu sementara: "<<total_menu<<"\n";
		cout<<"Apakah anda ingin menambahkan menu lain lagi(Y/T)?";
		cin>>pengulangan;
		cout<<"===========================================================\n\n";
		
	}
	while (pengulangan=='y'||pengulangan=='Y');		

		cout<<"Anda mencatat: \n";
		cout<<"Total semua porsi: "<<porsi_semua<<" Porsi"<<"\n";
		cout<<"Total semua pencatatan:Rp "<<total_menu<<"\n";
		cout<<"Pencatatan selesai\n";
	
	//Pengelolaan harian
	}else if (pemilihan_materi==2){
		int pilihan, harga, porsi, total_semua = 0,stock;
    	int stok[10] = {10, 20, 15, 15, 12, 12, 12, 20, 20, 20}; // stok awal per menu
    	int porsi_semua = 0;
    	char pengulangan;
    		string nama_menu;
    		string menu_list[10] = {"Gultik", "Nasi Bakar", "Sate Taichan", "Sate Telur Ayam", 
                            	"Sate Sayap Ayam", "Sate Ceker Ayam", "Sate Pala Ayam", 
                             	"Sate Sosis Besar", "Sate Sosis Kecil", "Sate All Varian"};
   		int harga_list[10] = {10000, 3000, 3000, 3000, 5000, 5000, 5000, 3000, 3000, 3000};
   		 
		   	cout << "=== Operasional Harian Penjualan ===\n";
		   	cout << "1. Gultik          	= 10000\n";
		   	cout << "2. Nasi Bakar      	= 3000\n";
			cout << "3. Sate Taichan    	= 3000\n";
			cout << "4. Sate Telur Ayam 	= 3000\n";
			cout << "5. Sate Sayap Ayam 	= 5000\n";
			cout << "6. Sate Ceker Ayam 	= 5000\n";
			cout << "7. Sate Pala Ayam  	= 5000\n";
			cout << "8. Sate Sosis Besar	= 3000\n";
			cout << "9. Sate Sosis Kecil	= 3000\n";
			cout << "10. Sate All Varian	= 3000\n";
    
    		pengulangan = 'y';
    	while(pengulangan == 'y' || pengulangan == 'Y') {
        	cout << "Pilih menu (1-10): ";
       		cin >> pilihan;
        if(pilihan < 1 || pilihan > 10) {
            cout << "Pilihan tidak valid! Coba lagi\n";
            continue;
        	}
        	nama_menu = menu_list[pilihan - 1];
        	harga = harga_list[pilihan - 1];
			stock=stok[pilihan - 1];
			
	 		cout<<"===========================================================\n\n";
        	cout << "Stok tersedia: " << stock << "\n";
       		cout << "Berapa porsi: ";
       		cin >> porsi;
        
		if (porsi <= 0) {
   			cout << "Porsi minimal 1!\n";
 			continue;
			}
        else if(porsi > stock) {
       	cout << "Stok tidak cukup! Coba lagi.\n";
            continue;
        	}

	   		stok[pilihan - 1] -= porsi;
	       	total_semua += harga * porsi;
	       	porsi_semua += porsi;
				
	       	cout << "Anda menjual: " << nama_menu << " x " << porsi << " porsi\n";
	       	cout << "Total penjualan menu ini: Rp " << total_semua << "\n";
	    	cout << "Apakah ingin menambahkan penjualan lain (Y/T)? ";
	       	cin >> pengulangan;
	        cout<<"===========================================================\n\n";
	    	}

			cout << "\n=== Rekap Operasional Harian ===\n";
			cout << "Total porsi terjual: " << porsi_semua << "\n";
			cout << "Total pendapatan: Rp " << total_semua << "\n";
		    cout << "Sisa stok:\n"; 
	    for(int i=0; i<10; i++)
		    cout << menu_list[i] << ": " << stok[i] << "\n";
			cout << "Pencatatan selesai.\n";

	//Transaksi
	}else if (pemilihan_materi==3){
			int porsi, harga, harga_total = 0, menu, metode, uang, kembalian;
    		char pengulangan = 'y',konfirm;
    		int pilihan[10] = {10000, 3000, 3000, 3000, 5000, 5000, 5000, 3000, 3000, 3000};

			    cout << "=== Operasional Harian Penjualan ===\n";
			    cout << "1. Gultik          = 10000\n";
			    cout << "2. Nasi Bakar      = 3000\n";
			    cout << "3. Sate Taichan    = 3000\n";
			    cout << "4. Sate Telur Ayam = 3000\n";
			    cout << "5. Sate Sayap Ayam = 5000\n";
			    cout << "6. Sate Ceker Ayam = 5000\n";
			    cout << "7. Sate Pala Ayam  = 5000\n";
			    cout << "8. Sate Sosis Besar= 3000\n";
			    cout << "9. Sate Sosis Kecil= 3000\n";
			    cout << "10. Sate All Varian= 3000\n";

    		while (pengulangan == 'y' || pengulangan == 'Y') {
		        cout << "Pilih makanan (1-10): ";
		        cin >> menu;

        	if (menu < 1 || menu > 10) {
	            cout << "Pilihan menu tidak valid.\n";
	            continue;
        	}

		        cout << "Berapa porsi: ";
		        cin >> porsi;
		
		        harga = pilihan[menu - 1] * porsi;
		        harga_total += harga;
		
		        cout << "Harga: Rp " << harga << "\n";
		        cout << "Apakah ingin pilih makanan lagi (Y/T): ";
		        cin >> pengulangan;
		        cout<<"===========================================================\n\n";
		    }

			    cout << "Total: Rp " << harga_total << "\n";
			    cout << "Pilih Metode Pembayaran\n";
			    cout << "1. Tunai\n";
			    cout << "2. Non-Tunai\n";
			    cout << "Pilih Metode(1/2): ";
			    cin >> metode;

    		if (metode == 1) {
       		while (true) {
	            cout << "Berikan Jumlah Uang: ";
	            cin >> uang;

            if (uang > harga_total) {
                kembalian = uang - harga_total;
                cout << "Kembalian: Rp " << kembalian << "\n";
                break;
            } else if (uang == harga_total) {
                cout << "Uang pas. \n";
                break;
            } else {
                cout << "Uang tidak cukup! Masukkan ulang.\n";
            }
        	}
    		}
    		else if (metode == 2) {
		        cout << "Pilih: (Y) Jika sudah transfer/scan sukses, (T) Batal: ";
		        cin >> konfirm;
				cout<<"===========================================================\n\n";
        	if (konfirm == 'Y' || konfirm == 'y') {
            	cout << "Transaksi Berhasil. ";
        	}else {
            	cout << "Transaksi dibatalkan.\n";
        	}
    		}
    			cout<<"Terimakasih Sudah jajan Disini";

	}else {
		cout<<"Pilihan Tidak Valid!\n";
			
	}
	cout<<"===========================================================\n\n";
	cout<<"Apakah ingin kembali ke-menu utama (Y/T)?";
	cin>>menu_utama;
	}	
	while(menu_utama=='Y'||menu_utama=='y');
	cout<<"Finish";
}

		

#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	//Tipe data dan variabel
	int usia, thsekarang, thlahir;
	char *ket;
	
	//Input
	cout<<"Masukkan Tahun Sekarang : ";cin>>thsekarang;
	cout<<"Masukkan Tahun Lahir Anda : ";cin>>thlahir;
	
	//Proses
	usia = thsekarang-thlahir;
	
	//Percabangan
	if(usia>=61 && usia<=100)
		ket = "Tua";
	else if (usia>=41 && usia<=60)
		ket = "Parobaya";
	else if (usia>=31 && usia<=40)
		ket = "Dewasa";
	else if (usia>=17 && usia<=30)
		ket = "Remaja";
	else
		ket = "Anak-anak";
		
	//Output
	cout<<"========================================="<<endl;
	cout<<"Usia Anda : "<<usia <<endl;
	cout<<"Keterangan : "<<ket;
	
	
	getch();
}

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct{
	int kode;
	char nama[20];
	int stock;
	char lokasi[20];
}
	   brg;
	   brg barang[5];
	   brg lok[5];
	   brg temp;
	   int n,i,b, cari, ada;
	
int main ()
{
cout<<"\t\t"<<"================================================================="<<endl;
cout<<"\t\t"<<"|                 PROGRAM SEARCHING DAN SORTING                 |"<<endl;
cout<<"\t\t"<<"|                         OBAT-OBATAN                           |"<<endl;
cout<<"\t\t"<<"================================================================="<<endl;
cout<<"\t"<<"Masukkan banyak data = ";
cin>>n;
	
 for(i=0;i<n;i++){
	cout<<endl;
	 cout<<"Data ke-"<<(i+1)<<":"<<endl;
	 cout<<"Input Kode Obat : ";cin>>barang[i].kode;
	 cout<<"Input Nama Obat : ";cin>>gets(barang[i].nama);
	 cout<<"Input Stock Obat : ";cin>>barang[i].stock;
	 cout<<"Input Lokasi Obat : ";cin>>gets(barang[i].lokasi);
	 cout<<endl;
	 }
	 
	 cout<<"\t\t\t"<<"Data Obat Anda"<<endl;
	 cout<<"\t\t\t"<<"============================================================"<<endl;
	 cout<<"\t\t\t"<<"|  Kode Obat  |  Nama Obat  |  Stock Obat  |  Lokasi Obat  |"<<endl;
	 cout<<"\t\t\t"<<"============================================================"<<endl;
	 
	   for(b=0;b<n;b++) {
	   
	   cout<<"\t\t\t"<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t"<<barang[b].lokasi<<"      |"<<endl;
	   
	   }
	   
	   cout<<endl;
		  
	 cout<<"\t\t\t"<<"================================================================="<<endl;
		  
		for(i=0;i<n;i++){
			  	 
			for(b=0;b<n-1;b++){
				 	
				if(barang[b].kode > barang[b+1].kode) {
				 	
				   temp.kode=barang[b].kode;
					     
					 barang[b].kode=barang[b+1].kode;
					 
					 barang[b+1].kode=temp.kode;
					 
					 
					 
					 strcpy(temp.nama,barang[b].nama);
					 
					 strcpy(barang[b].nama,barang[b+1].nama);
					 
					 strcpy(barang[b+1].nama,temp.nama);
					 
					 
					 
					 temp.stock=barang[b].stock;
					 
					 barang[b].stock=barang[b+1].stock;
					 
					 barang[b+1].stock=temp.stock;
					 
					 
					 
					 strcpy(temp.lokasi,barang[b].lokasi);
					 
					 
					 strcpy(barang[b].lokasi,barang[b+1].lokasi);
					 
					 
					 strcpy(barang[b+1].lokasi,temp.lokasi);
					
					}
						 
				}
					
			}
				
			cout<<endl;
				
				
				
				
				
	cout<<endl;
		
		
		
	cout<<"\t\t\t"<<"Data telah diurutkan berdasar kode terkecil : "<<endl;
	cout<<"\t\t\t"<<"============================================================"<<endl;
	cout<<"\t\t\t"<<"|  Kode Obat  |  Nama Obat  |  Stock Obat  |  Lokasi Obat  |"<<endl;
	cout<<"\t\t\t"<<"============================================================"<<endl;
		
	for(b=0;b<n;b++){
		
	cout<<"\t\t\t"<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t"<<barang[b].lokasi<<"      |"<<endl;
		
	}
		
	cout<<endl;
		
	cout<<"\t\t\t"<<"============================================================"<<endl;
		
		
	cout<<endl;
		
	cout<<"\t\t\t"<<"Masukkan kode obat : ";
		
	cin>>cari;
		
	ada = 0;
		
	for(b=0;b<n;b++)
		{
		if(barang[b].kode==cari)
			
			{
				ada=1;
					
				cout<<"\t\t\t"<<"============================================================"<<endl;
				cout<<"\t\t\t"<<"|  Kode Obat  |  Nama Obat  |  Stock Obat  |  Lokasi Obat  |"<<endl;
				cout<<"\t\t\t"<<"============================================================"<<endl;
				cout<<"\t\t\t"<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t"<<barang[b].lokasi<<"      |"<<endl;
			}
		}
				cout<<"\t\t\t"<<"============================================================"<<endl;
					
	if (ada == 0)
		{
			cout<<"Data Tidak ditemukan"<<endl;
		}
	getch();
}

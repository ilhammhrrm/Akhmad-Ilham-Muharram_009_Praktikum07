#include<conio.h>
#include<iostream>
#include<iomanip>
#include<fstream>
#define maks 5
using namespace std;
struct barang
{
	int harga,jumlah;
	double hargajumlah,total;
	char namabarang[31];
};
main()
{
	barang belanja[maks];
	int g,y=0;
	char lagi,nomor[20];
	do
	{
	cout<<"Pembelian Barang Ke="<<y+1<<endl;
	cout<<"===================="<<endl;
	cout<<"Nama Barang		 ";cin.get(belanja[y].namabarang,30);
	cout<<"Harga Satuan		 ";cin>>belanja[y].harga;
	cout<<"Jumlah yang Dibeli";cin>>belanja[y].jumlah;
	cout<<"\nAda barang lain lagi yang dibeli ||maks 5||(Y/N)?";
	cin>>lagi;
	cin.ignore();
	cout<<endl<<endl;
	y++;
	g=y;
	}
	while ((lagi=='y'||lagi=='y')&&y<3);
	
	cout<<"Nama File Nota	:  ";cin>>nomor;
	ofstream struk(nomor,ios::out);
	struk<<"						 Nota Belanja						"<<endl;
	struk<<"					TOKO BUKU GRALEKTRIMEDIA  			    "<<endl;
	struk<<"============================================================"<<endl;
	struk<<"| no | nama barang | harga satuan| jumlah | total harga |"<<endl;
	struk<<"============================================================="<<endl;
	for (y=0;y<g;y++);
	{
	 belanja[y].hargajumlah=belanja[y].harga*belanja[y].jumlah;
	 struk<<"|"<<setw(3)<<y+1<<setw(2);
	 struk<<"|"<<setw(13)<<belanja[y].namabarang<<setw(3);
	 struk<<"|"<<setw(13)<<belanja[y].harga<<setw(2);
	 struk<<"|"<<setw(7)<<belanja[y].jumlah<<setw(2);
	 struk<<"|"<<setw(14)<<belanja[y].hargajumlah<<setw(3)<<"|"<<endl;
	 belanja[maks].total=belanja[0].hargajumlah+belanja[1].hargajumlah+
	 belanja[2].hargajumlah+belanja[3].hargajumlah+belanja[4].hargajumlah+
	 belanja[5].hargajumlah;
	}
	struk<<"============================================================================"<<endl;
    struk<<"total belanja(Rp)"<<setw(28)<<"|"<<setw(14);
    struk<<belanja[maks].total<<setw(3)<<"|"<<endl;
    getch();
}


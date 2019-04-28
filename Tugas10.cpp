#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
 main()
 {
 	struct pemain{

 		float att;char nama[200];

	 };
	 pemain k[10];
	 pemain temp;
	 int data,i,b,ketemu,ganti,baru,a;
	 int c,ban,x,z,y;
	 string cari;
     cout<<"\n|\\_________________________________________________________/|"<<endl;
	 cout<<" >===========PROGRAM DATA PEMAIN SEPAK BOLA DUNIA==========<";
	 cout<<"\n|___________________________________________________________|";

	 cout<<"\nMasukan jumlah pemain: ";cin>>data;cout<<endl;
	for(int i=1;i<=data;++i){
        cout<<"__________________________________________________"<<endl;
		cout<<"Masukan nama pemain "<<i<<": ";cin>>k[i].nama;
		cout<<"Masukan attack pemain "<<i<<": ";cin>>k[i].att;
        cout<<"__________________________________________________"<<endl;

		}
	for(int i=1;i<=data;i++)
	{
		cout<<"\nNama pemain "<<i<<": "<<k[i].nama;
		cout<<"\nAttack pemain "<<i<<": "<<k[i].att;
	}system("CLS");
	for(int i=1;i<=data;i++)
	{
		for(b=1;b<=(data-1);++b)
		{
		if(k[b].att > k[b+1].att)
		{
		temp.att=k[b].att;
		k[b].att=k[b+1].att;
		k[b+1].att=temp.att;

		strcpy(temp.nama,k[b].nama);
		strcpy(k[b].nama,k[b+1].nama);
		strcpy(k
         [b+1].nama,temp.nama);
		}
		}
	}
	cout<<endl;
	cout<<"\n DATA SETELAH DI SORTING DARI BASSIC ATTACK TERENDAH";
	cout<<"\n|__________________________________________________|";
	for(int i=1;i<=data;++i)
	{
		cout<<"\nNama pemain "<<i<<": "<<k[i].nama;
		cout<<"\nAttack pemain "<<i<<": "<<k[i].att;

	}
	cout<<"\nMasukan Nama Pemain yang di cari: ";
	cin>>cari;
	ketemu=0;
	for(int i=1;i<=data;i++)

	if(k[i].nama==cari)
	{
	ketemu=1;
	cout<<"__________________________________________________";
	cout<<"\n       Nama pemain  di temukan pada indeks : "<<i;
	cout<<"\n|_________________________________________________|";
	}
	if(ketemu=0)
    {
        cout<<"__________________________________________________";
		cout<<"nama tak di temukan!!";
		cout<<"\n|_________________________________________________|";
    }cout<<endl;
    cout<<"\n__________________________________________________";
    cout<<"\nPROGRAM EDITING PEMAIN";
    cout<<"\n__________________________________________________";
    cout<<"\nMasukan Nama pemain Yang Ingin Di Edit: ";
    cin>>ganti;
    cout<<"\nMasukan Bassic Attack Baru:";
    cin>>baru;
    a=ganti;
    k[a].att=baru;
    cout<<"\n__________________________________________________";
    cout<<"\nData pemain Setelah Attack Di Edit: ";
	for(int c=1;c<=data;c++)
	{
	cout<<"\nNama Pemain "<<c<<": "<<k[c].nama;
	cout<<"\nBassic Attack pemain "<<c<<": "<<k[c].att;
	}
	cout<<endl;
	cout<<"\n__________________________________________________";
	cout<<"\nDellet pemain";
	cout<<"\n__________________________________________________";
	cout<<"\nMasukan Index pemain Yang Ingin Di Delete:";
	cin>>ban;
	x=ban;
	cout<<"\npemain yang DiDelete:"<<k[x].nama<<" Pada Index "<<x;
	cout<<"\npemain Tersisa:";
	for(x=ban;x<=data;x++)
	{
	k[x].att= k[x+1].att;
	}
	for(z=1;z<=data;z++)
	{
	cout<<"\nNama pemain "<<z<<":"<<k[z].nama;
	cout<<"\nAttack pemain "<<z<<":"<<k[z].att;
	}
	cout<<"\nMasukan Index pemain Yang Ingin Di Delete:";
	cin>>ban;
	for(x=ban;x<=data;x++)
	{if(ban==k[x].att)
	{
		for(int z=x;z<data;z++)
		{
			k[z].att=k[z+1].att;
			data-=1;
		}
	}
	}

 cout<<"\nData Baru";
 for(int y=1;y<=data;y++)
 {
 	cout<<"\nNama pemain "<<y<<":"<<k[y].nama;
	cout<<"\nAttack pemain "<<y<<":"<<k[y].att;
 }}


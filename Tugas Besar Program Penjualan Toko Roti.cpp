#include <iostream>
using namespace std;

#define diskon 0.10
const float harga1=12000, harga2=13000, harga3=15000, harga4=200000;

int main(){
    int kode, jumlah;
    string namaroti;
    float harga, totalharga, totaldiskon, totalbayar;
    char pesanlagi;
    char pembeli[30];
do{
        	cout<<"\t\t\t----------Divario Bakery-----------\n\n";

    cout<<"Daftar Menu Roti: "<<endl;
    cout<<endl;
    cout<<"\t1.Roti isi Pisang Coklat"<<endl;
    cout<<"\t2.Roti isi Coklat"<<endl;
    cout<<"\t3.Roti Sobek"<<endl;
    cout<<"\t4.Kue Sus"<<endl;
    cout<<endl;

    cout<<"Nama Pembeli     :";
    cin>>pembeli;
    cout<<"Kode              :";
    cin>>kode;
    cout<<"Jumlah           :";
    cin>>jumlah;

    switch(kode){
    case 1:
        namaroti="Roti isi Pisang Coklat";
        harga=harga1;
        break;
    case 2:
        namaroti="Roti isi Coklat";
        harga=harga2;
        break;
    case 3:
        namaroti="Roti Sobek";
        harga=harga3;
        break;
    case 4:
        namaroti="Kue Sus";
        harga=harga4;
        break;

    }

    totalharga=0;
    for(int i=i; i<=jumlah; i++){
        totalharga+= harga;
    }

    if(jumlah>10){
        totaldiskon=totalharga* diskon;
        totalbayar=totalharga-totaldiskon;
    }else{
        totaldiskon=0;
        totalbayar=totalharga;

    }

    cout<<"===================================="<<endl;
    cout<<"Nota Pembayaran"<<endl;
    cout<<"Nama Pembeli         ="<<pembeli<<endl;
    cout<<"Kode                 ="<<kode<<endl;
    cout<<"Harga Roti           ="<<harga<<endl;
    cout<<"Jumlah               ="<<jumlah<<endl;
    cout<<"===================================="<<endl;
    cout<<"Diskon               ="<<totaldiskon<<endl;
    cout<<"Total Bayar          ="<<totalbayar<<endl;

    cout<<"Transaksi lagi? [Y/T]:  "<<endl;
    cin>>pesanlagi;
}while(pesanlagi=='y'|| pesanlagi=='Y');

return 0;

}


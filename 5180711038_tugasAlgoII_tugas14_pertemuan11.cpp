#include <iostream>
#include <windows.h>

using namespace::std;

struct data{
int harga,jumlah;
string namabarang;
};

string pilihan,namapelanggan;
string noidentitas;
int macam,d,total,totalsemua,diskon,t;
data pilih[100];
data temp;

void inputpilihan(){
totalsemua=0;
    cout<<"===========================";
    cout<<"\n====== GIANT MARKET =======";
    cout<<"\n===========================";
    cout<<endl;
    cout<<"Masukan pilihan member atau non member :";cin>>pilihan;
    if (pilihan=="member"){
        cout<<"\n=========SELAMAT ANDA MENDAPATKAN DISKON SEBESAR 5%=========";
        cout<<"\nMasukan Nomor Identitas Saja :";cin>>noidentitas;
        string nama[5]= {"Bayu", "Irvan", "Susiati","Diana","Roni"};
        if (noidentitas=="A001"){
        cout<<"Namanya adalah :"<<nama[0];}
        else if (noidentitas=="A002"){
        cout<<"Namanya adalah :"<<nama[1];}
        else if (noidentitas=="A003"){
        cout<<"Namanya adalah :"<<nama[2];}
        else if (noidentitas=="A004"){
        cout<<"Namanya adalah :"<<nama[3];}
        else if (noidentitas=="A005"){
        cout<<"Namanya adalah :"<<nama[4];}
        cout<<"\nMasukan Berapa macam   :";cin>>macam;
    for(int i=0;i<macam;i++){
                d=d+1;
        cout<<"\nmacam yang ke-"<<d<<endl;
        cout<<"Nama Barang  :";cin>>pilih[i].namabarang;
        cout<<"harga Barang  :";cin>>pilih[i].harga;
        cout<<"jumlah Barang :";cin>>pilih[i].jumlah;
        total=pilih[i].harga*pilih[i].jumlah;
        cout<<"Total per macam:";cout<<total;
        totalsemua=totalsemua+total;
             diskon=totalsemua*0.05;
             t=totalsemua-diskon;
             }
             cout<<"\nTotal sebelum diskon 5% :";cout<<totalsemua;
             cout<<"\nTotal setelah diskon 5% :";cout<<t;
             cout<<endl;
    }
    else if (pilihan=="non"){
        cout<<"\n=========TIDAK ADA DISKON=========";
        cout<<"\nMasukan Nama Pelanggan :";cin>>namapelanggan;
        cout<<"Masukan Berapa macam   :";cin>>macam;
        d=0;
        for(int i=0;i<macam;i++){
                 d=d+1;
        cout<<"\nmacam yang ke-"<<d<<endl;
        cout<<"Nama Barang  :";cin>>pilih[i].namabarang;
        cout<<"Harga Barang  :";cin>>pilih[i].harga;
        cout<<"jumlah Barang :";cin>>pilih[i].jumlah;
        total=pilih[i].harga*pilih[i].jumlah;
        cout<<"Total per macam:";cout<<total;
        cout<<endl;
             }

}

}
void searching(){
      string harga;
    char nama[20];
    string namabarang;
    int jml,indeks;
    bool status = false;
    cout<<endl;
    cout<<"\n============SEARCH============="<<endl;
    cout<<" jumlah macamnya :";cout<<macam;
    cout<<endl;

cout<<"======================================="<<endl;
cout<<"\nmasukan nama :";cin>>namabarang;
cout<<"======================================="<<endl;
     for(int i=1;i<macam;i++){
     if(namabarang == pilih[i].namabarang ){
     status = true;
     indeks = i;

    }
}
    system("CLS");
    if(status)
    cout<<"nama yang ditemukan di indeks ke "<<indeks;
    else
    cout<<"nama tidak ditemukan";




}
void sorting (){
 int u,l,i,b,c;
    for (i=0;i<macam;i++)
{
    cout<<"======================================="<<endl;
    cout<<"data Ke"<<i+1<<"::"<<endl;

    cout<<"Harga            = ";cout<<pilih[i].harga;  cout<<endl;
}
    cout<<"======================================="<<endl;
    for (i=0;i<macam;i++){
    for(c=0;c<macam-1;c++){
        if(pilih[c].harga>pilih[c+1].harga)
        {
            temp.harga=pilih[c].harga;
            pilih[c].harga=pilih[c+1].harga;
            pilih[c+1].harga=temp.harga;

    }
}
}
    cout<<"SETELAH DATA DI SHORTING =";
    for (c=0;c<macam;c++)
{
    cout<<"============================="<<endl;

    cout<<"Harga             = ";cout<<pilih[c].harga;  cout<<endl;

}
    cout<<"============================="<<endl;



}

main(){
    int pilih;
    char w;
     do{
  cout<<"\n=======SILAHKAN PILIH SALAH SATU=======";
  cout<<"\n1. PROGRAM KASIR";
  cout<<"\n2. SEARCH DATA KASIR";
  cout<<"\n3. SORTING DATA KASIR";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1){inputpilihan();}
  else if(pilih==2){searching();}
  else if(pilih==3){sorting();}
cout<<endl;
  cout<<"\nMAU PILIH LAGI ? :";cin>>w;
}
while(w=='y' || w=='Y');
}

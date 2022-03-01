#include <iostream>
#include <iomanip>
using namespace std;
int i = 0, search;
int nim[10]= {};
string nama[10]= {}, alamat[10]= {};
char gol[10]= {}; 
bool found;
void tambmh()
{
    
system("CLS");
cout<<"Masukkan data mahasiswa"<<endl;
cout<<"NIM\t:";
cin>>nim[i];
cin.ignore();
cout<<"Nama\t:";
getline(cin,nama[i]);
cout<<"Alamat \t:";
getline(cin,alamat[i]);
cout<<"Golongan:";
cin>>gol[i];
i++;
}

void listmh()
{
system("CLS");
cout<<"==============================================================================================================="<<endl;
cout<<setiosflags(ios::left)<<"No   "<<"|"<<setw(20)<<"Nim"<<"|"<<setw(20)<<"Nama"<<"|"<<setw(20)<<"Alamat"<<"|"<<setw(20)<<"Golongan"<<endl;
cout<<"==============================================================================================================="<<endl;
			
for(int nomor=0;nomor<i;nomor++){
cout<<setiosflags(ios::left)<<setw(5)<<nomor+1<<"|"<<setw(20)<<nim[nomor]<<"|"<<setw(20)<<nama[nomor]<<"|"<<setw(20)<<alamat[nomor]<<"|"<<setw(20)<<gol[nomor]<<endl;
cout<<"==============================================================================================================="<<endl;
}
system("PAUSE");}

void searchmh()
{
system("CLS");
int j = 0;
cout<<"NIM yang ingin dicari :";
cin>>search;
do {
    
found=false;
if(nim[j] == search)
{
cout<<nim[j]<<"\t"<<nama[j]<<"\t"<<alamat[j]<<"\t"<<gol[j]<<endl;
j++;
}
else 
{j++;}

}while((!found) & (j<=i));
if(j>i)
{cout<<"data tidak ditemukan"<<endl;}
system("PAUSE");
}

void updatemh()
{
    system("CLS");
int j = 0;
int option;
cout<<"NIM yang ingin diupdate :";
cin>>search;
do {
    
found=false;
if(nim[j] == search)
{ system("CLS");
cout<<"Data apa yang ingin anda ganti?"<<endl;
cout<<"1. NIM"<<endl;
cout<<"2. Nama"<<endl;
cout<<"3. Alamat"<<endl;
cout<<"4. Golongan"<<endl;
cout<<"Pilih Nomor";
cin>>option;
    
    switch (option)
    {case 1:
    {
        system("CLS");
        cout<<"NIM Ingin diubah menjadi :";
        cin>>nim[j];
        cout<<nim[j]<<"\t"<<nama[j]<<"\t"<<alamat[j]<<"\t"<<gol[j]<<endl;
        break;
    }
    case 2:
    {
        system("CLS");
        cin.ignore();
        cout<<"Nama Ingin diubah menjadi :";
        getline(cin,nama[j]);
        cout<<nim[j]<<"\t"<<nama[j]<<"\t"<<alamat[j]<<"\t"<<gol[j]<<endl;
        break;
    }
    case 3:
    {
        system("CLS");
        cin.ignore();
        cout<<"Alamat Ingin diubah menjadi :";
        getline(cin,alamat[j]);
        cout<<nim[j]<<"\t"<<nama[j]<<"\t"<<alamat[j]<<"\t"<<gol[j]<<endl;
        break;
    }
    case 4:
    {
        system("CLS");
        cout<<"Golongan Ingin diubah menjadi :";
        cin>>nama[j];
        cout<<nim[j]<<"\t"<<nama[j]<<"\t"<<alamat[j]<<"\t"<<gol[j]<<endl;
    }
    default:
    {
        cout<<"Salah nomor mohon masukkan nomor yang benar";
        system("PAUSE");
        break;
    }}
j++;
}
else 
{j++;}

}while((!found) & (j<=i));
if(j>i)
{cout<<"data tidak ditemukan"<<endl;}
system("PAUSE");
}

int main(){
int no;
bool quit=true;
do {
system("CLS");
    cout<<"MENU"<<endl;
    cout<<"1. Menambahkan data Mahasiswa"<<endl;
    cout<<"2. List data Mahasiswa"<<endl;
    cout<<"3. Mencari data Mahasiswa"<<endl;
    cout<<"4. Update data Mahasiswa"<<endl;
    cout<<"6. Keluar"<<endl;
    cout<<"Pilih Nomor :";
    cin>>no;

    switch (no)
        {
        case 1: tambmh();break;
        case 2: listmh();break;
        case 3: searchmh();break;
        case 4: updatemh();break;
        case 6: quit = false; break;
        default: 
        cout<<"Salah nomor mohon masukkan nomor yang benar";
        system("PAUSE");
        break;}
} while(quit);
    
}

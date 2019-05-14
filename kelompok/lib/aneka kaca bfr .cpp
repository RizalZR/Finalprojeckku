#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int main(){
 int a,b,c,d,e,f,g,i,pilih,jawab,h,tambah;
 char ch;
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }
if (user == "fernando" && pass == "12345") {
           cout << "\n\n >>>>> login succses <<<<< \n" << endl;
           system ("CLS");

           } else {
         cout << "\n\nMaaf Username atau Password anda salah.\n\n";
         break;
      }
  cout << "  WELCOME TO ANEKA KACA    " << endl;
cout<<"================================="<<endl;
 cout << "MASUKAN UKURAN LEBAR KACA (CM)    : ";
 cin >> a ;
 cout << "MASUKAN UKURAN PANJANG KACA (CM)  : ";
 cin >> b ;
 cout<<"  MASUKAN JUMLAH KACA               : ";
 cin>>   f;
cout<<"=========================="<<endl;
system ("CLS");
cout << "=====================================" <<endl;
cout << "Pilihlah operasi yang akan dipilih (Centimeter/Kaca): " << endl;
cout << "=====================================" <<endl;
cout << "1. KACA POLOS 3mm          Rp.130.000" << endl;
cout << "2. KACA POLOS 5mm          Rp.150.000" << endl;
cout << "3. KACA POLOS 6mm          Rp.250.000" << endl;
cout << "4. KACA POLOS 8mm          Rp.450.000"<< endl;
cout << "5. KACA POLOS 10mm         Rp.550.000" << endl;
cout << "6. KACA POLOS 12mm         Rp.650.000" << endl;
cout << "7. KACA RIBEN 3mm          Rp.150.000" << endl;
cout << "8. KACA RIBEN 5mm          Rp.170.000" << endl;
cout << "9. KACA RIBEN 8mm          Rp.550.000" << endl;
cout << "10. KACA ES 3mm            Rp.200.000" << endl;
cout << "11. KACA ES 5mm            Rp.250.000" << endl;
cout << "12. BVL 5mm                Rp.5000.000" << endl;
cout << "13. BVL 6mm                Rp.6000.000" << endl;
cout << "14. BVL 8,10,12mm          Rp.8000.000" << endl;
cout << "15. GM 6,5mm               Rp.4000.000" << endl;
cout << "16. GM 8,10,12mm           Rp.5000.000" << endl;
cout << "17. ONE WAY 5mm            Rp.550.000" << endl;
cout << "18. ONE WAY SILVER 5mm     Rp.500.000" << endl;
cout << "19. CERMIN 3mm             Rp.300.000" << endl;
cout << "20. CERMIN 5mm             Rp.350.000" << endl;

cout<<"=========================="<<endl;
 cout << "Masukkan pilihan = ";
 cin >> pilih ;
cout<<"=========================="<<endl;

 if ( pilih == 1 )
 {
      d=a*b*13;

      }
 if ( pilih == 2)
 {
      d=a*b*15;

      }
if ( pilih == 3)
 {
      d=a*b*25;

      }
if ( pilih == 4)
 {
      d=a*b*45;

      }if ( pilih == 5)
 {
      d=a*b*55;

      }if ( pilih == 6)
 {
      d=a*b*65;

      }if ( pilih == 7)
 {
      d=a*b*15;

      }if ( pilih == 8)
 {
      d=a*b*17;
      ;
      }if ( pilih == 9)
 {
      d=a*b*55;

      }if ( pilih == 10)
 {
      d=a*b*20;

      }if ( pilih == 11)
 {
      d=a*b*25;

      }if ( pilih == 12)
 {
      d=(a+a+b+b)*500;

      }if ( pilih == 13)
 {
      d=(a+a+b+b)*600;

      }if ( pilih == 14)
 {
      d=(a+a+b+b)*800;

      }if ( pilih == 15)
 {
      d=(a+a+b+b)*400;

      }if ( pilih == 16)
 {
      d=(a+a+b+b)*500;

      }if ( pilih == 17)
 {
      d=a*b*55;
      ;
      }if ( pilih == 18)
 {
      d=a*b*50;

      }if ( pilih == 19)
 {
      d=a*b*30;

      }if ( pilih == 20)
 {
      d=a*b*35;

      }
      else {
         cout << "\n\nMaaf kode anda salah";
      }
system ("CLS");
cout<<"============================="<<endl;
cout<<"*silahkan pilih opsi tambahan (Centimeter/Kaca)*"<<endl;
cout<<"============================="<<endl;
cout << "21. BVL 5mm            Rp.5000.000" << endl;
cout << "22. BVL 6mm            Rp.6000.000" << endl;
cout << "23. BVL 8,10,12mm      Rp.8000.000" << endl;
cout << "24. GM 6,5mm           Rp.4000.000" << endl;
cout << "25. GM 8,10,12mm       Rp.5000.000" << endl;
cout<<"============================="<<endl;
cout << "Masukkan pilihan = ";
cin >> tambah ;
cout<<"============================="<<endl;
 if ( tambah == 21)
 {
      h=(a+a+b+b)*500;

      }if ( tambah == 22)
 {
      h=(a+a+b+b)*600;

      }if ( tambah == 23)
 {
      h=(a+a+b+b)*800;

      }if ( tambah == 24)
 {
      h=(a+a+b+b)*400;

      }if ( tambah == 25)
 {
      h=(a+a+b+b)*500;


    }

    else {
         cout << "\n\nMaaf kode anda salah";
      }
system ("CLS");

 cout << "         ANEKA KACA          " << endl;
cout<<"==============================================="<<endl;

cout <<"   kode barang          =    "<<pilih<<endl;
cout <<"   lebar kaca (CM)      =    "<<a<<endl;
cout <<"   panjang kaca (CM)    =    "<<b<<endl;
cout <<"   biaya tambahan       = Rp "<<h<<endl;
cout <<"=============================================="<<endl;
cout <<"   TOTAL HARGA KACA = Rp " <<(d*f)+h<< endl;

cout <<"=============================================="<<endl;

cout <<"terima kasih telah berbelanja di toko kami :) "<<endl;

cout<<"==============================================="<<endl;
    }

}

#include "Bus-Trans.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define MAX 20
using namespace std;

//=============================================================================//
///================================= QUEUE ===================================///
//=============================================================================//

int isEmpty()//mengecek apakah anttrian kosong antrian
{
    if (antrian1_eks.tail==-1||antrian1_eko.tail==-1|| antrian2_eks.tail==-1
        ||antrian2_eko.tail==-1||antrian3_eks.tail==-1||antrian3_eko.tail==-1)
        return 1;
    else
        return 0;
}
int isFull()//mengecek apakah antrian penuh
{
    if (antrian1_eks.tail==MAX-1||antrian1_eko.tail==MAX-1||antrian2_eks.tail==MAX-1
        ||antrian2_eko.tail==MAX-1||antrian3_eks.tail==MAX-1||antrian3_eko.tail==MAX-1)
        return 1;
    else
        return 0;
}

//Buat queue
void create()//membuat antrian kosong
{
    antrian1_eks.head=antrian1_eks.tail==-1;
    antrian1_eko.head=antrian1_eko.tail==-1;
    antrian2_eks.head=antrian2_eks.tail==-1;
    antrian2_eko.head=antrian2_eko.tail==-1;
    antrian3_eks.head=antrian3_eks.tail==-1;
    antrian3_eko.head=antrian3_eko.tail==-1;

}

//Enqueue untuk nama bus 1 tipe eksekutif
void enqueue1_eks(string nama_eks1)
{
    if (isEmpty()==1){
        antrian1_eks.head=antrian1_eks.tail= -1;
        antrian1_eks.nama_eks1[antrian1_eks.tail]=nama_eks1;
        for (int i=antrian1_eks.head; i <=antrian1_eks.tail; i++){
            cout << " " << antrian1_eks.nama_eks1[i]<<endl;
        }
    }
    else if(isFull()==0){
        antrian1_eks.tail++;
        antrian1_eks.nama_eks1[antrian1_eks.tail]=nama_eks1;
    }
    else {
        cout << " MAAF BUS KAMI TELAH PENUH!"<<endl;
    }
}
//Enqueue untuk nama bus 1 tipe ekonomi
void enqueue1_eko(string nama_eko1)
{
    if (isEmpty()==1){
        antrian1_eko.head=antrian1_eko.tail= -1;
        antrian1_eko.nama_eko1[antrian1_eko.tail]=nama_eko1;
        for (int i=antrian1_eko.head; i <=antrian1_eko.tail; i++){
            cout << " " << antrian1_eko.nama_eko1[i]<<endl;
        }
    }
    else if(isFull()==0){
        antrian1_eko.tail++;
        antrian1_eko.nama_eko1[antrian1_eko.tail]=nama_eko1;
    }
    else {
        cout << " MAAF BUS KAMI TELAH PENUH!"<<endl;
    }
}
//Enqueue untuk nama bus 2 tipe EKSEKUTIF
void enqueue2_eks(string nama_eks2)
{
    if (isEmpty()==1){
        antrian2_eks.head=antrian2_eks.tail= -1;
        antrian2_eks.nama_eks2[antrian2_eks.tail]=nama_eks2;
        for (int i=antrian2_eks.head; i <=antrian2_eks.tail; i++){
            cout << " " << antrian2_eks.nama_eks2[i]<<endl;
        }
    }
    else if(isFull()==0){
        antrian2_eks.tail++;
        antrian2_eks.nama_eks2[antrian2_eks.tail]=nama_eks2;
    }
    else {
        cout << " MAAF BUS KAMI TELAH PENUH!"<<endl;
    }
}
//Enqueue untuk nama bus 2 tipe ekonomi
void enqueue2_eko(string nama_eko2)
{
    if (isEmpty()==1){
        antrian2_eko.head=antrian2_eko.tail= -1;
        antrian2_eko.nama_eko2[antrian2_eko.tail]=nama_eko2;
        for (int i=antrian2_eko.head; i <=antrian2_eko.tail; i++){
            cout << " " << antrian2_eko.nama_eko2[i]<<endl;
        }
    }
    else if(isFull()==0){
        antrian2_eko.tail++;
        antrian2_eko.nama_eko2[antrian2_eko.tail]=nama_eko2;
    }
    else {
        cout << " MAAF BUS KAMI TELAH PENUH!"<<endl;
    }
}
//Enqueue untuk nama bus 3 tipe EKSEKUTIF
void enqueue3_eks(string nama_eks3)
{
    if (isEmpty()==1){
        antrian3_eks.head=antrian3_eks.tail= -1;
        antrian3_eks.nama_eks3[antrian3_eks.tail]=nama_eks3;
        for (int i=antrian3_eks.head; i <=antrian3_eks.tail; i++){
            cout << " " << antrian3_eks.nama_eks3[i]<<endl;
        }
    }
    else if(isFull()==0){
        antrian3_eks.tail++;
        antrian3_eks.nama_eks3[antrian3_eks.tail]=nama_eks3;
    }
    else {
        cout << " MAAF BUS KAMI TELAH PENUH!"<<endl;
    }
}
//Enqueue untuk nama bus 3 tipe ekonomi
void enqueue3_eko(string nama_eko3)
{
    if (isEmpty()==1){
        antrian3_eko.head=antrian3_eko.tail= -1;
        antrian3_eko.nama_eko3[antrian3_eko.tail]=nama_eko3;
        for (int i=antrian3_eko.head; i <=antrian3_eko.tail; i++){
            cout << " " << antrian3_eko.nama_eko3[i]<<endl;
        }
    }
    else if(isFull()==0){
        antrian3_eko.tail++;
        antrian3_eko.nama_eko3[antrian3_eko.tail]=nama_eko3;
    }
    else {
        cout << " MAAF BUS KAMI TELAH PENUH!"<<endl;
    }
}

//=============================================================================//
///==================== SINGLE LINKED-LIST NON CIRCULAR ======================///
//=============================================================================//

string tipe;
//Buat Node Baru
void buatNode(string tipe)
{
    baru = new node;
    baru->tipe = tipe;
    baru->next = NULL;
}

void insertDepan(string tipe)
{
    buatNode(tipe);

    if(isEmpty()==1){
        head = tail = baru;
        tail -> next = NULL;
    }else{
        baru -> next = head;
        head = baru;
    }
    cout << "  ANDA MEMILIH TIPE BUS -> " ;
    if (tipe=="1"){
        tipe="eksekutif";
        cout << tipe <<endl;
    }
    else if (tipe=="2"){
        tipe="EKONOMI";
        cout << tipe <<endl;
    }

}

void tampil()
{
    node *bantu;
    bantu = head;
    if (bantu->tipe == "1"){
        bantu->tipe="eksekutif";
    }
    else if (bantu->tipe=="2"){
        bantu->tipe="EKONOMI";
    }
    if (isEmpty() == 0){
            cout << ends << ends << bantu -> tipe << ends << endl;
    }else{

        cout << " Antrian bus tipe ini sedang kosong" << endl;
    }
}

int pilih, pilmen;
string pilihan;

long tarif[4] = {20000, 40000, 60000, 80000};
string halte1[5] = {"Terminal Pasar Pon", "SMK Wirotomo", "Simpang Banaran", "RS Hermina", "Terminal Karanglewas"};
string halte2[5] = {"Halte Terminal Notog","Halte SMK Aryasatya A","TPB Desa Patikraja B", "TPB SMAN 1 Patikraja A", "TPB MTs Ma'arif 1 A"};
string halte3a[3] = {"Terminal Bulupitu","Halte RS Dadi Keluarga", "Halte Universitas NU"};
string halte3b[3]={"Terminal Bulupitu", "Simpang Pancurawis (A)", "IT Telkom"};
string kode1[5] = {"AA1", "AA2", "AA3", "AA4", "AA5"};
string waktu[15]= {"05.00","07.00", "07.30", "08.00", "08.30", "09.00", "09.30", "10.00", "10.30", "11.00", "12.30", "15.30", "16.00","16.30","17.00"};
long *p_tarif=tarif;
string *p_halte1=halte1;
string *p_halte2=halte2;
string *p_halte3a=halte3a;
string *p_halte3b=halte3b;
string *pointer=waktu;

string nama, tujuan, tujuan2, start, start2;
long cost;
char konfir, kembali;


void menu1(){
    //koridor 1
        string nama, tujuan, tujuan2, start, start2, pilihan,tipe;
        long cost;
        char konfir, kembali;
        system("cls");
        cout << "  #KORIDOR PERTAMA                                 " <<endl;
        cout <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << " |            *PEMBELIAN TIKET BUS TRANS-BANYUMAS*                 |" <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << endl;
        cout << "  TIPE BUS :\n   1. EKSEKUTIF\n   2. EKONOMI\n" << endl;
        cin.ignore();
        cout << "  PILIH TIPE BUS [EKSEKUTIF/EKONOMI]        : ";
        getline(cin, tipe);
        insertDepan(tipe);
        if (tipe=="1"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue1_eks(nama);
        }
        else if (tipe=="2"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue1_eko(nama);
        }
        cout << endl;
        cout << "  PILIH LOKASI KEBERANGKATAN & TUJUAN ANDA :       " <<endl;
        cout << "  -------------------------------------------------" <<endl;
        cout << "  | No.|    CODE    | NAMA LOKASI                 |" <<endl;
        cout << "  -------------------------------------------------" <<endl;
        for(int i=0; i<5;i++){
        cout << "  |  "<< i+1 << " |     " << kode1[i] << "    | "<<left<<setw(26)<< halte1[i] << "  |  " << endl;
        cout << "  -------------------------------------------------" <<endl;
    }
        cout << "  Masukan Pilihan Keberangkatan(CODE)      :  "; cin >> start;
        cout << "  Masukan Pilihan Tujuan (CODE)            :  "; cin >> tujuan;
        cout << endl;
        if (start=="AA1"||start=="aa1"){
                start2=p_halte1[0];
                if(tujuan=="AA2"||tujuan=="aa2"){
                cout <<endl<< "  TERMINAL PASAR PON - SMK WIROTOMO " <<endl;
                tujuan2=p_halte1[1];
                    if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                    }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"||tujuan=="aa3"){
                cout << "  TERMINAL PASAR PON - SIMPANG BANARAN " <<endl;
                tujuan2=p_halte1[2];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  TERMINAL PASAR PON - RS. HERMINA " <<endl;
                tujuan2=p_halte1[3];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"|| tujuan=="aa5"){
                cout << "  TERMINAL PASAR PON - TERMINAL KARANGLEWAS " <<endl;
                tujuan2=p_halte1[4];
                if(tipe=="1"){
                       cost=p_tarif[3]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[3];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            else if(start=="AA2"||start=="aa2"){
                start2=p_halte1[1];
                if(tujuan=="AA1"|| tujuan=="aa1"){
                cout << "  SMK WIROTOMO - TERMINAL PASAR PON " <<endl;
                tujuan2=p_halte1[0];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"|| tujuan=="aa3"){
                cout << "  SMK WIROTOMO - SIMPANG BANARAN " <<endl;
                tujuan2=p_halte1[2];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  SMK WIROTOMO - RS. HERMINA " <<endl;
                tujuan2=p_halte1[3];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"|| tujuan=="aa5"){
                cout << "  SMK WIROTOMO - TERMINAL KARANGLEWAS " <<endl;
                tujuan2=p_halte1[4];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            else if(start=="AA3"|| start=="aa3"){
                start2=p_halte1[2];
                if(tujuan=="AA1"|| tujuan=="aa1"){
                cout << "  SIMPANG BANARAN - TERMINAL PASAR PON " <<endl;
                tujuan2=p_halte1[0];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA2"|| tujuan=="aa2"){
                cout << "  SIMPANG BANARAN - SMK WIROTOMO " <<endl;
                tujuan2=p_halte1[1];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  SIMPANG BANARAN - RS. HERMINA " <<endl;
                tujuan2=p_halte1[3];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"|| tujuan=="aa5"){
                cout << "  SIMPANG BANARAN - TERMINAL KARANGLEWAS " <<endl;
                tujuan2=halte1[4];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            else if(start=="AA4"||start=="aa4"){
                start2=p_halte1[3];
                if(tujuan=="AA1"||tujuan=="aa1"){
                cout << "  RS. HERMINA - TERMINAL PASAR PON " <<endl;
                tujuan2=p_halte1[0];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA2"||tujuan=="aa2"){
                cout << "  RS. HERMINA - SMK WIROTOMO " <<endl;
                tujuan2=p_halte1[1];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"||tujuan=="aa3"){
                cout << "  RS. HERMINA - SIMPANG BANARAN " <<endl;
                tujuan2=p_halte1[2];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"||tujuan=="aa5"){
                cout << "  RS. HERMINA - TERMINAL KARANGLEWAS " <<endl;
                tujuan2=p_halte1[4];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                 cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
             else if(start=="AA5"||start=="aa5"){
                start2=p_halte1[4];
                if(tujuan=="AA1"|| tujuan=="aa1"){
                cout << "  TERMINAL KARANGLEWAS - TERMINAL PASAR PON " <<endl;
                tujuan2=p_halte1[0];
                if(tipe=="1"){
                       cost=p_tarif[3]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[3];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA2"|| tujuan=="aa2"){
                cout << "  TERMINAL KARANGLEWAS - SMK WIROTOMO " <<endl;
                tujuan2=p_halte1[1];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"|| tujuan=="aa3"){
                cout << "  TERMINAL KARANGLEWAS - SIMPANG BANARAN " <<endl;
                tujuan2=p_halte1[2];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  TERMINAL KARANGLEWAS - RS. HERMINA " <<endl;
                tujuan2=p_halte1[3];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
        cout << endl;
        cout << "  Pilih Waktu Keberangkatan           :  " <<endl;
        cout << "   1.  [05.00] WIB              " <<endl;
        cout << "   2.  [07.00] WIB              " <<endl;
        cout << "   3.  [09.00] WIB              " <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << "  Masukan Pilihan [1 - 3]:  "; cin >> pilih;
        if(pilih==1){
            pilihan=pointer[0];
        }
        else if(pilih==2){
            pilihan=pointer[1];
        }
        else if (pilih==3){
            pilihan=pointer[5];
        }
        cout << endl;
        cout << "  KONFIRMASI PEMBELIAN TIKET(Y/N)          : "; cin >> konfir;
        cout << endl<<endl;

        system("cls");
        if (konfir=='Y'||konfir=='y'){
            if(tipe=="1"){
            cout << endl << "  SELAMAT PEMBELIAN TIKET BERHASIL!" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
                    cout << "  Tipe Bus      : " ; tampil();
                    cout << "  Atas Nama     : " << antrian1_eks.nama_eks1[antrian1_eks.tail] << endl;
                    cout << "  Nomor Kursi   : " << antrian1_eks.tail << " /20" << endl;
                    cout << "  Keberangkatan : " << start2 << endl;
                    cout << "  Tujuan        : " << tujuan2 << endl ;
                    cout << "  Waktu         : " << pilihan << " WIB" << endl;
                    cout << "  Tarif         : Rp." << cost << ",00" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
            cout << "  SILAHKAN SIMPAN BUKTI INI UNTUK DITUNJUKAN SAAT MENAIKI BIS KAMI! " <<endl;
            cout << "         UTAMAKAN KESELAMATAN ANDA, HATI-HATI DIJALAN               " << endl;
            cout << " -------------------------------------------------------------------" << endl;
            }
            else if (tipe=="2"){
                cout << endl << "  SELAMAT PEMBELIAN TIKET BERHASIL!" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
                    cout << "  Tipe Bus      : " ; tampil();
                    cout << "  Atas Nama     : " << antrian1_eko.nama_eko1[antrian1_eko.tail] << endl;
                    cout << "  Nomor Kursi   : " << antrian1_eko.tail << " /20" << endl;
                    cout << "  Keberangkatan : " << start2 << endl;
                    cout << "  Tujuan        : " << tujuan2 << endl ;
                    cout << "  Waktu         : " << pilihan << " WIB" << endl;
                    cout << "  Tarif         : Rp." << cost << ",00" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
            cout << "  SILAHKAN SIMPAN BUKTI INI UNTUK DITUNJUKAN SAAT MENAIKI BIS KAMI! " <<endl;
            cout << "         UTAMAKAN KESELAMATAN ANDA, HATI-HATI DIJALAN" << endl;
            cout << " -------------------------------------------------------------------" << endl;
            }
        }
        else if(konfir=='N'||konfir=='n'){
                cout << "  PEMBELIAN DIBATALKAN!" <<endl;
                cout << "  Terima kasih telah mengunjungi kami!" <<endl;
            }
}

void menu2()
{
        string nama2, tujuan, tujuan2, start, start2, tipe;
        long cost;
        char konfir, kembali;
        system("cls");
        menu2:
        cout << "  #KORIDOR KEDUA                                " <<endl;
        cout <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << " |             *PEMBELIAN TIKET BUS TRANS-BANYUMAS*                |" <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << endl;
        cout << "  TIPE BUS :\n   1. EKSEKUTIF\n   2. EKONOMI\n" << endl;
        cin.ignore();
        cout << "  PILIH TIPE BUS [EKSEKUTIF/EKONOMI]        : ";
        getline(cin, tipe);
        insertDepan(tipe);
         if (tipe=="1"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue2_eks(nama);
        }
        else if (tipe=="2"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue2_eko(nama);
        }
        cout << "  PILIH LOKASI KEBERANGKATAN & TUJUAN ANDA :       " <<endl;
        cout << "  -------------------------------------------------" <<endl;
        cout << "  | No.|    CODE    | NAMA LOKASI                 |" <<endl;
        cout << "  -------------------------------------------------" <<endl;
        for(int i=0; i<5;i++){
        cout << "  |  "<< i+1 << " |     " << kode1[i] << "    | "<<left<<setw(26)<< halte2[i] << "  |  " << endl;
        cout << "  -------------------------------------------------" <<endl;}
        cout << "  Masukan Pilihan Keberangkatan(CODE) :  "; cin >> start;
        cout << "  Masukan Pilihan Tujuan (CODE)       :  "; cin >> tujuan;
        cout << endl;
         if (start=="AA1"|| start=="aa1"){
                start2=p_halte2[0];
                if(tujuan=="AA2"|| tujuan=="aa2"){
                cout << "  TERMINAL NOTOG- SMK ARYASATYA " <<endl;
                tujuan2=p_halte2[1];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                     cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"|| tujuan=="aa3"){
                cout << "  TERMINAL NOTOG - TPB DESA PATIKRAJA " <<endl;
                tujuan2=p_halte2[2];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  TERMINAL NOTOG - TPB SMAN 1 PATIKRAJA " <<endl;
                tujuan2=p_halte2[3];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"|| tujuan=="aa5"){
                cout << "  TERMINAL NOTOG - TPB MTS MAARIF 1 " <<endl;
                tujuan2=p_halte2[4];
                if(tipe=="1"){
                       cost=p_tarif[3]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[3];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            else if(start=="AA2"|| start=="aa2"){
                start2=halte2[1];
                if(tujuan=="AA1"|| tujuan=="aa1"){
                cout << "  SMK ARYASATYA - TERMINAL NOTOG " <<endl;
                tujuan2=p_halte2[0];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                 cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"|| tujuan=="aa3"){
                cout << "  SMK ARYASATYA - TPB DESA PATIKRAJA " <<endl;
                tujuan2=p_halte2[2];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                    cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  SMK ARYASATYA - TPB SMAN 1 PATIKRAJA " <<endl;
                tujuan2=p_halte2[3];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"|| tujuan=="aa5"){
                cout << "  SMK ARYASATYA - TPB MTS MAARIF 1 " <<endl;
                tujuan2=p_halte2[4];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            else if(start=="AA3"|| start=="aa3"){
                start2=p_halte2[2];
                if(tujuan=="AA1"||tujuan=="aa1"){
                cout << "  TPB DESA PATIKRAJA - TERMINAL NOTOG " <<endl;
                tujuan2=p_halte2[0];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA2"||tujuan=="aa2"){
                cout << "  TPB DESA PATIKRAJA - SMK ARYASATYA " <<endl;
                tujuan2=p_halte2[1];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"||tujuan=="aa4"){
                cout << "  TPB DESA PATIKRAJA - TPB SMAN 1 PATIKRAJA " <<endl;
                tujuan2=p_halte2[3];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"||tujuan=="aa5"){
                cout << "  TPB DESA PATIKRAJA - TPB MTS MAARIF 1 " <<endl;
                tujuan2=p_halte2[4];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                   cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            else if(start=="AA4"||start=="aa4"){
                start2=p_halte2[3];
                if(tujuan=="AA1"||tujuan=="aa1"){
                cout << "  TPB SMAN 1 PATIKRAJA - TERMINAL NOTOG " <<endl;
                tujuan2=p_halte2[0];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA2"||tujuan=="aa2"){
                cout << "  TPB SMAN 1 PATIKRAJA - SMK ARYASATYA " <<endl;
                tujuan2=p_halte2[1];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"||tujuan=="aa3"){
                cout << "  TPB SMAN 1 PATIKRAJA - TPB DESA PATIKRAJA " <<endl;
                tujuan2=p_halte2[2];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                 cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA5"||tujuan=="aa5"){
                cout << "  TPB SMAN 1 PATIKRAJA - TPB MTS MAARIF 1  " <<endl;
                tujuan2=p_halte2[4];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
             else if(start=="AA5"||start=="aa5"){
                start2=p_halte2[4];
                if(tujuan=="AA1"|| tujuan=="aa1"){
                cout << "  TPB MTS MAARIF 1 - TERMINAL NOTOG " <<endl;
                tujuan2=p_halte2[0];
                if(tipe=="1"){
                       cost=p_tarif[3]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[3];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA2"|| tujuan=="aa2"){
                cout << "  TPB MTS MAARIF 1 - SMK ARYASATYA " <<endl;
                tujuan2=p_halte2[1];
                if(tipe=="1"){
                       cost=p_tarif[2]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[2];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA3"|| tujuan=="aa3"){
                cout << "  TPB MTS MAARIF 1 - TPB DESA PATIKRAJA " <<endl;
                tujuan2=p_halte2[2];
                if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
                 cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
                }
                else if(tujuan=="AA4"|| tujuan=="aa4"){
                cout << "  TPB MTS MAARIF 1 - TPB SMAN 1 PATIKRAJA " <<endl;
                tujuan2=p_halte2[3];
                if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
                cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
        cout << endl;
        cout << "  Pilih Waktu Keberangkatan           :  " <<endl;
        cout << "   1.  [08.00] WIB              " <<endl;
        cout << "   2.  [09.00] WIB              " <<endl;
        cout << "   3.  [10.00] WIB              " <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << "  Masukan Pilihan [1 - 3]:  "; cin >> pilih;
        if(pilih==1){
            pilihan=pointer[3];
        }
        else if(pilih==2){
            pilihan=pointer[5];
        }
        else if (pilih==3){
            pilihan=pointer[7];
        }
        cout << endl;
        cout << "  KONFIRMASI PEMBELIAN TIKET(Y/N)          : "; cin >> konfir;
        cout << endl<<endl;

        system("cls");
        if (konfir=='Y'||konfir=='y'){
            if(tipe=="1"){
            cout << endl << "  SELAMAT PEMBELIAN TIKET BERHASIL!" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
                    cout << "  Tipe Bus      : " ; tampil();
                    cout << "  Atas Nama     : " << antrian2_eks.nama_eks2[antrian2_eks.tail] << endl;
                    cout << "  Nomor Kursi   : " << antrian2_eks.tail << " /20" << endl;
                    cout << "  Keberangkatan : " << start2 << endl;
                    cout << "  Tujuan        : " << tujuan2 << endl ;
                    cout << "  Waktu         : " << pilihan << " WIB" << endl;
                    cout << "  Tarif         : Rp." << cost << ",00" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
            cout << "  SILAHKAN SIMPAN BUKTI INI UNTUK DITUNJUKAN SAAT MENAIKI BIS KAMI! " <<endl;
            cout << "         UTAMAKAN KESELAMATAN ANDA, HATI-HATI DIJALAN" << endl;
            cout << " -------------------------------------------------------------------" << endl;
            }
            else if (tipe=="2"){
                cout << endl << "  SELAMAT PEMBELIAN TIKET BERHASIL!" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
                    cout << "  Tipe Bus      : " ; tampil();
                    cout << "  Atas Nama     : " << antrian2_eko.nama_eko2[antrian2_eko.tail] << endl;
                    cout << "  Nomor Kursi   : " << antrian2_eko.tail << " /20" << endl;
                    cout << "  Keberangkatan : " << start2 << endl;
                    cout << "  Tujuan        : " << tujuan2 << endl ;
                    cout << "  Waktu         : " << pilihan << " WIB" << endl;
                    cout << "  Tarif         : Rp." << cost << ",00" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
            cout << "  SILAHKAN SIMPAN BUKTI INI UNTUK DITUNJUKAN SAAT MENAIKI BIS KAMI! " <<endl;
            cout << "         UTAMAKAN KESELAMATAN ANDA, HATI-HATI DIJALAN" << endl;
            cout << " -------------------------------------------------------------------" << endl;
            }
        }
        else if(konfir=='N'||konfir=='n'){
                cout << "  PEMBELIAN DIBATALKAN!" <<endl;
                cout << "  Terima kasih telah mengunjungi kami!" <<endl;
            }
}

void menu3()
{
        string nama3, tujuan, tujuan2, start, start2, tipe, pilihan;
        long cost;
        char konfir, kembali;
        system("cls");
        menu3:
        cout << "  #KORIDOR KETIGA                               " <<endl;
        cout <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << " |            *PEMBELIAN TIKET BUS TRANS-BANYUMAS*                 |" <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << " 1. KORIDOR 3 GANJIL " << endl;
        cout << " 2. KORIDOR 3 GENAP  " << endl <<endl;
        cout << " Pilih : "; cin >> pilih;
        cout << endl;
        switch(pilih){
        case 1 :
        cout << "  #KORIDOR 3 GANJIL                                " <<endl<< endl;
        cout << endl;
        cout << "  TIPE BUS :\n   1. EKSEKUTIF\n   2. EKONOMI\n" << endl;
        cin.ignore();
        cout << "  PILIH TIPE BUS [EKSEKUTIF/EKONOMI]        : ";
        getline(cin, tipe);
        insertDepan(tipe);

         if (tipe=="1"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue3_eks(nama);
        }
        else if (tipe=="2"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue3_eko(nama);
        }
        cout << "  PILIH LOKASI KEBERANGKATAN & TUJUAN ANDA :       " <<endl;
        cout << "  -------------------------------------------------" <<endl;
        cout << "  | No.|    CODE    | NAMA LOKASI                 |" <<endl;
        cout << "  -------------------------------------------------" <<endl;
        for(int i=0; i<3;i++){
        cout << "  |  "<< i+1 << " |     " << kode1[i] << "    | "<<left<<setw(26)<< halte3a[i] << "  |  " << endl;
        cout << "  -------------------------------------------------" <<endl;
    }
        cout << "  Masukan Pilihan Keberangkatan(CODE) :  "; cin >> start;
        cout << "  Masukan Pilihan Tujuan (CODE)       :  "; cin >> tujuan;
        cout << endl;

        if (start=="AA1"|| start=="aa1"){
            start2=p_halte3a[0];
            if(tujuan=="AA2"|| tujuan=="aa2"){
            cout << "  BULUPITU- RS DADI KELUARGA " <<endl;
            tujuan2=p_halte3a[1];
                    if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
              cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }
            else if(tujuan=="AA3"|| tujuan=="aa3"){
            cout << "  BULUPITU - UNIVERSITAS NU " <<endl;
            tujuan2=p_halte3a[2];
            if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
        else if(start=="AA2"|| start=="aa2"){
            start2=p_halte3a[1];
            if(tujuan=="AA1"||tujuan=="aa1"){
            cout << "  RS DADI KELUARGA - TERMINAL BULUPITU " <<endl;
            tujuan2=p_halte3a[0];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }
            else if(tujuan=="AA3"||tujuan=="aa3"){
            cout << "  RS DADI KELUARGA - UNIVERSITAS NU " <<endl;
            tujuan2=p_halte3a[2];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
              cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
        else if(start=="AA3"|| start=="aa3"){
            start2=p_halte3a[2];
            if(tujuan=="AA1"||tujuan=="aa1"){
            cout << "  UNIVERSITAS NU - TERMINAL BULUPITU " <<endl;
            tujuan2=p_halte3a[0];
            if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
             cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }
            else if(tujuan=="AA2"||tujuan=="aa2"){
            cout << "  UNIVERSITAS NUA - RS DADI KELUARGA " <<endl;
            tujuan2=p_halte3a[1];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            break;
        case 2 :
        cout << "  #KORIDOR 3 GENAP                                " <<endl<< endl;
        cout << endl;
        cout << "  TIPE BUS :\n   1. EKSEKUTIF\n   2. EKONOMI\n" << endl;
        cin.ignore();
        cout << "  PILIH TIPE BUS [EKSEKUTIF/EKONOMI]        : ";
        getline(cin, tipe);
        insertDepan(tipe);

         if (tipe=="1"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue3_eks(nama);
        }
        else if (tipe=="2"){
            cin.ignore();
            cout << "  MASUKAN NAMA ANDA                        : ";
            getline(cin, nama);
            enqueue3_eko(nama);
        }
        cout << "  PILIH LOKASI KEBERANGKATAN & TUJUAN ANDA :       " <<endl;
        cout << "  -------------------------------------------------" <<endl;
        cout << "  | No.|    CODE    | NAMA LOKASI                 |" <<endl;
        cout << "  -------------------------------------------------" <<endl;
        for(int i=0; i<3;i++){
        cout << "  |  "<< i+1 << " |     " << kode1[i] << "    | "<<left<<setw(26)<< halte3b[i] << "  |  " << endl;
        cout << "  -------------------------------------------------" <<endl;
    }
        cout << "  Masukan Pilihan Keberangkatan(CODE) :  "; cin >> start;
        cout << "  Masukan Pilihan Tujuan (CODE)       :  "; cin >> tujuan;
        cout << endl;
        if (start=="AA1"|| start=="aa1"){
            start2=p_halte3b[0];
            if(tujuan=="AA2"|| tujuan=="aa2"){
            cout << "  TERMINAL BULUPITU - SIMPANG PACURAWIS (A) " <<endl;
            tujuan2=p_halte3b[1];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }
            else if(tujuan=="AA3"|| tujuan=="aa3"){
            cout << "  TERMINAL BULUPITU - IT TELKOM " <<endl;
            tujuan2=p_halte3b[2];
            if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
        else if(start=="AA2"|| start=="aa2"){
            start2=p_halte3b[1];
            if(tujuan=="AA1"|| tujuan=="aa1"){
            cout << "  SIMPANG PACURAWIS (A) - TERMINAL BULUPITU " <<endl;
            tujuan2=p_halte3b[0];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }
            else if(tujuan=="AA3"|| tujuan=="aa3"){
            cout << "  SIMPANG PACURAWIS (A) - IT TELKOM " <<endl;
            tujuan2=p_halte3b[2];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
        else if(start=="AA3"|| start=="aa3"){
            start2=p_halte3b[2];
            if(tujuan=="AA1"||tujuan=="aa1"){
            cout << "  IT TELKOM - TERMINAL BULUPITU " <<endl;
            tujuan2=p_halte3b[0];
            if(tipe=="1"){
                       cost=p_tarif[1]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[1];
                     }
             cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }
            else if(tujuan=="AA2"||tujuan=="aa2"){
            cout << "  IT TELKOM - SIMPANG PACURAWIS (A) " <<endl;
            tujuan2=p_halte3b[1];
            if(tipe=="1"){
                       cost=p_tarif[0]*2;
                    }else if(tipe=="2"){
                        cost=p_tarif[0];
                     }
            cout << "  TARIF  :  Rp." << cost << ",00" <<endl<<endl;
            }}
            break;
        }
        cout << endl;
        cout << "  Pilih Waktu Keberangkatan           :  " <<endl;
        cout << "   1.  [07.00] WIB              " <<endl;
        cout << "   2.  [09.00] WIB              " <<endl;
        cout << "   3.  [11.00] WIB              " <<endl;
        cout << " -------------------------------------------------------------------" <<endl;
        cout << "  Masukan Pilihan [1 - 3]:  "; cin >> pilih;
        if(pilih==1){
            pilihan=pointer[1];
        }
        else if(pilih==2){
            pilihan=pointer[5];
        }
        else if (pilih==3){
            pilihan=pointer[9];
        }
        cout << endl;
        cout << "  KONFIRMASI PEMBELIAN TIKET(Y/N)          : "; cin >> konfir;
        cout << endl<<endl;

        system("cls");
        if (konfir=='Y'||konfir=='y'){
            if(tipe=="1"){
            cout << endl << "  SELAMAT PEMBELIAN TIKET BERHASIL!" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
                    cout << "  Tipe Bus      : " ; tampil();
                    cout << "  Atas Nama     : " << antrian3_eks.nama_eks3[antrian3_eks.tail] << endl;
                    cout << "  Nomor Kursi   : " << antrian3_eks.tail << " /20" << endl;
                    cout << "  Keberangkatan : " << start2 << endl;
                    cout << "  Tujuan        : " << tujuan2 << endl ;
                    cout << "  Waktu         : " << pilihan << " WIB" << endl;
                    cout << "  Tarif         : Rp." << cost << ",00" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
            cout << "  SILAHKAN SIMPAN BUKTI INI UNTUK DITUNJUKAN SAAT MENAIKI BIS KAMI! " <<endl;
            cout << "         UTAMAKAN KESELAMATAN ANDA, HATI-HATI DIJALAN" << endl;
            cout << " -------------------------------------------------------------------" << endl;
            }
            else if (tipe=="2"){
                cout << endl << "  SELAMAT PEMBELIAN TIKET BERHASIL!" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
                    cout << "  Tipe Bus      : " ; tampil();
                    cout << "  Atas Nama     : " << antrian3_eko.nama_eko3[antrian3_eko.tail] << endl;
                    cout << "  Nomor Kursi   : " << antrian3_eko.tail << " /20" << endl;
                    cout << "  Keberangkatan : " << start2 << endl;
                    cout << "  Tujuan        : " << tujuan2 << endl ;
                    cout << "  Waktu         : " << pilihan << " WIB" << endl;
                    cout << "  Tarif         : Rp." << cost << ",00" <<endl;
            cout << " -------------------------------------------------------------------" << endl;
            cout << "  SILAHKAN SIMPAN BUKTI INI UNTUK DITUNJUKAN SAAT MENAIKI BIS KAMI! " <<endl;
            cout << "         UTAMAKAN KESELAMATAN ANDA, HATI-HATI DIJALAN" << endl;
            cout << " -------------------------------------------------------------------" << endl;
            }
        }
        else if(konfir=='N'||konfir=='n'){
                cout << "  PEMBELIAN DIBATALKAN!" <<endl;
                cout << "  Terima kasih telah mengunjungi kami!" <<endl;
            }

}

void menukoridor()
{
    system("cls");
    cout << " ===================================================================" <<endl;
    cout << " |         APLIKASI PEMBELIAN TIKET BUS TRANS-BANYUMAS             |" <<endl;
    cout << " ===================================================================" <<endl;
    cout << "  CLUSTER KEBERANGKATAN & TUJUAN : " <<endl;
    cout << "   1. KORIDOR PERTAMA              " <<endl;
    cout << "   2. KORIDOR KEDUA                " <<endl;
    cout << "   3. KORIDOR KETIGA               " <<endl;
    cout << " -------------------------------------------------------------------" <<endl;
    cout << "  Masukan Pilihan [1 - 3]:  "; cin >> pilih;
    cout <<endl;
    switch (pilih){
    case 1 :
        menu1();
        break;
    case 2 :
        menu2();
        break;
    case 3 :
        menu3();
    break;
      default :
          break;
    }
}

void menu()
{
do{
    system("cls");
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "                    SELAMAT DATANG DI TRANS-BANYUMAS              " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "   1. Seputar Trans-Banyumas " << endl;
    cout << "   2. Informasi Bus dan Rute " << endl;
    cout << "   3. Pesan Tiket Bus " << endl;
    cout << "   4. Keluar Program " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "   Pilih Menu : "; cin >> pilmen;
    cout << endl;
    if(pilmen==1){
    cout << "\n  Kehadiran TEMAN BUS di Banyumas merupakan implementasi\n  program Buy The Service (BTS) yang ketujuh oleh Kementerian\n  Perhubungan Republik Indonesia.Menjalankan operasional\n  layanan TEMAN BUS di Banyumas adalah Trans Banyumas.\n\n";
    cout << "  Terdapat dua jenis bus yakni EKSEKUTIF DAN EKONOMI :\n  1. EKSEKUTIF = AC DAN LARANGAN MEROKOK \n  2. EKONOMI = TIDAK BER-AC DAN BOLEH MEROKOK" << endl;
     cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }else if(pilmen==2){
    cout << "        >>INFORMASI KORIDOR DAN RUTE BUS TRANS-BANYUMAS<<" << endl;
    cout << "-----------------------------------------------------------------------"<< endl;
    cout << "|             KORIDOR 1           |            KORIDOR 2               |" <<endl;
    cout << "-----------------------------------------------------------------------"<< endl;
    for(int i=0; i<5;i++){
    cout << "| "<< i+1 <<". "<<left<<setw(27)<< halte1[i] << "  |  " << i+1 << ". " << left<<setw(27)<<halte2[i] << "    |" <<endl;}
    cout << "-----------------------------------------------------------------------" <<endl;
    cout << "|        KORIDOR 3 GANJIL         |            KORIDOR 3 GENAP         |" <<endl;
    cout << "-----------------------------------------------------------------------"<< endl;
    for(int i=0; i<3;i++){
    cout << "| "<< i+1 <<". "<<left<<setw(27)<< halte3a[i] << "  |  " << i+1 << ". " << left<<setw(27)<<halte3b[i] << "    |" <<endl;}
    cout << "-----------------------------------------------------------------------"<< endl;
    }else if(pilmen==3){
        menukoridor();
    }
    else if(pilmen==4){
        exit(0);
    }
    system("pause");
    }while(pilmen>0 || pilmen<5);
}


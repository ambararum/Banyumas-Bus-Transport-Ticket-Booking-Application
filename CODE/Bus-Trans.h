#ifndef BUS-TRANS_H_INCLUDED
#define BUS-TRANS_H_INCLUDED
#include <iostream>
#define MAX 20
using namespace std;

struct queue {
    string nama_eks1 [MAX];
    string nama_eko1 [MAX];
    string nama_eks2 [MAX];
    string nama_eko2 [MAX];
    string nama_eks3 [MAX];
    string nama_eko3 [MAX];
    int head;
    int tail;

}antrian1_eks, antrian1_eko, antrian2_eks, antrian2_eko, antrian3_eks, antrian3_eko;

void create();
int isEmpty();
int isFull();
void enqueue1_eks();
void enqueue1_eko();
void enqueue2_eks();
void enqueue2_eko();
void enqueue3_eks();
void enqueue3_eko();

struct node{ //buat linked list
    string tipe;
    node *next;
};
node *head, *tail, *baru;

void buatNode();
void insertDepan();
void tampil();

void menu1();
void menu2();
void menu3();
void menukoridor();
void menu();


#endif // BUS-TRANS_H_INCLUDED

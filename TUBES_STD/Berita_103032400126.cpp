#include <iostream>
#include "Berita.h"


void createListBerita(ListBerita &B){
//I.S -
//F.S B.first diset NIL//
    B.first = nullptr;

}

adrBerita allocateBerita(infotypeBerita x){
// mengembalikan elemen list baru dengan info = x, next elemen = null//
    adrBerita p = new elmBerita;
    p->info = x;
    p->next = nullptr;
    return p;
}


void insertFirstBerita(ListBerita &B, adrBerita b){
//I.S SLL yang mungkin kosong
// F.S element list b ditambahkan sebagai element list b pertma dalam list
    b->next = B.first;
    B.first = b;
}

void insertLastBerita(ListBerita &B, adrBerita b){
// I.S list B yang mungkin kosong dari elementlist b//
// F.S element list b ditambahkan sebagai elemn yerkhir dari SLL//
    adrBerita Q;

    if(B.first == nullptr) {
        B.first = b;
    }  else {
        Q = B.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next  = b;
    }
}

void deleteFirstBerita(ListBerita &B, adrBerita &b){
//I.S
//F.S
    if (B.first == nullptr){
        b = nullptr;
    } else if (B.first->next->next == nullptr) {
        b = B.first;
        B.first = nullptr;
    } else {
        b =B.first;
        B.first = b->next;
        b->next = nullptr;
    }
}

adrBerita findBerita(ListBerita B, string judulBerita){
    adrBerita x = B.first;
    while (x != nullptr) {
        if (x->info.judulBerita == judulBerita) {
            return x;
        }
        x = x->next;
    }
    return nullptr;
}

void showAllBerita(ListBerita B){
// menampilkan seluruh data yang ada pada list berita//
    adrBerita Q;



    cout << "\n========== DAFTAR JURNALIS ==========" << endl;
    cout << "-------------------------------------" << endl;
    Q = B.first;
    while(Q != nullptr){
        cout << "Judul Berita : " << Q->info.judulBerita << endl;
        cout << "Tema Berita  : " << Q->info.temaBerita << endl;
        cout << "Tanggal Rilis: " << Q->info.tanggal << endl;
        cout << "-------------------------------------" << endl;

        Q = Q->next;
    }

}



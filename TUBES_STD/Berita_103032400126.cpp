#include <iostream>
#include "Berita.h"


void insertFirstBerita(ListBerita &B, adrBerita b){
//I.S SLL yang mungkin kosong
// F.S element list b ditambahkan sebagai element list b pertma dalam list
    p->next = B.first;
    B.first =b;
}

void insertLastBerita(ListBerita &B, adrBerita b){
// I.S list B yang mungkin kosong dari elementlist b//
// F.S element list b ditambahkan sebagai elemn yerkhir dari SLL//

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
    } else if {
        b = B.first;
        B.first = nullptr;
    } else {
        b =B.first;
        B.first = b->next;
        b->next = nullptr;
    }
}

void showAllBerita(ListBerita B){
// menampilkan seluruh data yang ada pada list berita//
    adrBerita Q;

    cout << "\n========== DAFTAR JURNALIS ==========" << endl;
    cout << "-------------------------------------" << endl;
    Q = B.first;
    while(Q != nullptr){
        cout << "Judul Berita : " << b->info.judulBerita << endl;
        cout << "Tema Berita  : " << p->info.temaBerita << endl;
        cout << "Tanggal Rilis: " << p->info.tanggal << endl;
        cout << "-------------------------------------" << endl;

        Q = Q->next;
    }

}



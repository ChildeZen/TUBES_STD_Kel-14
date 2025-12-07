#include "Berita.h"
#include <iostream>

void insertafterBerita (ListBerita &B, adrBerita prec, adrBerita &b){
    if (B.first == nullptr){
        insertFirstBerita(B, b);
    }else {
        b -> next = prec -> next;
        prec -> next = b;
    }
}

void deleteAfterBerita(ListBerita &B, adrBerita prec, adrBerita &b){
    if (B.first == nullptr){
        cout << "list sudah kosong";
    }else if (B.first == B.last) {
        B.first = b;
        B.first = nullptr;
        B.last = nullptr
    }
}

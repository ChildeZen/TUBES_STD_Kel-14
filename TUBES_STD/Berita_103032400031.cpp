#include "Berita.h"

void insertafterBerita (elmBerita &B, adrBerita prec, adrBerita &b){
    if (B.first == nullptr){
        insertFirstBerita(B, b)
    }else {
        p -> next = prec -> next;
        prec -> next = p;
    }
}

void deleteAfterBerita(ListBerita &B, adrBerita prec, adrBerita &b){
    if (B.first == nullptr){
        cout << "list sudah kosong"
    }else if (B.first == B.last) {
        B.first = p;
        B.first = nullptr;
        B.last = nullptr
    }
}

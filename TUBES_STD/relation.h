#ifndef RELATION_H_INCLUDED
#define RELATION_H_INCLUDED
#include "berita.h"
#include <iostream>
using namespace std;


typedef struct elmRelasi *adrRelasi;

struct elmRelasi {
    adrBerita info;
    adrRelasi next;
};

struct ListRelasi {
    adrRelasi first;
};

void createList(ListRelasi &L);
void insertFirst(ListRelasi &L, adrRelasi P);
void insertLast(ListRelasi &L, adrRelasi P);
void insertAfter(adrRelasi Prec, adrRelasi P);
void deleteFirst(ListRelasi &L, adrRelasi &P);
void deleteLast(ListRelasi &L, adrRelasi &P);
void deleteAfter(ListRelasi Prec, adrRelasi &P);


adrRelasi alokasi(adrBerita C);
void dealokasi(adrRelasi &P);
adrRelasi findElm(ListRelasi L, adrBerita C);
void printInfo(ListRelasi L);

#endif // RELATION_H_INCLUDED

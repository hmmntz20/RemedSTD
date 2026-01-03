#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>

using namespace std;

struct tPanen {
    string namaTanaman;
    string bulanPanen;
    int jumlahPanen;
};

typedef tPanen infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address createNewElm(infotype x);
void tambahData(List &L, infotype data);
address panenTerbanyak(List L);
void panenBulanan(List L, string bulan);

#endif // SLL_H_INCLUDED

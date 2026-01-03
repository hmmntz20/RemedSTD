#include "sll.h"

void createList(List &L) {
    L.first = nullptr;
}

address createNewElm(infotype x) {
    address P = new elmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void tambahData(List &L, infotype data) {
    address P = createNewElm(data);
    P->next = L.first;
    L.first = P;
}

address panenTerbanyak(List L) {
    if (L.first == nullptr) {
        return nullptr;
    }

    address P = L.first;
    address maxP = L.first;

    while (P != nullptr) {
        if (P->info.jumlahPanen > maxP->info.jumlahPanen) {
            maxP = P;
        }
        P = P->next;
    }
    return maxP;
}

void panenBulanan(List L, string bulan) {
    address P = L.first;
    cout << "Tanaman panen bulan " << bulan << ": ";
    while (P != nullptr) {
        if (P->info.bulanPanen == bulan) {
            cout << P->info.namaTanaman << " ";
        }
        P = P->next;
    }
}

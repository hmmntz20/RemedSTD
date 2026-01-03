#include "sll.h"

int main() {
        cout << "ini sll" << endl;
    List L;
    createList(L);

    tambahData(L, {"Labu", "Maret", 550});
    tambahData(L, {"Jagung", "Maret", 790});
    tambahData(L, {"Padi", "Maret", 1000});
    tambahData(L, {"Padi", "Februari", 850});
    tambahData(L, {"Wortel", "Januari", 500});

    address terbanyak = panenTerbanyak(L);
    if (terbanyak != nullptr) {
        cout << "Panen Terbanyak: " << terbanyak->info.namaTanaman
             << " (" << terbanyak->info.jumlahPanen << " kg)" << endl;
    }

    panenBulanan(L, "Maret");
    panenBulanan(L, "Februari");

    return 0;
}

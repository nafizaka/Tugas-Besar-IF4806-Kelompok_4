#include <iostream>
#include "Pegawai.h"
#include "Divisi.h"

using namespace std;


void createListDivisi_103012430046(listDivisi &L){
    L.first = nullptr;
}
bool isEmptyDivisi_103012430046(listDivisi L){
    return (L.first == nullptr);
}

adrDivisi createElemenDivisi_103012430046(Divisi x){
    adrDivisi p = new elmDivisi;

    p->info.namaDiv = x.namaDiv;
    p->info.ID_Div = x.ID_Div;
    p->info.kepalaDiv = x.kepalaDiv;
    p->info.jumPegawai = x.jumPegawai;
    p->info.statusDiv = x.statusDiv;
    p->info.lokasiDiv = x.lokasiDiv;
    p->next = nullptr;
    p->prev = nullptr;
    p->firstPegawai = nullptr;

    return p;
}

void insertFirstDivisi_103012430046(listDivisi &L, adrDivisi p){
    if (isEmptyDivisi_103012430046(L)){
        L.first = p;
    } else {
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}
void insertLastDivisi_103012430046(listDivisi &L, adrDivisi p){
    if (isEmptyDivisi_103012430046(L)){
        L.first = p;
    } else {
        adrDivisi q;
        q = L.first;
        while (q->next != nullptr){
            q = q->next;
        }
        p->prev = q;
        q->next = p;
    }
}

void insertAfterDivisi_103012430046(listDivisi &L, adrDivisi prec, adrDivisi p){
    if (prec == nullptr || L.first == nullptr){
        cout << "List Kosong!" << endl;
    } else {
        p->next = prec->next;
        p->prec = prec;
        prec->next->prev = p;
        prec->next = p;
    }
}


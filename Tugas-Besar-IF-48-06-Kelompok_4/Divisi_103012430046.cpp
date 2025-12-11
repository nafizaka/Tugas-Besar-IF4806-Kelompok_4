#include <iostream>
#include "header.h"

using namespace std;


void createListDivisi_103012430046(listDivisi &L){
    L.first = nullptr;
    L.last = nullptr;
}
bool isEmptyDivisi_103012430046(listDivisi L){
    return (L.first == nullptr && L.last == nullptr);
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
        L.last = p;
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
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
    }
}

void insertAfterDivisi_103012430046(listDivisi &L, adrDivisi prec, adrDivisi p){
    if (prec == nullptr || isEmptyDivisi_103012430046(L)){
        cout << "List Kosong!" << endl;
    } else {
        p->next = prec->next;
        p->prev = prec;
        prec->next->prev = p;
        prec->next = p;
    }
}

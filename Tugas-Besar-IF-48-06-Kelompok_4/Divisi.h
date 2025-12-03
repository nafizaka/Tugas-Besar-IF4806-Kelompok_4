#ifndef DIVISI_H_INCLUDED
#define DIVISI_H_INCLUDED

typedef struct elmDivisi *adrDivisi;

struct Divisi {
    string namaDiv;
    string ID_Div;
    string kepalaDiv;
    int jumPegawai;
    bool statusDiv;
    string lokasiDiv;
};

struct elmDivisi {
    Divisi info;
    adrDivisi next;
    adrDivisi prev;
    adrPegawai firstPegawai;
};

struct listDivisi {
    adrDivisi first;
};

void createListDivisi(listDivisi &L);
bool isEmptyDivisi(listDivisi L);
adrDivisi createElemenDivisi(Divisi x);
void insertFirstDivisi(listDivisi &L, adrDivisi p);
void insertLastDivisi(listDivisi &L, adrDivisi p);
void insertAfterDivisi(listDivisi &L, adrDivisi prec, adrDivisi p);
void deleteFirstDivisi(listDivisi &L, adrDivisi &p);
void deleteLastDivisi(listDivisi &L, adrDivisi &p);
void deleteAfterDivisi(listDivisi &L, adrDivisi Prec, adrDivisi &p);
adrDivisi searchDivisi(listDivisi L, string nama);
void printDivisi(listDivisi L);

#endif // DIVISI_H_INCLUDED

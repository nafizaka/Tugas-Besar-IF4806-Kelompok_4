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
    adrDivisi last;
};

void createListDivisi_103012430046(listDivisi &L);
bool isEmptyDivisi_103012430046(listDivisi L);
adrDivisi createElemenDivisi_103012430046(Divisi x);
void insertFirstDivisi_103012430046(listDivisi &L, adrDivisi p);
void insertLastDivisi_103012430046(listDivisi &L, adrDivisi p);
void insertAfterDivisi_103012430046(listDivisi &L, adrDivisi prec, adrDivisi p);
void deleteFirstDivisi_103012400148(listDivisi &L, adrDivisi &p);
void deleteLastDivisi_103012400148(listDivisi &L, adrDivisi &p);
void deleteAfterDivisi_103012400148(listDivisi &L, adrDivisi Prec, adrDivisi &p);
adrDivisi searchDivisi_103012400148(listDivisi L, string nama);
void printDivisi_103012400148(listDivisi L);

#endif // DIVISI_H_INCLUDED

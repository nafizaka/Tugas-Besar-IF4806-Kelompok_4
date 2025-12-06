#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

using namespace std;
typedef struct elmDivisi *adrDivisi;
typedef struct elemenPegawai *adrPegawai;

struct Divisi {
    string namaDiv;
    string ID_Div;
    string kepalaDiv;
    int jumPegawai;
    bool statusDiv;
    string lokasiDiv;
};

struct Pegawai {
    string nama;
    string id;
    string jabatan;
    int gaji;
    bool status;
};

struct elmDivisi {
    Divisi info;
    adrDivisi next;
    adrDivisi prev;
    adrPegawai firstPegawai;
};

struct elemenPegawai {
    Pegawai info;
    adrPegawai next;
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

adrPegawai createElemenPegawai_103012400148(Pegawai x);
bool isEmpty_103012400148(adrDivisi p);
void insertFirstPegawai_103012400148(adrDivisi &p, adrPegawai q);
void insertLastPegawai_103012400148(adrDivisi &p, adrPegawai q);
void insertAfterPegawai_103012400148(adrDivisi &p, adrPegawai prec, adrPegawai q);
void deleteFirstPegawai_103012430046(adrDivisi &p, adrPegawai &q);
void deleteLastPegawai_103012430046(adrDivisi &p, adrPegawai &q);
void deleteAfterPegawai_103012430046(adrDivisi &p, adrPegawai prec, adrPegawai &q);
adrPegawai searchPegawai_103012430046(adrDivisi p, string id);
void printPegawai_103012430046(adrDivisi p);


#endif // HEADER_H_INCLUDED

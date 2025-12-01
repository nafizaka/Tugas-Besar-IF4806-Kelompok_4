#ifndef PEGAWAI_H_INCLUDED
#define PEGAWAI_H_INCLUDED
#include <iostream>
using namespace std;
typedef struct elemenpegawai *adrPegawai;

struct Pegawai {
    string nama;
    string id;
    string jabatan;
    int gaji;
    bool status;
};
struct elemenPegawai {
    Pegawai info;
    adrPegawai next;
};
struct ListPegawai {
    adrPegawai first;
};
void createListPegawai(ListPegawai &L);
bool isEmptyPegawai(ListPegawai L);
adrPegawai createElemenPegawai(Pegawai x);
void insertFirstPegawai(ListPegawai &L, adrPegawai P);
void insertLastPegawai(ListPegawai &L, adrPegawai P);
void insertAfterPegawai(ListPegawai &L, adrPegawai Prec, adrPegawai P);
void deleteFirstPegawai(ListPegawai &L, adrPegawai &P);
void deleteLastPegawai(ListPegawai &L, adrPegawai &P);
void deleteAfterPegawai(ListPegawai &L, adrPegawai Prec, adrPegawai &P);
adrPegawai searchPegawai(ListPegawai L, string nama);
void printPegawai(ListPegawai L);
#endif // PEGAWAI_H_INCLUDED

#ifndef PEGAWAI_H_INCLUDED
#define PEGAWAI_H_INCLUDED
#include <iostream>
using namespace std;
typedef struct elemenPegawai *adrPegawai;

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

adrPegawai createElemenPegawai_103012400148(string nama, id, jabatan, int gaji, bool status);
bool isEmpty_103012400148(adrDivisi p);
void insertFirstPegawai_103012400148(adrDivisi &p, adrPegawai q);
void insertLastPegawai_103012400148(adrDivisi &p, adrPegawai q);
void insertAfterPegawai_103012400148(adrDivisi &p, adrPegawai prec, adrPegawai q);
void deleteFirstPegawai(adrDivisi &p, adrPegawai &q);
void deleteLastPegawai(adrDivisi &p, adrPegawai &q);
void deleteAfterPegawai(adrDivisi &p, adrPegawai prec, adrPegawai &q);
adrPegawai searchPegawai(adrDivisi p, string id);
void printPegawai(adrDivisi p);
#endif // PEGAWAI_H_INCLUDED

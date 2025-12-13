#include <iostream>
#include "header.h"

using namespace std;

adrPegawai createElemenPegawai_103012400148(Pegawai x){
    adrPegawai p;
    p = new elemenPegawai;
    p->info.nama = x.nama;
    p->info.id = x.id;
    p->info.jabatan = x.jabatan;
    p->info.gaji = x.gaji;
    p->info.status = x.status;
    p->next = nullptr;
    return p;
}
bool isEmptyPegawai_103012400148(adrDivisi p){
    if (p==nullptr){
        return true;
    }else {
        return (p->firstPegawai == nullptr);
    }
}
void insertFirstPegawai_103012400148(adrDivisi &p, adrPegawai q){
    if (p == nullptr || q == nullptr){
        cout << "Divisi tidak ditemukan." << endl;
    }else if(p->firstPegawai == nullptr) {
        p->firstPegawai = q;
    }else {
        q->next = p->firstPegawai;
        p->firstPegawai = q;
    }
}
void insertLastPegawai_103012400148(adrDivisi &p, adrPegawai q){
    if (p == nullptr || q == nullptr){
        cout << "Divisi tidak ditemukan." << endl;
    }else if(p->firstPegawai == nullptr) {
        p->firstPegawai = q;
    }else {
        adrPegawai first;
        first = p->firstPegawai;
        while (first->next != nullptr){
            first = first->next;
        }
        first->next = q;
    }
}
void insertAfterPegawai_103012400148(adrDivisi &p, adrPegawai prec, adrPegawai q){
    if (prec != nullptr){
        if (p == nullptr || q == nullptr){
            cout << "Divisi tidak ditemukan."<< endl;
        }else{
            q->next = prec->next;
            prec->next = q;
        }
    }
}

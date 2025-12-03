#include <iostream>
#include "Pegawai.h"
#include "Divisi.h"

using namespace std;

adrPegawai createElemenPegawai_103012400148(string nama, id, jabatan, int gaji, bool status){
    adrPegawai p;
    p = new elemenPegawai;
    p->info.nama = nama;
    p->info.id = id
    p->info.jabatan = jabatan;
    p->info.gaji = gaji;
    p->info.status = status;
    p->firstPegawai = nullptr;
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
void insertFirstPegawai_103012400148(adrDivisi &p, adrPegawai q);{
    if (p == nullptr || q == nullptr){
        cout << "Divisi tidak ditemukan."
    }else if(p->firstPegawai == nullptr) {
        p->firstPegawai = q;
    }else {
        q->next = p->firstPegawai;
        p->firstPegawai = q;
    }
}
void insertLastPegawai_103012400148(adrDivisi &p, adrPegawai q){
    if (p == nullptr || q == nullptr){
        cout << "Divisi tidak ditemukan."
    }else if(p->firstPegawai == nullptr) {
        p->firstPegawai = q;
    }else {
        adrDivisi first;
        first = p->firstPegawai;
        while (first->next != nullptr){
            first = first->next
        }
        first->next = q;
    }
}
void insertAfterPegawai_103012400148(adrDivisi &p, adrPegawai prec, adrPegawai q){
    if (prec != nullptr){
        if (p == nullptr || q == nullptr){
            cout << "Divisi tidak ditemukan.";
        }else{
            q->next = prec->next;
            prec->next = q;
        }
    }
}

#include <iostream>
#include "header.h"

using namespace std;

void deleteFirstPegawai_103012430046(adrDivisi &p, adrPegawai &q){
    if (isEmptyPegawai_103012400148(p)){
        cout << "List Kosong!" << endl;
        q = nullptr;
    } else  if (p->firstPegawai->next == nullptr){
        q = p->firstPegawai;
        p->firstPegawai = nullptr;
        p->info.jumPegawai = p->info.jumPegawai-1;
    } else {
        q = p->firstPegawai;
        p->firstPegawai = q->next;
        q->next = nullptr;
        p->info.jumPegawai = p->info.jumPegawai-1;
    }
}
void deleteLastPegawai_103012430046(adrDivisi &p, adrPegawai &q){
    if (isEmptyPegawai_103012400148(p)){
        cout << "List Kosong!" << endl;
        q = nullptr;
    } else  if (p->firstPegawai->next == nullptr){
        q = p->firstPegawai;
        p->firstPegawai = nullptr;
        p->info.jumPegawai = p->info.jumPegawai-1;
    } else {
        adrPegawai a = p->firstPegawai;
        while (a->next->next != nullptr){
            a = a->next;
        }
        q = a->next;
        a->next = nullptr;
        p->info.jumPegawai = p->info.jumPegawai-1;
    }
}
void deleteAfterPegawai_103012430046(adrDivisi &p, adrPegawai prec, adrPegawai &q){
    if (prec == nullptr || p->firstPegawai == nullptr || prec->next == nullptr){
        cout << "List Kosong!" << endl;
        q = nullptr;
    } else {
        q = prec->next;
        prec->next = q->next;
        q->next = nullptr;
        p->info.jumPegawai = p->info.jumPegawai-1;
    }
}
adrPegawai searchPegawai_103012430046(adrDivisi p, string id){
    adrPegawai q = p->firstPegawai;
    if (p == nullptr){
        return nullptr;
    }
    while (q != nullptr && q->info.id != id){
        q = q->next;
    }
    return q;
}
void printPegawai_103012430046(adrDivisi p){
    if (p == nullptr || p->firstPegawai == nullptr){
        cout << "Data pegawai kosong!" << endl;
        return;
    }

    adrPegawai q = p->firstPegawai;
    int i = 0;

    while (q != nullptr){
        i++;
        cout << "Pegawai ke-" << i << endl;
        cout << "Nama: " << q->info.nama << endl;
        cout << "ID: "<< q->info.id << endl;
        cout << "Jabatan: " << q->info.jabatan << endl;
        cout << "Gaji: " << q->info.gaji << endl;
        cout << "Status: ";
        if (q->info.status) {
            cout<<"Aktif" << endl;
        }else {
            cout<<"Tidak Aktif" << endl;
        }
        q = q->next;
        cout << endl;
    }
}

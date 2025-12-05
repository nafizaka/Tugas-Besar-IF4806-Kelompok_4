#include <iostream>
#include "Pegawai.h"
#include "Divisi.h"

using namespace std;

void deleteFirstDivisi_103012400148(listDivisi &L, adrDivisi &p){
    if (isEmptyDivisi_103012430046(L)){
        p = nullptr;
    }else if (L.first == L.last){
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    }else {
        p = L.first;
        L.first = p->next;
        p->next = nullptr;
        L.first->prev = nullptr;
    }
}
void deleteLastDivisi_103012400148(listDivisi &L, adrDivisi &p){
    if (isEmptyDivisi_103012430046(L)){
        p = nullptr;
    }else if (L.first == L.last){
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    }else {
        p = L.last;
        L.last = p->prev;
        L.last->next = nullptr;
        p->prev = nullptr;
    }
}
void deleteAfterDivisi_103012400148(listDivisi &L, adrDivisi Prec, adrDivisi &p){
    if (Prec == nullptr || Prec->next == nullptr){\
        p = nullptr;
        cout << "Tidak ada yang bisa di hapus.";
    }else if (Prec->next == L.last){
        p = L.last;
        deleteLastDivisi_103012400148(L, p);
    }else {
        p = Prec->next;
        Prec->next = p->next;
        p->next->Prev = Prec;
        p->next = nullptr;
        p->Prev = nullptr;
    }
}
adrDivisi searchDivisi_103012400148(listDivisi L, string nama){
    adrDivisi q = p->L.first;
    while (q != nullptr && q->info.id != nama){
        q = q->next;
    }
    return q;
}
void printDivisi_103012400148(listDivisi L) {
    if (L.first == nullptr) {
        cout << "List Divisi kosong" << endl;
    }else {
        adrDivisi p = L.first;
        while (p!=nullptr){
            cout << "==== Data Divisi ====" << endl;
            cout << "Nama Divisi  : " << p->info.namaDiv << endl;
            cout << "ID Divisi    : " << p->info.ID_Div << endl;
            cout << "Kepala Divisi: " << p->info.kepalaDiv << endl;
            cout << "Jumlah Pegawai: " << p->info.jumPegawai << endl;
            cout << "Status Divisi : ";
            if (p->info.statusDiv) {
                cout<<"Aktif";
            }else {
                cout<<"Tidak Aktif";
            }
            cout << endl;
            cout << "Lokasi Divisi: " << p->info.lokasiDiv << endl;
            cout << endl;
            p = p->next;
        }
    }
}

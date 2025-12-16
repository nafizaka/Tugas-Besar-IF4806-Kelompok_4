#include <iostream>
#include "header.h"

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
void deleteAfterDivisi_103012400148(listDivisi &L, adrDivisi prec, adrDivisi &p){
    if (prec == nullptr || prec->next == nullptr){
        p = nullptr;
        cout << "Tidak ada yang bisa di hapus.";
    }else if (prec->next == L.last){
        p = L.last;
        deleteLastDivisi_103012400148(L, p);
    }else {
        p = prec->next;
        prec->next = p->next;
        p->next->prev = prec;
        p->next = nullptr;
        p->prev = nullptr;
    }
}
adrDivisi searchDivisi_103012400148(listDivisi L, string nama){
    adrDivisi q = L.first;
    while (q != nullptr && q->info.namaDiv != nama){
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
void lihatDivisiTerbanyak_103012400148(listDivisi L) {
    if (L.first == nullptr) {
        cout << "Data divisi kosong!" << endl;
        return;
    }

    adrDivisi p = L.first;
    int maxPegawai = -1;

    // 🔹 Cari jumlah maksimum
    while (p != nullptr) {
        int count = 0;
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            count++;
            q = q->next;
        }

        if (count > maxPegawai) {
            maxPegawai = count;
        }
        p = p->next;
    }

    if (maxPegawai <= 0) {
        cout << "Belum ada pegawai di semua divisi." << endl;
        return;
    }

    // 🔹 Tampilkan divisi dengan jumlah maksimum
    cout << "==================================" << endl;
    cout << "Divisi Dengan Karyawan Terbanyak" << endl;
    cout << "Jumlah Maksimum : " << maxPegawai << endl;
    cout << "==================================" << endl;

    p = L.first;
    while (p != nullptr) {
        int count = 0;
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            count++;
            q = q->next;
        }

        if (count == maxPegawai) {
            cout << "Divisi : " << p->info.namaDiv << endl;
            cout << "Jumlah : " << count << " karyawan" << endl;
            cout << "--------------------------" << endl;
        }
        p = p->next;
    }
}

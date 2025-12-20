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
        cout << "Umur: " << q->info.umur << endl;
        cout <<"Lama Bekerja: " << q->info.LamaBekerja << endl;
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

void editNamaStatusPegawai_103012430046(listDivisi &L) {
    string namaDiv, idCari, namaBaru;
    int statusBaru;

    cout << "Masukkan Nama Divisi : ";
    cin >> namaDiv;
    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
        return;
    }
    cout << "Masukkan ID Karyawan : ";
    cin >> idCari;
    adrPegawai q = searchPegawai_103012430046(p, idCari);
    if (q == nullptr) {
        cout << "Karyawan tidak ditemukan!" << endl;
        return;
    }
    cout << "Nama Lama   : " << q->info.nama << endl;
    cout << "Status Lama : ";
    if (q->info.status) {
            cout << "Aktif" << endl;
        } else {
            cout << "Tidak Aktif" << endl;
        }
    cout << "Masukkan Nama Baru : ";
    cin >> namaBaru;
    q->info.nama = namaBaru;
    cout << "Masukkan Status Baru (1 = Aktif, 0 = Tidak Aktif) : ";
    cin >> statusBaru;
    q->info.status = (statusBaru == 1);
    cout << "Data karyawan berhasil diperbarui." << endl;
}
void hapusPegawaiByID_103012430046(listDivisi &L) {
    string namaDiv, idCari;

    cout << "Masukkan Nama Divisi : ";
    cin >> namaDiv;
    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
        return;
    }
    if (p->firstPegawai == nullptr) {
        cout << "Tidak ada pegawai di divisi ini." << endl;
        return;
    }
    cout << "Masukkan ID Karyawan yang akan dihapus : ";
    cin >> idCari;
    adrPegawai q = searchPegawai_103012430046(p, idCari);
    if (q == nullptr) {
        cout << "Karyawan tidak ditemukan!" << endl;
        return;
    }
    if (q == p->firstPegawai) {
        deleteFirstPegawai_103012430046(p, q);
    }
    else {
        adrPegawai prec = p->firstPegawai;
        while (prec->next != q) {
            prec = prec->next;
        }
        deleteAfterPegawai_103012430046(p, prec, q);
    }
    cout << "Karyawan dengan ID " << idCari << " berhasil dihapus." << endl;
}
void hapusPegawaiByStatusDivisi_103012430046(listDivisi &L) {
    string namaDiv;
    int statusPilihan;
    bool adaHapus = false;
    cout << "Masukkan Nama Divisi : ";
    cin >> namaDiv;
    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
        return;
    }
    if (p->firstPegawai == nullptr) {
        cout << "Tidak ada pegawai di divisi ini." << endl;
        return;
    }
    cout << "Hapus Pegawai Berdasarkan Status" << endl;
    cout << "1. Aktif" << endl;
    cout << "0. Tidak Aktif" << endl;
    cout << "Pilih Status yang akan dihapus : ";
    cin >> statusPilihan;
    bool statusTarget;
    if (statusPilihan == 1) {
        statusTarget = true;
    } else {
        statusTarget = false;
    }
    adrPegawai curr = p->firstPegawai;
    adrPegawai prev = nullptr;
    while (curr != nullptr) {
        if (curr->info.status == statusTarget) {
            adaHapus = true;
            adrPegawai hapus = curr;
            if (curr == p->firstPegawai) {
                deleteFirstPegawai_103012430046(p, hapus);
                curr = p->firstPegawai;
            }
            else {
                curr = curr->next;
                deleteAfterPegawai_103012430046(p, prev, hapus);
            }
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    if (adaHapus == true) {
        cout << "Semua pegawai dengan status ";
        if (statusTarget == true) {
            cout << "AKTIF";
        } else {
            cout << "TIDAK AKTIF";
        }
        cout << " pada divisi " << namaDiv
             << " berhasil dihapus." << endl;
    } else {
        cout << "Tidak ada pegawai dengan status tersebut." << endl;
    }
}
void tambahPegawai_103012430046(listDivisi &L) {
    string namaDiv;
    Pegawai x;
    adrPegawai q;
    cout << "Masukkan Nama Divisi : ";
    cin >> namaDiv;
    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
        return;
    }
    cout << "=== Input Data Pegawai Baru ===" << endl;
    cout << "Nama        : ";
    cin >> x.nama;
    cout << "ID          : ";
    cin >> x.id;
    cout << "Jabatan     : ";
    cin >> x.jabatan;
    cout << "Umur        : ";
    cin >> x.umur;
    cout << "Gaji        : ";
    cin >> x.gaji;
    cout << "Status (1 = Aktif, 0 = Tidak Aktif) : ";
    cin >> x.status;
    x.LamaBekerja = 0;
    q = createElemenPegawai_103012400148(x);
    if (p->firstPegawai == nullptr) {
        insertFirstPegawai_103012400148(p, q);
    } else {
        insertLastPegawai_103012400148(p, q);
    }
    cout << "Pegawai baru berhasil ditambahkan ke divisi "
         << namaDiv << "." << endl;
}

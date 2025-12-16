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
        p->info.jumPegawai = p->info.jumPegawai+1;
    }else {
        q->next = p->firstPegawai;
        p->firstPegawai = q;
        p->info.jumPegawai = p->info.jumPegawai+1;
    }
}
void insertLastPegawai_103012400148(adrDivisi &p, adrPegawai q){
    if (p == nullptr || q == nullptr){
        cout << "Divisi tidak ditemukan." << endl;
    }else if(p->firstPegawai == nullptr) {
        p->firstPegawai = q;
        p->info.jumPegawai = p->info.jumPegawai+1;
    }else {
        adrPegawai first;
        first = p->firstPegawai;
        while (first->next != nullptr){
            first = first->next;
        }
        first->next = q;
        p->info.jumPegawai = p->info.jumPegawai+1;
    }
}
void insertAfterPegawai_103012400148(adrDivisi &p, adrPegawai prec, adrPegawai q){
    if (prec != nullptr){
        if (p == nullptr || q == nullptr){
            cout << "Divisi tidak ditemukan."<< endl;
        }else{
            q->next = prec->next;
            prec->next = q;
            p->info.jumPegawai = p->info.jumPegawai+1;
        }
    }
}
void printAllPegawai_103012400148(listDivisi L){
    if (L.first == nullptr){
        cout << "Data divisi kosong!" << endl;
        return;
    }

    adrDivisi p = L.first;
    int no = 0;

    while (p != nullptr){
        adrPegawai q = p->firstPegawai;

        if (q != nullptr){
            cout << "==================================" << endl;
            cout << "Divisi : " << p->info.namaDiv << endl;
            cout << "==================================" << endl;

            while (q != nullptr){
                no++;
                cout << "Pegawai ke-" << no << endl;
                cout << "Nama   : " << q->info.nama << endl;
                cout << "ID     : " << q->info.id << endl;
                cout << "Jabatan: " << q->info.jabatan << endl;
                cout << "Umur   : " << q->info.umur << endl;
                cout << "Lama Bekerja: " << q->info.LamaBekerja << endl;
                cout << "Gaji   : " << q->info.gaji << endl;
                cout << "Status : "
                     << (q->info.status ? "Aktif" : "Tidak Aktif") << endl;
                cout << endl;

                q = q->next;
            }
        }

        p = p->next;
    }

    if (no == 0){
        cout << "Tidak ada pegawai di seluruh divisi." << endl;
    }
}
void printPegawaiSeniorJunior_103012400148(listDivisi L, int tipe) {
    adrDivisi p = L.first;
    bool ketemu = false;

    while (p != nullptr) {
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            if ( (tipe == 1 && q->info.LamaBekerja >= 5) ||
                 (tipe == 2 && q->info.LamaBekerja < 5) ) {

                ketemu = true;
                cout << "Divisi : " << p->info.namaDiv << endl;
                cout << "Nama   : " << q->info.nama << endl;
                cout << "Lama Bekerja : " << q->info.LamaBekerja << " tahun" << endl;
                cout << "--------------------------" << endl;
            }
            q = q->next;
        }
        p = p->next;
    }

    if (!ketemu) {
        cout << "Tidak ada karyawan yang sesuai." << endl;
    }
}

void printPegawaiStatus_103012400148(listDivisi L, int mode) {
    string namaDiv;

    cout << "Masukkan Nama Divisi: ";
    cin >> namaDiv;

    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
    }

    adrPegawai q = p->firstPegawai;
    bool ada = false;

    while (q != nullptr) {
        if ((mode == 1 && q->info.status == true) ||
            (mode == 2 && q->info.status == false)) {

            ada = true;
            cout << "Nama   : " << q->info.nama << endl;
            cout << "ID     : " << q->info.id << endl;
            cout << "Jabatan: " << q->info.jabatan << endl;
            cout << "Status : "
                 << (q->info.status ? "Aktif" : "Akan Pensiun") << endl;
            cout << "--------------------------" << endl;
        }
        q = q->next;
    }

    if (!ada) {
        cout << "Tidak ada pegawai sesuai status." << endl;
    }
}
void printPegawaiRentangUmur_103012400148(listDivisi L) {
    string namaDiv;
    int minUmur, maxUmur;

    cout << "Masukkan Nama Divisi: ";
    cin >> namaDiv;

    cout << "Masukkan Umur Minimum: ";
    cin >> minUmur;

    cout << "Masukkan Umur Maksimum: ";
    cin >> maxUmur;

    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
        return;
    }

    adrPegawai q = p->firstPegawai;
    bool ada = false;

    while (q != nullptr) {
        if (q->info.umur >= minUmur && q->info.umur <= maxUmur) {
            ada = true;
            cout << "Nama   : " << q->info.nama << endl;
            cout << "ID     : " << q->info.id << endl;
            cout << "Jabatan: " << q->info.jabatan << endl;
            cout << "Umur   : " << q->info.umur << endl;
            cout << "--------------------------" << endl;
        }
        q = q->next;
    }

    if (!ada) {
        cout << "Tidak ada pegawai dalam rentang umur tersebut." << endl;
    }
}
void cariPegawaiByIdNama_103012400148(listDivisi L) {
    string idCari, namaCari;
    bool ketemu = false;

    cout << "Masukkan ID Pegawai   : ";
    cin >> idCari;
    cout << "Masukkan Nama Pegawai : ";
    cin >> namaCari;

    adrDivisi p = L.first;
    while (p != nullptr) {
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            if (q->info.id == idCari && q->info.nama == namaCari) {
                ketemu = true;
                cout << "==================================" << endl;
                cout << "Divisi : " << p->info.namaDiv << endl;
                cout << "Nama   : " << q->info.nama << endl;
                cout << "ID     : " << q->info.id << endl;
                cout << "Jabatan: " << q->info.jabatan << endl;
                cout << "Umur   : " << q->info.umur << endl;
                cout << "Status : ";
                if(q->info.status == true){
                    cout << "Aktif" << endl;
                }else {
                    cout << "Tidak Aktif" << endl;
                }
                cout << "==================================" << endl;
                return;
            }
            q = q->next;
        }
        p = p->next;
    }

    if (!ketemu) {
        cout << "Pegawai tidak ditemukan!" << endl;
    }
}
void cariPegawaiByDivisiUmur_103012400148(listDivisi L) {
    string namaDiv;
    int umurCari;
    bool ketemu = false;

    cout << "Masukkan Nama Divisi : ";
    cin >> namaDiv;

    cout << "Masukkan Umur Pegawai: ";
    cin >> umurCari;

    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
    if (p == nullptr) {
        cout << "Divisi tidak ditemukan!" << endl;
        return;
    }

    adrPegawai q = p->firstPegawai;
    while (q != nullptr) {
        if (q->info.umur == umurCari) {
            ketemu = true;
            cout << "==================================" << endl;
            cout << "Divisi : " << p->info.namaDiv << endl;
            cout << "Nama   : " << q->info.nama << endl;
            cout << "ID     : " << q->info.id << endl;
            cout << "Jabatan: " << q->info.jabatan << endl;
            cout << "Umur   : " << q->info.umur << endl;
            cout << "Status : " ;
            if(q->info.status == true){
                cout << "Aktif" << endl;
            }else {
                cout << "Tidak Aktif" << endl;
            }
            cout << "==================================" << endl;
        }
        q = q->next;
    }

    if (!ketemu) {
        cout << "Pegawai dengan umur tersebut tidak ditemukan." << endl;
    }
}
void lihatJumlahPegawaiPerDivisi_103012400148(listDivisi L) {
    if (L.first == nullptr) {
        cout << "Data divisi kosong!" << endl;
        return;
    }

    adrDivisi p = L.first;

    cout << "==================================" << endl;
    cout << "--- Jumlah Karyawan Per Divisi ---" << endl;
    cout << "==================================" << endl;

    while (p != nullptr) {
        int count = 0;
        adrPegawai q = p->firstPegawai;

        while (q != nullptr) {
            count++;
            q = q->next;
        }

        cout << "Divisi : " << p->info.namaDiv << endl;
        cout << "Jumlah : " << count << " karyawan" << endl;
        cout << "--------------------------" << endl;

        p = p->next;
    }
}
void lihatRataRataUmurPegawai_103012400148(listDivisi L) {
    if (L.first == nullptr) {
        cout << "Data divisi kosong!" << endl;
        return;
    }

    adrDivisi p = L.first;
    int totalUmur = 0;
    int totalPegawai = 0;

    while (p != nullptr) {
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            totalUmur += q->info.umur;
            totalPegawai++;
            q = q->next;
        }
        p = p->next;
    }

    if (totalPegawai == 0) {
        cout << "Belum ada data pegawai." << endl;
        return;
    }

    int rataRata = totalUmur / totalPegawai;

    cout << "==================================" << endl;
    cout << "Rata-Rata Umur Pegawai" << endl;
    cout << "Total Pegawai : " << totalPegawai << endl;
    cout << "Rata-Rata Umur: " << rataRata << endl;
    cout << "==================================" << endl;
}
void lihatTotalPegawaiAktifNonaktif_103012400148(listDivisi L) {
    if (L.first == nullptr) {
        cout << "Data divisi kosong!" << endl;
        return;
    }

    adrDivisi p = L.first;
    int totalAktif = 0;
    int totalNonaktif = 0;

    while (p != nullptr) {
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            if (q->info.status == true) {
                totalAktif++;
            } else {
                totalNonaktif++;
            }
            q = q->next;
        }
        p = p->next;
    }

    cout << "==================================" << endl;
    cout << "Total Karyawan Berdasarkan Status" << endl;
    cout << "==================================" << endl;
    cout << "Aktif       : " << totalAktif << endl;
    cout << "Tidak Aktif : " << totalNonaktif << endl;
    cout << "Total       : " << (totalAktif + totalNonaktif) << endl;
    cout << "==================================" << endl;
}
void lihatTotalSeluruhPegawai_103012400148(listDivisi L) {
    if (L.first == nullptr) {
        cout << "Data divisi kosong!" << endl;
        return;
    }

    adrDivisi p = L.first;
    int totalPegawai = 0;

    while (p != nullptr) {
        adrPegawai q = p->firstPegawai;
        while (q != nullptr) {
            totalPegawai++;
            q = q->next;
        }
        p = p->next;
    }

    cout << "==================================" << endl;
    cout << "Total Seluruh Karyawan" << endl;
    cout << "==================================" << endl;
    cout << "Jumlah Karyawan : " << totalPegawai << endl;
    cout << "==================================" << endl;
}
void editNamaStatusPegawai_103012400148(listDivisi &L) {
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
    cout << "Status Lama : "
         << (q->info.status ? "Aktif" : "Tidak Aktif") << endl;
    cout << "Masukkan Nama Baru : ";
    cin >> namaBaru;
    q->info.nama = namaBaru;
    cout << "Masukkan Status Baru (1 = Aktif, 0 = Tidak Aktif) : ";
    cin >> statusBaru;
    q->info.status = (statusBaru == 1);
    cout << "Data karyawan berhasil diperbarui." << endl;
}
void hapusPegawaiByID_103012400148(listDivisi &L) {
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
void hapusPegawaiByStatusDivisi_103012400148(listDivisi &L) {
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
void tambahPegawai_103012400148(listDivisi &L) {
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

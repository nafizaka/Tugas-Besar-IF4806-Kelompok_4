#include <iostream>
#include "header.h"

using namespace std;

void mainmenu(){
    cout << "============================================" << endl;
    cout << "          SISTEM APLIKASI KANTOR            " << endl;
    cout << "============================================" << endl;
    cout << " Dibuat oleh:                               " << endl;
    cout << " - Pangeran Clevario Decaesario             " << endl;
    cout << " - Muhammad Nafiz Safaraz D.A               " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "1. Admin                                    " << endl;
    cout << "2. User                                     " << endl;
    cout << "3. Keluar                                   " << endl;
    cout << "--------------------------------------------" << endl;
    cout << " Masukkan pilihan Anda : ";
    int x;
    cin >> x;
    if (x == 1){
        menuAdmin();
    }else if (x == 2){
        menuUser();
    }else if (x == 3){
        cout << "------------- Terima Kasih --------------" << endl;
    }
}

void menuUser() {
    int pilih;
    cout << "============================================" << endl;
    cout << "                 MENU USER                  " << endl;
    cout << "============================================" << endl;
    cout << "1. Lihat Karyawan" << endl;
    cout << "2. Cari Karyawan" << endl;
    cout << "3. Lihat Jumlah Karyawan" << endl;
    cout << "4. Edit Data Karyawan" << endl;
    cout << "5. Kembali Ke Menu Utama" << endl;
    cout << "--------------------------------------------" << endl;
    cout << " Masukkan pilihan Anda : ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            cout << "============================================" << endl;
            cout << "                 MENU USER                  " << endl;
            cout << "============================================" << endl;
            cout << "1. Lihat Semua Karyawan" << endl;
            cout << "2. Lihat Karyawan Berdasarkan Divisi" << endl;
            cout << "3. Lihat Berdasarkan masa kerja (senior / Junior)" << endl;
            cout << "4. Lihat Berdasarkan status (aktif / akan pensiun)" << endl;
            cout << "5. Lihat Berdasarkan rentang umur" << endl;
            cout << "6. Kembali ke Main User" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih;
            switch (pilih){
                case 1:
                    printAllPegawai_103012400148(L);
                    menuUser();
                    return;
                case 2:
                    string namaDiv;
                    cout << "Masukkan Nama Divisi: ";
                    cin >> namaDiv;

                    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
                    if (p == nullptr){
                        cout << "Divisi tidak ditemukan!" << endl;
                    } else {
                        printPegawai_103012430046(p);
                    }
                    return;
                case 3:
                cout << "============================================" << endl;
                cout << "                 MENU USER                  " << endl;
                cout << "============================================" << endl;
                cout << "1. Lihat Karyawan Senior" << endl;
                cout << "2. Lihat Karyawan Junior" << endl;
                cout << "4. Kembali ke Main User" << endl;
                cout << "--------------------------------------------" << endl;
                cout << " Masukkan pilihan Anda : ";
                cin >> pilih;
                switch (pilih){
                    case 1:
                        printPegawaiSeniorJunior_103012400148(L, 1);
                        menuUser();
                        return;
                    case 2:
                        printPegawaiSeniorJunior_103012400148(L, 2);
                        menuUser();
                        return;
                    case 3:
                        menuUser();
                        return;
                }
                case 4:
                    cout << "============================================" << endl;
                    cout << "                 MENU USER                  " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Lihat Karyawan Senior" << endl;
                    cout << "2. Lihat Karyawan Junior" << endl;
                    cout << "4. Kembali ke Main User" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                     cin >> pilih;
                    switch (pilih){
                    case 1:
                        printPegawaiStatus_103012400148(L, 1);
                        menuUser();
                        return;
                    case 2:
                        printPegawaiStatus_103012400148(L, 2);
                        menuUser();
                        return;
                    case 3:
                        menuUser();
                        return;
                }
                case 5:
                    printPegawaiRentangUmur_103012400148(L);
                    menuUser();
                    return;
                case 6:
                    menuUser();
                    return;
            }
        case 2:
            cout << "============================================" << endl;
            cout << "                 MENU USER                  " << endl;
            cout << "============================================" << endl;
            cout << "1. Cari Berdasarkan ID & Nama" << endl;
            cout << "2. Cari Berdasarkan Divisi & Umur" << endl;
            cout << "3. Kembali ke Main User" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih;
            switch (pilih){
                case 1:
                    cariPegawaiByIdNama_103012400148(L);
                    menuUser();
                    return;
                case 2:
                    cariPegawaiByDivisiUmur_103012400148(L);
                    menuUser();
                    return;
                case 3:
                    menuUser();
                    return;
            }
        case 3:
            cout << "============================================" << endl;
            cout << "                 MENU USER                  " << endl;
            cout << "============================================" << endl;
            cout << "1. Lihat Jumlah Karyawan Per Divisi" << endl;
            cout << "2. Lihat Divisi Dengan Karyawan Terbanyak" << endl;
            cout << "3. Lihat Rata-Rata Umur Pegawai" << endl;
            cout << "4. Lihat Total Karyawan ( Aktif / Nonaktif )" << endl;
            cout << "5. Lihat Total Seluruh Karyawan" << endl;
            cout << "6. Kembali ke Main User" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
             cin >> pilih;
            switch (pilih){
                case 1:
                    lihatJumlahPegawaiPerDivisi_103012400148(L);
                    menuUser();
                    return;
                case 2:
                    lihatDivisiTerbanyak_103012400148(L);
                    menuUser();
                    return;
                case 3:
                    lihatRataRataUmurPegawai_103012400148(L);
                    menuUser();
                    return;
                case 4:
                    lihatTotalPegawaiAktifNonaktif_103012400148(L);
                    menuUser();
                    return;
                case 5:
                    lihatTotalSeluruhPegawai_103012400148(L);
                    menuUser();
                    return;
                case 6:
                    menuUser();
                    return;
            }
        case 4:
            cout << "============================================" << endl;
            cout << "                 MENU USER                  " << endl;
            cout << "============================================" << endl;
            cout << "1. Edit Nama Karyawan" << endl;
            cout << "2. Edit Status Karyawan" << endl;
            cout << "3. Hapus Berdasarkan ID" << endl;
            cout << "4. Hapus Berdasarkan Status" << endl;
            cout << "5. Tambah Karyawan" << endl;
            cout << "7. Kembali ke Main User" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih;
            switch (pilih){
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                    menuUser();
                    return;
            }
        case 5:
            mainmenu();
            return;
        default: cout << "Pilihan salah!";
    }
}

void menuAdmin(){
    int pilih, pilih1,pilih2;
    adrDivisi p, prec;
    adrPegawai q, precp;
    listDivisi L;
    Divisi x;
    Pegawai y;
    string nama;
    createListDivisi_103012430046(L);
    cout << "============================================" << endl;
    cout << "                 MENU ADMIN                 " << endl;
    cout << "============================================" << endl;
    cout << "1. Menu Divisi(Parent)" << endl;
    cout << "2. Menu Pegawai(Child)" << endl;
    cout << "3. Kembali ke main menu" << endl;
    cout << "--------------------------------------------" << endl;
    cout << " Masukkan pilihan Anda : ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            cout << "============================================" << endl;
            cout << "                 MENU DIVISI                " << endl;
            cout << "============================================" << endl;
            cout << "1. Insert Divisi" << endl;
            cout << "2. Delete Divisi" << endl;
            cout << "3. Print Divisi" << endl;
            cout << "4. Search Divisi" << endl;
            cout << "5. Kembali ke main menu" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih1;
            switch (pilih1){
                case 1:
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Insert First Divisi" << endl;
                    cout << "2. Insert Last Divisi" << endl;
                    cout << "3. Insert After Divisi" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            inputInfoDivisi(x);
                            p = createElemenDivisi_103012430046(x);
                            insertFirstDivisi_103012430046(L,p);
                        case 2:
                            inputInfoDivisi(x);
                            p = createElemenDivisi_103012430046(x);
                            insertLastDivisi_103012430046(L,p);
                        case 3:
                            inputInfoDivisi(x);
                            p = createElemenDivisi_103012430046(x);
                            cout << "Input Setelah Divisi dengan nama apa? ";
                            cin >> nama;
                            prec = searchDivisi_103012400148(L,nama);
                            insertAfterDivisi_103012430046(L,prec,p);
                        case 4:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 2:
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Delete First Divisi" << endl;
                    cout << "2. Delete Last Divisi" << endl;
                    cout << "3. Delete After Divisi" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            deleteFirstDivisi_103012400148(L,p);
                            if (p!=nullptr){
                            cout << "Divisi dengan nama Divisi: " << p->info.namaDiv << "Berhasil Dihapus.";
                            }
                        case 2:
                            deleteLastDivisi_103012400148(L,p);
                            if (p!=nullptr){
                            cout << "Divisi dengan nama Divisi: " << p->info.namaDiv << "Berhasil Dihapus.";
                            }
                        case 3:
                            cout << "Delete Divisi Setelah Divisi dengan nama apa? ";
                            cin >> nama;
                            prec = searchDivisi_103012400148(L,nama);
                            deleteAfterDivisi_103012400148(L,prec,p);
                            if (p!=nullptr){
                            cout << "Divisi dengan nama Divisi: " << p->info.namaDiv << "Berhasil Dihapus.";
                            }
                        case 4:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 3:
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Print Divisi" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            printDivisi_103012400148(L);
                        case 2:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 4:
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Search Divisi" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            cout << "Mencari Divisi dengan nama apa? ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
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
                        case 2:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 5:
                    menuAdmin();
                default: cout << "Pilihan salah!";
            }
        case 2:
            cout << "============================================" << endl;
            cout << "                MENU PEGAWAI                " << endl;
            cout << "============================================" << endl;
            cout << "1. Insert Pegawai" << endl;
            cout << "2. Delete Pegawai" << endl;
            cout << "3. Print Pegawai" << endl;
            cout << "4. Search Pegawai" << endl;
            cout << "5. Kembali ke main menu" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih1;
            switch (pilih1){
                case 1:
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Insert First Pegawai" << endl;
                    cout << "2. Insert Last Pegawai" << endl;
                    cout << "3. Insert After Pegawai" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            inputInfoPegawai(y);
                            q = createElemenPegawai_103012400148(y);
                            insertFirstPegawai_103012400148(p,q);
                        case 2:
                            cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            inputInfoPegawai(y);
                            q = createElemenPegawai_103012400148(y);
                            insertLastPegawai_103012400148(p,q);
                        case 3:
                            cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            inputInfoPegawai(y);
                            q = createElemenPegawai_103012400148(y);
                            cout << "Input Pegawai Setelah Pegawai dengan ID apa? ";
                            cin >> nama;
                            precp = searchPegawai_103012430046(p,nama);
                            insertAfterPegawai_103012400148(p,precp,q);
                        case 4:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 2:
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Delete First Pegawai" << endl;
                    cout << "2. Delete Last Pegawai" << endl;
                    cout << "3. Delete After Pegawai" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            cout << "Nama Divisi yang ingin Pegawainya dihapus: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            deleteFirstPegawai_103012430046(p,q);
                            if (q!=nullptr){
                                cout << "Pegawai dengan nama: " << q->info.nama << "Berhasil Dihapus.";
                            }
                        case 2:
                            cout << "Nama Divisi yang ingin Pegawainya dihapus: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            deleteLastPegawai_103012430046(p,q);
                            if (q!=nullptr){
                                cout << "Pegawai dengan nama: " << q->info.nama << "Berhasil Dihapus.";
                            }
                        case 3:
                            cout << "Nama Divisi yang ingin Pegawainya dihapus: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            cout << "Menghapus Pegawai Setelah Pegawai dengan ID apa? ";
                            cin >> nama;
                            precp = searchPegawai_103012430046(p,nama);
                            deleteAfterPegawai_103012430046(p,precp,q);
                            if (q!=nullptr){
                                cout << "Pegawai dengan nama: " << q->info.nama << "Berhasil Dihapus.";
                            }
                        case 4:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 3:
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Print Pegawai" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            cout << "Nama Divisi dari pegawai yang ingin ditampilkan: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            printPegawai_103012430046(p);
                        case 2:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 4:
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Search Pegawai" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            cout << "Nama Divisi dari pegawai yang ingin dicari: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            cout << "Mencari Pegawai dengan id?: ";
                            cin >> nama;
                            q = searchPegawai_103012430046(p,nama);
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
                        case 2:
                            menuAdmin();
                        default: cout << "Pilihan salah!";
                    }
                case 5:
                    menuAdmin();
                default: cout << "Pilihan salah!";
            }
        case 3: mainmenu();
        default: cout << "Pilihan salah!";
    }
}

void inputInfoDivisi(Divisi &x){
    int idx;
    cout << "Nama Divisi: ";
    cin >> x.namaDiv;
    cout << "ID Divisi: ";
    cin >> x.ID_Div;
    cout << "Nama Kepala Divisi: ";
    cin >> x.kepalaDiv;
    cout << "Status Divisi(1.Aktif || 2.Tidak): ";
    cin >> idx;
    x.statusDiv = (idx == 1);
    cout << "Lokasi Divisi: ";
    cin >> x.lokasiDiv;
}
void inputInfoPegawai(Pegawai &y){
    int idx;
    cout << "Nama Divisi: ";
    cin >> y.nama;
    cout << "ID Pegawai: ";
    cin >> y.id;
    cout << "Jabatan Pegawai: ";
    cin >> y.jabatan;
    cout << "Status Pegawai(1.Aktif || 2.Tidak): ";
    cin >> idx;
    y.statusDiv = (idx == 1);
    cout << "Gaji Pegawai: ";
    cin >> y.gaji;
}

void dummy(listDivisi &L){
    int idx,i,juml,jum;
    adrDivisi p;
    adrPegawai q;
    Divisi x;
    Pegawai y;
    idx = 1;
    cout << "Jumlah Divisi yang ingin dibuat: ";
    cin >> juml;
    for (i=0;i<juml;i++){
        inputInfoDivisi(x);
        p = createElemenDivisi_103012430046(x);
        insertFirstDivisi_103012430046(L,p);
    }
    while (idx == 1){
        cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
        cin >> nama;
        cout << "Jumlah Pegawai Yang ingin dimasukkan: ";
        cin >> jum;
        p = searchDivisi_103012400148(L,nama);
        i = 0;
        while (i<jum && p != nullptr){
            inputInfoPegawai(y);
            q = createElemenPegawai_103012400148(y);
            insertLastPegawai_103012400148(p,q);
        }
        cout << "Apakah ingin menambahkan pegawai lagi?" << endl;
        cout << "(1.Iya || 2.Tidak)?"
        cin >> idx;
    }
}

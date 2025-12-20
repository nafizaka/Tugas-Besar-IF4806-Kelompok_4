#include <iostream>
#include "header.h"

using namespace std;

void mainmenu(listDivisi &L){
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
    switch(x){
        case 1:
            system("cls");
            menuAdmin(L);
            break;
        case 2:
            system("cls");
            menuUser(L);
            break;
        case 3:
            cout << "------------- Terima Kasih --------------" << endl;
            return;
        default:
            cout << "------------ Pilihan Salah --------------" << endl;
            mainmenu(L);
            break;
    }
}

void menuUser(listDivisi &L) {
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
            system("cls");
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
                    system("cls");
                    printAllPegawai_103012400148(L);
                    menuUser(L);
                    break;
                case 2: {
                    system("cls");
                    printDivisi_103012400148(L);
                    string namaDiv;
                    cout << "Masukkan Nama Divisi: ";
                    cin >> namaDiv;

                    adrDivisi p = searchDivisi_103012400148(L, namaDiv);
                    if (p == nullptr){
                        cout << "Divisi tidak ditemukan!" << endl;
                    } else {
                        printPegawai_103012430046(p);
                    }

                    menuUser(L);
                    break;
                }
                case 3:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU USER                  " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Lihat Karyawan Senior" << endl;
                    cout << "2. Lihat Karyawan Junior" << endl;
                    cout << "3. Kembali ke Main User" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih;
                    switch (pilih){
                        case 1:
                            system("cls");
                            printPegawaiSeniorJunior_103012400148(L, 1);
                            menuUser(L);
                            break;
                        case 2:
                            system("cls");
                            printPegawaiSeniorJunior_103012400148(L, 2);
                            menuUser(L);
                            break;
                        case 3:
                            system("cls");
                            menuUser(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuUser(L);
                            break;
                }
                break;
                case 4:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU USER                  " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Lihat Karyawan Aktif" << endl;
                    cout << "2. Lihat Karyawan Tidak Aktif" << endl;
                    cout << "3. Kembali ke Main User" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih;
                    switch (pilih){
                    case 1:
                        system("cls");
                        printDivisi_103012400148(L);
                        printPegawaiStatus_103012400148(L, 1);
                        menuUser(L);
                        break;
                    case 2:
                        system("cls");
                        printDivisi_103012400148(L);
                        printPegawaiStatus_103012400148(L, 2);
                        menuUser(L);
                        break;
                    case 3:
                        system("cls");
                        menuUser(L);
                        break;
                    default:
                        system("cls");
                        cout << "Pilihan salah!" << endl;
                        menuUser(L);
                        break;
                }
                break;
                case 5:
                    system("cls");
                    printDivisi_103012400148(L);
                    printPegawaiRentangUmur_103012400148(L);
                    menuUser(L);
                    break;
                case 6:
                    system("cls");
                    menuUser(L);
                    break;
                default:
                    system("cls");
                    cout << "Pilihan salah!" << endl;
                    menuUser(L);
                    break;
            }
            break;
        case 2:
            system("cls");
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
                    system("cls");
                    cariPegawaiByIdNama_103012400148(L);
                    menuUser(L);
                    break;
                case 2:
                    system("cls");
                    cariPegawaiByDivisiUmur_103012400148(L);
                    menuUser(L);
                    break;
                case 3:
                    system("cls");
                    menuUser(L);
                    break;
                default:
                    system("cls");
                    cout << "Pilihan salah!" << endl;
                    menuUser(L);
                    break;
            }
            break;
        case 3:
            system("cls");
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
                    system("cls");
                    lihatJumlahPegawaiPerDivisi_103012400148(L);
                    menuUser(L);
                    break;
                case 2:
                    system("cls");
                    lihatDivisiTerbanyak_103012400148(L);
                    menuUser(L);
                    break;
                case 3:
                    system("cls");
                    lihatRataRataUmurPegawai_103012400148(L);
                    menuUser(L);
                    break;
                case 4:
                    system("cls");
                    lihatTotalPegawaiAktifNonaktif_103012400148(L);
                    menuUser(L);
                    break;
                case 5:
                    system("cls");
                    lihatTotalSeluruhPegawai_103012400148(L);
                    menuUser(L);
                    break;
                case 6:
                    system("cls");
                    menuUser(L);
                    break;
                default:
                    system("cls");
                    cout << "Pilihan salah!" << endl;
                    menuUser(L);
                    break;
            }
            break;
        case 4:
            system("cls");
            cout << "============================================" << endl;
            cout << "                 MENU USER                  " << endl;
            cout << "============================================" << endl;
            cout << "1. Edit Nama & Status Karyawan" << endl;
            cout << "2. Hapus Berdasarkan ID" << endl;
            cout << "3. Hapus Berdasarkan Status" << endl;
            cout << "4. Tambah Karyawan" << endl;
            cout << "5. Kembali ke Main User" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih;
            switch (pilih){
                case 1:
                    system("cls");
                    printAllPegawai_103012400148(L);
                    editNamaStatusPegawai_103012400148(L);
                    menuUser(L);
                    break;
                case 2:
                    system("cls");
                    printAllPegawai_103012400148(L);
                    hapusPegawaiByID_103012400148(L);
                    menuUser(L);
                    break;
                case 3:
                    system("cls");
                    printDivisi_103012400148(L);
                    hapusPegawaiByStatusDivisi_103012400148(L);
                    menuUser(L);
                    break;
                case 4:
                    system("cls");
                    tambahPegawai_103012430046(L);
                    menuUser(L);
                    break;
                case 5:
                    system("cls");
                    menuUser(L);
                    break;
                default:
                    system("cls");
                    cout << "Pilihan salah!" << endl;
                    menuUser(L);
                    break;
            }
            break;
        case 5:
            system("cls");
            mainmenu(L);
            break;
        default:
            system("cls");
            cout << "Pilihan salah!" << endl;
            menuUser(L);
            break;
    }
}

void menuAdmin(listDivisi &L){
    int pilih, pilih1,pilih2;
    adrDivisi p, prec;
    adrPegawai q, precp;
    Divisi x;
    Pegawai y;
    string nama;
    cout << "============================================" << endl;
    cout << "                 MENU ADMIN                 " << endl;
    cout << "============================================" << endl;
    cout << "1. Menu Divisi(Parent)" << endl;
    cout << "2. Menu Pegawai(Child)" << endl;
    cout << "3. Reset List" << endl;
    cout << "4. Kembali ke main menu" << endl;
    cout << "--------------------------------------------" << endl;
    cout << " Masukkan pilihan Anda : ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            system("cls");
            cout << "============================================" << endl;
            cout << "                 MENU DIVISI                " << endl;
            cout << "============================================" << endl;
            cout << "1. Insert Divisi" << endl;
            cout << "2. Delete Divisi" << endl;
            cout << "3. Print Divisi" << endl;
            cout << "4. Search Divisi" << endl;
            cout << "5. Edit Divisi" << endl;
            cout << "6. Kembali ke menu Admin" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih1;
            switch (pilih1){
                case 1:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Insert First Divisi" << endl;
                    cout << "2. Insert Last Divisi" << endl;
                    cout << "3. Insert After Divisi" << endl;
                    cout << "4. Kembali ke menu Divisi" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            inputInfoDivisi(x);
                            p = createElemenDivisi_103012430046(x);
                            insertFirstDivisi_103012430046(L,p);
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            inputInfoDivisi(x);
                            p = createElemenDivisi_103012430046(x);
                            insertLastDivisi_103012430046(L,p);
                            menuAdmin(L);
                            break;
                        case 3:
                            system("cls");
                            inputInfoDivisi(x);
                            p = createElemenDivisi_103012430046(x);
                            cout << "Input Setelah Divisi dengan nama apa? ";
                            cin >> nama;
                            prec = searchDivisi_103012400148(L,nama);
                            insertAfterDivisi_103012430046(L,prec,p);
                            menuAdmin(L);
                            break;
                        case 4:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 2:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Delete First Divisi" << endl;
                    cout << "2. Delete Last Divisi" << endl;
                    cout << "3. Delete After Divisi" << endl;
                    cout << "4. Kembali ke menu Divisi" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            deleteFirstDivisi_103012400148(L,p);
                            if (p!=nullptr){
                                cout << "Divisi dengan nama Divisi: " << p->info.namaDiv << "Berhasil Dihapus.";
                                menuAdmin(L);
                            }
                            break;
                        case 2:
                            system("cls");
                            deleteLastDivisi_103012400148(L,p);
                            if (p!=nullptr){
                                cout << "Divisi dengan nama Divisi: " << p->info.namaDiv << "Berhasil Dihapus.";
                                menuAdmin(L);
                            }
                            break;
                        case 3:
                            system("cls");
                            cout << "Delete Divisi Setelah Divisi dengan nama apa? ";
                            cin >> nama;
                            prec = searchDivisi_103012400148(L,nama);
                            deleteAfterDivisi_103012400148(L,prec,p);
                            if (p!=nullptr){
                                cout << "Divisi dengan nama Divisi: " << p->info.namaDiv << "Berhasil Dihapus.";
                                menuAdmin(L);
                            }
                            break;
                        case 4:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 3:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Print Divisi" << endl;
                    cout << "2. Kembali ke menu Divisi" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            printDivisi_103012400148(L);
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 4:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Search Divisi" << endl;
                    cout << "2. Kembali ke menu Divisi" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            cout << "Mencari Divisi dengan nama apa? ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!=nullptr){
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
                            } else {
                                cout << "Divisi tidak ditemukan!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 5:
                     system("cls");
                    cout << "============================================" << endl;
                    cout << "                 MENU DIVISI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Edit Status Divisi" << endl;
                    cout << "2. Kembali ke menu Divisi" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            editNamaStatusDivisi_103012430046(L);
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 6:
                    system("cls");
                    menuAdmin(L);
                    break;
                default:
                    system("cls");
                    cout << "Pilihan salah!" << endl;
                    menuAdmin(L);
                    break;
            }
            break;
        case 2:
            system("cls");
            cout << "============================================" << endl;
            cout << "                MENU PEGAWAI                " << endl;
            cout << "============================================" << endl;
            cout << "1. Insert Pegawai" << endl;
            cout << "2. Delete Pegawai" << endl;
            cout << "3. Print Pegawai" << endl;
            cout << "4. Search Pegawai" << endl;
            cout << "5. Edit Pegawai" << endl;
            cout << "6. Kembali ke menu Admin" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih1;
            switch (pilih1){
                case 1:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Insert First Pegawai" << endl;
                    cout << "2. Insert Last Pegawai" << endl;
                    cout << "3. Insert After Pegawai" << endl;
                    cout << "4. Kembali ke menu Pegawai" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!= nullptr){
                                inputInfoPegawai(y);
                                q = createElemenPegawai_103012400148(y);
                                insertFirstPegawai_103012400148(p,q);
                            } else {
                                cout << "Divisi tidak ada!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!=nullptr){
                                inputInfoPegawai(y);
                                q = createElemenPegawai_103012400148(y);
                                insertLastPegawai_103012400148(p,q);
                            } else {
                                cout << "Divisi tidak ada!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 3:
                            system("cls");
                            cout << "Nama Divisi yang ingin ditambahkan Pegawai: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!=nullptr){
                                inputInfoPegawai(y);
                                q = createElemenPegawai_103012400148(y);
                                cout << "Input Pegawai Setelah Pegawai dengan ID apa? ";
                                cin >> nama;
                                precp = searchPegawai_103012430046(p,nama);
                                insertAfterPegawai_103012400148(p,precp,q);
                            } else {
                                cout << "Divisi tidak ada!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 4:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 2:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Delete First Pegawai" << endl;
                    cout << "2. Delete Last Pegawai" << endl;
                    cout << "3. Delete After Pegawai" << endl;
                    cout << "4. Kembali ke menu Pegawai" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            cout << "Nama Divisi yang ingin Pegawainya dihapus: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!=nullptr){
                                deleteFirstPegawai_103012430046(p,q);
                                if (q!=nullptr){
                                    cout << "Pegawai dengan nama: " << q->info.nama << "Berhasil Dihapus.";
                                }
                            } else {
                                cout << "Divisi tidak ada!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            cout << "Nama Divisi yang ingin Pegawainya dihapus: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!=nullptr){
                                deleteLastPegawai_103012430046(p,q);
                                if (q!=nullptr){
                                    cout << "Pegawai dengan nama: " << q->info.nama << "Berhasil Dihapus.";
                                }
                            } else {
                                cout << "Divisi tidak ada!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 3:
                            system("cls");
                            cout << "Nama Divisi yang ingin Pegawainya dihapus: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            if (p!=nullptr){
                                cout << "Menghapus Pegawai Setelah Pegawai dengan ID apa? ";
                                cin >> nama;
                                precp = searchPegawai_103012430046(p,nama);
                                deleteAfterPegawai_103012430046(p,precp,q);
                                if (q!=nullptr){
                                    cout << "Pegawai dengan nama: " << q->info.nama << "Berhasil Dihapus.";
                                }
                            } else {
                                cout << "Divisi tidak ada!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 4:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 3:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Print Pegawai" << endl;
                    cout << "2. Kembali ke menu Pegawai" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            cout << "Nama Divisi dari pegawai yang ingin ditampilkan: ";
                            cin >> nama;
                            p = searchDivisi_103012400148(L,nama);
                            printPegawai_103012430046(p);
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 4:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Search Pegawai" << endl;
                    cout << "2. Kembali ke menu Pegawai" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            cout << "Nama Divisi dari pegawai yang ingin dicari: ";
                            cin >> nama;
                            p = nullptr;
                            p = searchDivisi_103012400148(L,nama);
                            cout << "Mencari Pegawai dengan id?: ";
                            cin >> nama;
                            if (p != nullptr){
                                q = nullptr;
                                q = searchPegawai_103012430046(p,nama);
                            }
                            if (q != nullptr && p != nullptr){
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
                            } else {
                                cout << "Pegawai tidak ditemukan!" << endl;
                            }
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 5:
                    system("cls");
                    cout << "============================================" << endl;
                    cout << "                MENU PEGAWAI                " << endl;
                    cout << "============================================" << endl;
                    cout << "1. Edit Status Pegawai" << endl;
                    cout << "2. Kembali ke menu Pegawai" << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << " Masukkan pilihan Anda : ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:
                            system("cls");
                            editNamaStatusPegawai_103012430046(L);
                            menuAdmin(L);
                            break;
                        case 2:
                            system("cls");
                            menuAdmin(L);
                            break;
                        default:
                            system("cls");
                            cout << "Pilihan salah!" << endl;
                            menuAdmin(L);
                            break;
                    }
                    break;
                case 6:
                    system("cls");
                    menuAdmin(L);
                    break;
                default:
                    system("cls");
                    cout << "Pilihan salah!" << endl;
                    menuAdmin(L);
                            break;
            }
            break;
        case 3:
            system("cls");
            cout << "============================================" << endl;
            cout << "                 MENU ADMIN                 " << endl;
            cout << "============================================" << endl;
            cout << "1. Reset List Divisi(Parent)" << endl;
            cout << "2. Reset List Pegawai(Child)" << endl;
            cout << "3. Kembali ke menu Divisi" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
            cin >> pilih;
            if (pilih == 1) {
                system("cls");
                createListDivisi_103012430046(L);
                cout << "List Divisi berhasil di reset!" << endl;
            } else if (pilih == 2){
                system("cls");
                printDivisi_103012400148(L);
                cout << "Nama Divisi dari pegawai yang ingin direset: ";
                cin >> nama;
                p = searchDivisi_103012400148(L, nama);
                if (p == nullptr){
                    cout << "Divisi tidak ditemukan!" << endl;
                } else {
                    p->firstPegawai = nullptr;
                    p->info.jumPegawai = 0;
                    cout << "List Pegawai berhasil di reset!" << endl;
                }
                menuAdmin(L);
            } else if (pilih == 3) {
                system("cls");
                menuAdmin(L);
            } else {
                system("cls");
                cout << "Pilihan salah!" << endl;
                menuAdmin(L);
            }
            break;
        case 4:
            system("cls");
            mainmenu(L);
            break;
        default:
            system("cls");
            cout << "Pilihan salah!" << endl;
            menuAdmin(L);
            break;
    }
}

void inputInfoDivisi(Divisi &x){
    string idx;
    cout << "Nama Divisi: ";
    cin >> x.namaDiv;
    cout << "ID Divisi: ";
    cin >> x.ID_Div;
    cout << "Nama Kepala Divisi: ";
    cin >> x.kepalaDiv;
    cout << "Status Divisi (1.Aktif || 2.Tidak): ";
    cin >> idx;
    if (idx == "1")
        x.statusDiv = true;
    else if (idx == "2")
        x.statusDiv = false;
    else
        x.statusDiv = true;
    cout << "Lokasi Divisi: ";
    cin >> x.lokasiDiv;
}
void inputInfoPegawai(Pegawai &y){
    string idx;
    cout << "Nama Pegawai: ";
    cin >> y.nama;
    cout << "ID Pegawai: ";
    cin >> y.id;
    cout << "Jabatan Pegawai: ";
    cin >> y.jabatan;
    cout << "Umur Pegawai: ";
    cin >> y.umur;
    cout << "Lama Bekerja (tahun): ";
    cin >> y.LamaBekerja;
    cout << "Status Pegawai (1.Aktif || 2.Tidak): ";
    cin >> idx;
    if (idx == "1")
        y.status = true;
    else if (idx == "2")
        y.status = false;
    else
        y.status = true;
    cout << "Gaji Pegawai: ";
    cin >> y.gaji;
}
void dummy(listDivisi &L){
    createListDivisi_103012430046(L);
    Divisi d1 = {"IT", "D01", "Budi", 0, true, "Lt.1"};
    Divisi d2 = {"HR", "D02", "Sari", 0, true, "Lt.2"};
    Divisi d3 = {"Finance", "D03", "Andi", 0, true, "Lt.3"};
    Divisi d4 = {"Marketing", "D04", "Rina", 0, true, "Lt.4"};
    adrDivisi pIT  = createElemenDivisi_103012430046(d1);
    adrDivisi pHR  = createElemenDivisi_103012430046(d2);
    adrDivisi pFIN = createElemenDivisi_103012430046(d3);
    adrDivisi pMKT = createElemenDivisi_103012430046(d4);
    insertLastDivisi_103012430046(L, pIT);
    insertLastDivisi_103012430046(L, pHR);
    insertLastDivisi_103012430046(L, pFIN);
    insertLastDivisi_103012430046(L, pMKT);


    adrPegawai q;
    Pegawai p1 = {"Akbar","P01","IT Staff",25,3,7000000,true};
    q = createElemenPegawai_103012400148(p1);
    insertLastPegawai_103012400148(pIT, q);
    pIT->info.jumPegawai++;
    Pegawai p2 = {"Satria","P02","IT Staff",24,2,6500000,true};
    q = createElemenPegawai_103012400148(p2);
    insertLastPegawai_103012400148(pIT, q);
    pIT->info.jumPegawai++;
    Pegawai p3 = {"Jonathan","P03","IT Support",30,5,8000000,true};
    q = createElemenPegawai_103012400148(p3);
    insertLastPegawai_103012400148(pIT, q);
    pIT->info.jumPegawai++;
    Pegawai p4 = {"Raihan","P04","HR Staff",26,2,6000000,true};
    q = createElemenPegawai_103012400148(p4);
    insertLastPegawai_103012400148(pHR, q);
    pHR->info.jumPegawai++;
    Pegawai p5 = {"Fathir","P05","HR Staff",28,4,6200000,true};
    q = createElemenPegawai_103012400148(p5);
    insertLastPegawai_103012400148(pHR, q);
    pHR->info.jumPegawai++;
    Pegawai p6 = {"Thoriq","P06","Finance Staff",32,6,7500000,true};
    q = createElemenPegawai_103012400148(p6);
    insertLastPegawai_103012400148(pFIN, q);
    pFIN->info.jumPegawai++;
    Pegawai p7 = {"Maya","P07","Finance Staff",29,4,7200000,true};
    q = createElemenPegawai_103012400148(p7);
    insertLastPegawai_103012400148(pFIN, q);
    pFIN->info.jumPegawai++;
    Pegawai p8 = {"Fajar","P08","Finance Staff",27,3,6800000,true};
    q = createElemenPegawai_103012400148(p8);
    insertLastPegawai_103012400148(pFIN, q);
    pFIN->info.jumPegawai++;
    Pegawai p9 = {"Nina","P09","Marketing Staff",26,2,6500000,true};
    q = createElemenPegawai_103012400148(p9);
    insertLastPegawai_103012400148(pMKT, q);
    pMKT->info.jumPegawai++;
    Pegawai p10 = {"Riko","P10","Marketing Staff",24,1,6000000,true};
    q = createElemenPegawai_103012400148(p10);
    insertLastPegawai_103012400148(pMKT, q);
    pMKT->info.jumPegawai++;
    Pegawai p11 = {"Agus","P11","IT Manager",55,25,12000000,false};
    q = createElemenPegawai_103012400148(p11);
    insertLastPegawai_103012400148(pIT, q);
    pIT->info.jumPegawai++;
    Pegawai p12 = {"Wawan","P12","IT Staff",50,22,9000000,false};
    q = createElemenPegawai_103012400148(p12);
    insertLastPegawai_103012400148(pIT, q);
    pIT->info.jumPegawai++;
    Pegawai p13 = {"Julian","P13","HR Manager",54,24,11000000,false};
    q = createElemenPegawai_103012400148(p13);
    insertLastPegawai_103012400148(pHR, q);
    pHR->info.jumPegawai++;
    Pegawai p14 = {"Amad","P14","HR Staff",49,20,8500000,false};
    q = createElemenPegawai_103012400148(p14);
    insertLastPegawai_103012400148(pHR, q);
    pHR->info.jumPegawai++;
    Pegawai p15 = {"Dedi","P15","Admin HR",52,23,8000000,false};
    q = createElemenPegawai_103012400148(p15);
    insertLastPegawai_103012400148(pHR, q);
    pHR->info.jumPegawai++;
    Pegawai p16 = {"Mulyadi","P16","Finance Manager",56,28,13000000,false};
    q = createElemenPegawai_103012400148(p16);
    insertLastPegawai_103012400148(pFIN, q);
    pFIN->info.jumPegawai++;
    Pegawai p17 = {"Steve","P17","Finance Staff",53,25,9500000,false};
    q = createElemenPegawai_103012400148(p17);
    insertLastPegawai_103012400148(pFIN, q);
    pFIN->info.jumPegawai++;
    Pegawai p18 = {"Nafiz","P18","Accounting Staff",51,22,9000000,false};
    q = createElemenPegawai_103012400148(p18);
    insertLastPegawai_103012400148(pFIN, q);
    pFIN->info.jumPegawai++;
    Pegawai p19 = {"Budi","P19","Marketing Manager",55,26,11500000,false};
    q = createElemenPegawai_103012400148(p19);
    insertLastPegawai_103012400148(pMKT, q);
    pMKT->info.jumPegawai++;
    Pegawai p20 = {"Bambang","P20","Marketing Staff",50,21,8800000,false};
    q = createElemenPegawai_103012400148(p20);
    insertLastPegawai_103012400148(pMKT, q);
    pMKT->info.jumPegawai++;
}

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

using namespace std;
typedef struct elmDivisi *adrDivisi;
typedef struct elemenPegawai *adrPegawai;

struct Divisi {
    string namaDiv;
    string ID_Div;
    string kepalaDiv;
    int jumPegawai;
    bool statusDiv;
    string lokasiDiv;
};

struct Pegawai {
    string nama;
    string id;
    string jabatan;
    int umur;
    int LamaBekerja;
    int gaji;
    bool status;
};

struct elmDivisi {
    Divisi info;
    adrDivisi next;
    adrDivisi prev;
    adrPegawai firstPegawai;
};

struct elemenPegawai {
    Pegawai info;
    adrPegawai next;
};

struct listDivisi {
    adrDivisi first;
    adrDivisi last;
};
//Fitur Divisi
void createListDivisi_103012430046(listDivisi &L);
bool isEmptyDivisi_103012430046(listDivisi L);
adrDivisi createElemenDivisi_103012430046(Divisi x);
void insertFirstDivisi_103012430046(listDivisi &L, adrDivisi p);
void insertLastDivisi_103012430046(listDivisi &L, adrDivisi p);
void insertAfterDivisi_103012430046(listDivisi &L, adrDivisi prec, adrDivisi p);
void deleteFirstDivisi_103012400148(listDivisi &L, adrDivisi &p);
void deleteLastDivisi_103012400148(listDivisi &L, adrDivisi &p);
void deleteAfterDivisi_103012400148(listDivisi &L, adrDivisi Prec, adrDivisi &p);
adrDivisi searchDivisi_103012400148(listDivisi L, string nama);
void printDivisi_103012400148(listDivisi L);
//Fitur Pegawai
adrPegawai createElemenPegawai_103012400148(Pegawai x);
bool isEmptyPegawai_103012400148(adrDivisi p);
void insertFirstPegawai_103012400148(adrDivisi &p, adrPegawai q);
void insertLastPegawai_103012400148(adrDivisi &p, adrPegawai q);
void insertAfterPegawai_103012400148(adrDivisi &p, adrPegawai prec, adrPegawai q);
void deleteFirstPegawai_103012430046(adrDivisi &p, adrPegawai &q);
void deleteLastPegawai_103012430046(adrDivisi &p, adrPegawai &q);
void deleteAfterPegawai_103012430046(adrDivisi &p, adrPegawai prec, adrPegawai &q);
adrPegawai searchPegawai_103012430046(adrDivisi p, string id);
void printPegawai_103012430046(adrDivisi p);

// mencari pegawai berdasarkan divisi & umur;
void cariPegawaiByDivisiUmur_103012400148(listDivisi L);
// mencari pegawai berdasarkan id & nama
void cariPegawaiByIdNama_103012400148(listDivisi L);
// menampilkan pegawai junior / senior
void printPegawaiSeniorJunior_103012400148(listDivisi L, int tipe);
// menampilkan status pegawai
void printPegawaiStatus_103012400148(listDivisi L, int mode);
// menampilkan pegawai dengan rentang umur tertentu
void printPegawaiRentangUmur_103012400148(listDivisi L);
// menambahkan semua pegawai dari setiap divisi
void printAllPegawai_103012400148(listDivisi L);
// lihat jumlah pegawai per divisi
void lihatJumlahPegawaiPerDivisi_103012400148(listDivisi L);
// lihat divisi dengan jumlah pegawai terbanyak
void lihatDivisiTerbanyak_103012400148(listDivisi L);
// lihat jumlah rata-rata umur pegawai
void lihatRataRataUmurPegawai_103012400148(listDivisi L);
// lihat jumlah pegawai aktif & tidak aktif
void lihatTotalPegawaiAktifNonaktif_103012400148(listDivisi L);
// lihat jumlah seluruh pegawai
void lihatTotalSeluruhPegawai_103012400148(listDivisi L);
// mengubah nama atau status pegawai
void editNamaStatusPegawai_103012400148(listDivisi &L);
// menghapus pegawai berdasarkan id & divisi
void hapusPegawaiByID_103012400148(listDivisi &L);
// menambah pegawai baru
void tambahPegawai_103012400148(listDivisi &L);
// menghapus berdasarkan status
void hapusPegawaiByStatusDivisi_103012400148(listDivisi &L);




// Main menu admin
void mainmenu();
// Main menu user
void menuUser(listDivisi &L);
// Main menu admin
void menuAdmin();
// Prosedur Tambahan
void dummy(listDivisi &L);
void inputInfoDivisi(Divisi &x);
void inputInfoPegawai(Pegawai &y);


#endif // HEADER_H_INCLUDED

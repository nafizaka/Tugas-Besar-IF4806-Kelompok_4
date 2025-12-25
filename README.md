# Tugas-Besar-IF-48-06-Kelompok_4  
## Sistem Manajemen Pegawai & Divisi Menggunakan Multi-Linked List

---

## 📌 Deskripsi Tugas

**TOPIK 1**

Rancanglah **multi-linked list** yang memodelkan **pegawai** dan **divisi** yang ada pada sebuah perusahaan.  
Seorang pegawai **hanya dapat bekerja dalam satu divisi**, sedangkan dalam **satu divisi terdapat lebih dari satu pegawai**.  
Program ditujukan untuk **manajemen data pegawai**.

Berdasarkan ketentuan tersebut, program ini dikembangkan menggunakan struktur data **multi-linked list** untuk merepresentasikan relasi *one-to-many* antara divisi dan pegawai.

---

## 👥 Nama Kelompok

- **Pangeran Clevario Decaesario**  
- **Muhammad Nafiz Safaraz D.A**

---

## 🎯 Tujuan Program

Tujuan dari pembuatan program ini adalah:
1. Mengimplementasikan struktur data **multi-linked list** dalam bahasa C++.
2. Memodelkan hubungan antara **Divisi** dan **Pegawai** sesuai studi kasus perusahaan.
3. Mengelola data pegawai secara terstruktur melalui operasi tambah, hapus, cari, dan tampil.
4. Melatih pemahaman penggunaan pointer dan relasi antar node.

---

## 🧠 Konsep Sistem

Dalam sistem ini:
- **Satu Divisi** dapat memiliki **banyak Pegawai**  
- **Satu Pegawai** hanya terhubung ke **satu Divisi**

Relasi tersebut direpresentasikan dengan:
- Node **Divisi** yang menyimpan daftar pegawai
- Node **Pegawai** yang menyimpan pointer ke divisinya

Struktur ini memungkinkan penelusuran data:
- Dari divisi ke seluruh pegawai
- Dari pegawai ke divisinya

---

## ⚙️ Fitur Program

Program berbasis **terminal (CLI)** dan menyediakan fitur:
- Menambah data divisi
- Menambah data pegawai ke divisi tertentu
- Menampilkan seluruh divisi beserta pegawainya
- Mencari data pegawai
- Menghapus data pegawai
- Menghapus divisi beserta seluruh pegawainya

---

## 💡 Struktur Data (Multi-Linked List)

### 📌 Node Divisi
Setiap divisi memiliki:
- Nama divisi
- Pointer ke pegawai pertama dalam divisi
- Pointer ke divisi berikutnya

```cpp
struct Divisi {
    string namaDivisi;
    Pegawai* firstPegawai;
    Divisi* nextDivisi;
};
📌 Node Pegawai
Setiap pegawai memiliki:

Nama pegawai

ID pegawai

Pointer ke divisi tempat bekerja

Pointer ke pegawai berikutnya dalam divisi yang sama

cpp
Copy code
struct Pegawai {
    string namaPegawai;
    int idPegawai;
    Divisi* divisiPegawai;
    Pegawai* nextPegawai;
};
📌 Relasi Data
nginx
Copy code
Divisi
 ├── Pegawai 1
 ├── Pegawai 2
 └── Pegawai 3
Struktur ini memastikan setiap pegawai terhubung tepat ke satu divisi, dan setiap divisi dapat menampung banyak pegawai.

📁 Struktur Project
css
Copy code
Tugas-Besar-IF-48-06-Kelompok_4/
├── main.cpp
├── divisi.h
├── divisi.cpp
├── pegawai.h
├── pegawai.cpp
└── README.md
🚀 Cara Menjalankan Program
🛠️ Prasyarat
Compiler C++ (g++, clang, atau MSVC)

📌 Kompilasi
bash
Copy code
g++ -std=c++17 main.cpp divisi.cpp pegawai.cpp -o manajemen
▶️ Jalankan
bash
Copy code
./manajemen
Program akan menampilkan menu interaktif pada terminal.

📌 Contoh Tampilan Menu
markdown
Copy code
===== SISTEM MANAJEMEN PEGAWAI =====
1. Tambah Divisi
2. Tambah Pegawai
3. Tampilkan Semua Data
4. Cari Pegawai
5. Hapus Pegawai
6. Hapus Divisi
7. Keluar
Pilih menu >>
🧾 Kesimpulan
Program ini berhasil mengimplementasikan struktur data multi-linked list untuk memodelkan hubungan pegawai dan divisi sesuai dengan ketentuan soal.
Pendekatan ini efektif untuk mengelola data pegawai dalam suatu perusahaan dengan relasi one-to-many.

📚 Catatan
Repository ini dibuat sebagai bagian dari Tugas Besar Mata Kuliah Struktur Data (IF-48-06) dan berfokus pada penerapan konsep multi-linked list menggunakan bahasa pemrograman C++.

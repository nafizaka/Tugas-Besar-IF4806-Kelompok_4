void mainmenu(){
    cout << "----- Menu Aplikasi Kantor -----" << endl;
    cout << "-------------- By  -------------" << endl;
    cout << "--Pangeran Clevario Decaesario--" << endl;
    cout << "---Muhammad Nafiz Safaraz D.A---" << endl;
    cout << "1. Admin -----------------------" << endl;
    cout << "2. User ------------------------" << endl;
    cout << "3. Exit ------------------------" << endl;
    cout << "[1,2,3?] -----------------------" << endl;
    int x;
    cin >> x;
    if (x == 1){

    }else if (x == 2){

    }else if (x == 3){

    }
}
void menuUser() {
    int pilih, Lpilih;
    cout << "----- Menu User -----" << endl;
    cout << "1. Lihat Karyawan" << endl;
    cout << "2. Cari Karyawan" << endl;
    cout << "3. Lihat Jumlah Karyawan" << endl;
    cout << "4. Edit Karyawan" << endl;
    cout << "5. Hapus Karyawan" << endl;
    cout << "5. Reset Data Karyawan" << endl;
    cout << "6. Kembali Ke Menu Utama" << endl;
    cout << "Pilih [1-5]: ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            cout << "1. Lihat Karyawan Berdasarkan Divisi" << endl;
            cout << "2. Lihat Seluruh Karyawan Dari Yang Paling Senior" << endl;
            cout << "3. Lihat Karyawan Yang Baru Masuk" << endl;
            cout << "4. Lihat Karyawan Yang Akan Pensiun" << endl;
            cout << "5. Kembali ke Main Menu" << endl;
            cin >> Lpilih;
            switch (Lpilih){
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
            }
        case 2:
        case 3:
        case 4:
        case 5:
        case 6: mainmenu();
        default: cout << "Pilihan salah!";
    }
}

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

void menuAdmin(){
    int pilih, pilih1,pilih2;
    cout << "----- Menu Admin -----" << endl;
    cout << "1. Menu Divisi(Parent)" << endl;
    cout << "2. Menu Pegawai(Child)" << endl;
    cout << "3. Kembali ke main menu" << endl;
    cout << "Pilih [1-3]: ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            cout << "----- Menu Divisi -----" << endl;
            cout << "1. Insert Divisi" << endl;
            cout << "2. Delete Divisi" << endl;
            cout << "3. Print Divisi" << endl;
            cout << "4. Search Divisi" << endl;
            cout << "5. Kembali ke main menu" << endl;
            cout << "Pilih [1-5]: ";
            cin >> pilih1;
            switch (pilih1){
                case 1:
                    cout << "1. Insert First Divisi" << endl;
                    cout << "2. Insert Last Divisi" << endl;
                    cout << "3. Insert After Divisi" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "Pilih [1-4]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
                    }
                case 2:
                    cout << "1. Delete First Divisi" << endl;
                    cout << "2. Delete Last Divisi" << endl;
                    cout << "3. Delete After Divisi" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "Pilih [1-4]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
                    }
                case 3:
                    cout << "1. Print Divisi" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "Pilih [1/2]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:
                            menuAdmin();
                    }
                case 4:
                    cout << "1. Search Divisi" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "Pilih [1/2]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:
                            menuAdmin();
                    }
                case 5:
                    menuAdmin();
            }
        case 2:
            cout << "----- Menu Pegawai -----" << endl;
            cout << "1. Insert Pegawai" << endl;
            cout << "2. Delete Pegawai" << endl;
            cout << "3. Print Pegawai" << endl;
            cout << "4. Search Pegawai" << endl;
            cout << "5. Kembali ke main menu" << endl;
            cout << "Pilih [1-5]: ";
            cin >> pilih1;
            switch (pilih1){
                case 1:
                    cout << "1. Insert First Pegawai" << endl;
                    cout << "2. Insert Last Pegawai" << endl;
                    cout << "3. Insert After Pegawai" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "Pilih [1-4]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
                    }
                case 2:
                    cout << "1. Delete First Pegawai" << endl;
                    cout << "2. Delete Last Pegawai" << endl;
                    cout << "3. Delete After Pegawai" << endl;
                    cout << "4. Kembali ke main menu" << endl;
                    cout << "Pilih [1-4]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
                    }
                case 3:
                    cout << "1. Print Pegawai" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "Pilih [1/2]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:
                            menuAdmin();
                    }
                case 4:
                    cout << "1. Search Pegawai" << endl;
                    cout << "2. Kembali ke main menu" << endl;
                    cout << "Pilih [1/2]: ";
                    cin >> pilih2;
                    switch (pilih2) {
                        case 1:

                        case 2:
                            menuAdmin();
                    }
                case 5:
                    menuAdmin();
            }
        case 3: mainmenu();
        default: cout << "Pilihan salah!";
    }
}

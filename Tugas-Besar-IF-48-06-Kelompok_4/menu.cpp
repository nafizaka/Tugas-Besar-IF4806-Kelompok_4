void mainmenu(){
    cout << "============================================" << endl;
    cout << "          SISTEM APLIKASI KANTOR            " << endl;
    cout << "============================================" << endl;
    cout << " Dibuat oleh:                               " << endl;
    cout << " - Pangeran Clevario Decaesario             " << endl;
    cout << " - Muhammad Nafiz Safaraz D.A               " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "1. Admin                                     " << endl;
    cout << "2. User                                     " << endl;
    cout << "3. Keluar                                   " << endl;
    cout << "--------------------------------------------" << endl;
    cout << " Masukkan pilihan Anda : ";
    int x;
    cin >> x;
    if (x == 1){

    }else if (x == 2){

    }else if (x == 3){

    }
}
void menuUser() {
    int pilih, Lpilih;
    cout << "============================================" << endl;
    cout << "                 MENU USER                  " << endl;
    cout << "============================================" << endl;
    cout << "1. Lihat Karyawan" << endl;
    cout << "2. Cari Karyawan" << endl;
    cout << "3. Lihat Jumlah Karyawan" << endl;
    cout << "4. Edit Karyawan" << endl;
    cout << "5. Hapus Karyawan" << endl;
    cout << "5. Reset Data Karyawan" << endl;
    cout << "6. Kembali Ke Menu Utama" << endl;
    cout << "--------------------------------------------" << endl;
    cout << " Masukkan pilihan Anda : ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            cout << "============================================" << endl;
            cout << "                 MENU USER                  " << endl;
            cout << "============================================" << endl;
            cout << "1. Lihat Karyawan Berdasarkan Divisi" << endl;
            cout << "2. Lihat Seluruh Karyawan Dari Paling Senior" << endl;
            cout << "3. Lihat Karyawan Yang Baru Masuk" << endl;
            cout << "4. Lihat Karyawan Yang Akan Pensiun" << endl;
            cout << "5. Kembali ke Main Menu" << endl;
            cout << "--------------------------------------------" << endl;
            cout << " Masukkan pilihan Anda : ";
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

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
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

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
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

                        case 2:
                            menuAdmin();
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

                        case 2:
                            menuAdmin();
                    }
                case 5:
                    menuAdmin();
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

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
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

                        case 2:

                        case 3:

                        case 4:
                            menuAdmin();
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

                        case 2:
                            menuAdmin();
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

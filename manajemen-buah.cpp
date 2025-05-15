#include <iostream>
using namespace std;

int main() {
    string buah[11] = {"", "Mangga", "Jeruk", "Lemon", "Apel", "Jambu"};
    int pilih;
    char yn;

    menu:
    cout << "\n\n\t        MENU PILIHAN \n";
    cout << "\n\t ======================================\n";
    cout << "\t 1. Tampilkan Buah-buahan  \n";
    cout << "\t 2. Hapus Buah  \n";
    cout << "\t 3. Tambah Buah \n";
    cout << "\t 4. Keluar Aplikasi  \n";
    cout << "\t ======================================\n";
    cout << "\t Pilihan Anda : ";
    cin >> pilih;

    switch(pilih) {
        case 1:
            for (int i = 1; i < 11; i++) {
                if (!buah[i].empty()) {
                    cout << "\t\t" << i << ". " << buah[i] << endl;
                }
            }
            goto menu;

        case 2: {
            int pil;
            cout << "\t Hapus Buah (Masukkan NO Buah) : ";
            cin >> pil;
            cout << "\t Hapus Buah NO " << pil << ". " << buah[pil] << " ? (y/n) : ";
            cin >> yn;
            if (yn == 'y' || yn == 'Y') {
                buah[pil] = "";
                cout << "\t Berhasil dihapus" << endl;
            } else {
                cout << "\t Tidak jadi dihapus" << endl;
            }
            goto menu;
        }

        case 3:
            for (int j = 6; j < 11; j++) {
                cout << "\t Tambah Buah : ";
                cin >> buah[j];
                cout << "\t Buah " << buah[j] << " berhasil ditambahkan" << endl;
                cout << "\t Tambah lagi? (y/n) : ";
                cin >> yn;
                if (yn == 'n' || yn == 'N') break;
            }
            goto menu;

        case 4:
            cout << "\t Terima kasih telah menggunakan aplikasi." << endl;
            break;

        default:
            cout << "\t Pilihan tidak valid. Silakan coba lagi." << endl;
            goto menu;
    }

    return 0;
}

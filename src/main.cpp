//
// Created by HP on 09/10/2024.
//
// Created by HP on 08/10/2024.

#include <iostream>
using namespace std;

int main() {
    int pilihan;

    // Menampilkan pilihan kepada user
    cout << "Pilih operasi yang ingin dilakukan:" << endl;
    cout << "1. Input dan Tampilkan Data Mahasiswa" << endl;
    cout << "2. Perkalian Matriks" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        int jumlahData;

        // Input jumlah data mahasiswa
        cout << "Input Jumlah Data: ";
        cin >> jumlahData;

        string nama[jumlahData], alamat[jumlahData], hobi[jumlahData];

        // Input data mahasiswa
        for (int i = 0; i < jumlahData; i++) {
            cout << "Data " << i + 1 << endl;
            cout << "Nama    : "; cin >> nama[i];
            cout << "Alamat  : "; cin >> alamat[i];
            cout << "Hobi    : "; cin >> hobi[i];
            cout << endl;
        }

        // Tampilkan daftar mahasiswa
        cout << "DAFTAR MAHASISWA" << endl;
        cout << "No.  Nama     Alamat    Hobi" << endl;
        for (int i = 0; i < jumlahData; i++) {
            cout << i + 1 << "    " << nama[i] << "    " << alamat[i] << "    " << hobi[i] << endl;
        }
    } else if (pilihan == 2) {
        int barisA, kolomA, kolomB;

        // Input dimensi matriks
        cout << "Jumlah Baris Matriks A: ";
        cin >> barisA;
        cout << "Jumlah Kolom Matriks A: ";
        cin >> kolomA;
        cout << "Jumlah Kolom Matriks B: ";
        cin >> kolomB;

        // Deklarasi matriks
        int matriksA[barisA][kolomA];
        int matriksB[kolomA][kolomB];
        int hasil[barisA][kolomB];

        // Input nilai matriks A
        cout << "Input Nilai Matriks A:" << endl;
        for (int i = 0; i < barisA; i++) {
            for (int j = 0; j < kolomA; j++) {
                cout << "A(" << i + 1 << ", " << j + 1 << ") = ";
                cin >> matriksA[i][j];
            }
        }

        // Input nilai matriks B
        cout << "Input Nilai Matriks B:" << endl;
        for (int i = 0; i < kolomA; i++) {
            for (int j = 0; j < kolomB; j++) {
                cout << "B(" << i + 1 << ", " << j + 1 << ") = ";
                cin >> matriksB[i][j];
            }
        }

        // Perkalian matriks
        for (int i = 0; i < barisA; i++) {
            for (int j = 0; j < kolomB; j++) {
                hasil[i][j] = 0;
                for (int k = 0; k < kolomA; k++) {
                    hasil[i][j] += matriksA[i][k] * matriksB[k][j];
                }
            }
        }

        // Tampilkan hasil perkalian matriks
        cout << "Hasil Perkalian Matriks:" << endl;
        for (int i = 0; i < barisA; i++) {
            for (int j = 0; j < kolomB; j++) {
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}

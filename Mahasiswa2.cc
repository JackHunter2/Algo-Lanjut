#include <iostream>
#include <string>

using namespace std;

struct Alamat {
    string jalan;
    string kota;
    string provinsi;
    string kodePos;
};

struct Mahasiswa {
    string Nama;
    int NIM;
    char Kelas;
    string Matkul;
    Alamat alamat;
};

int main() {
    char userInput;

    do {
        Mahasiswa mhs1;

        cout << "Nama Mahasiswa: ";
        getline(cin, mhs1.Nama);

        cout << "NIM: ";
        cin >> mhs1.NIM;
        cin.ignore();

        cout << "Kelas: ";
        cin >> mhs1.Kelas;
        cin.ignore();

        cout << "Matkul: ";
        getline(cin, mhs1.Matkul);

        cout << "Alamat Mahasiswa" << endl;
        cout << "Jalan: ";
        getline(cin, mhs1.alamat.jalan);

        cout << "Kota: ";
        getline(cin, mhs1.alamat.kota);

        cout << "Provinsi: ";
        getline(cin, mhs1.alamat.provinsi);

        cout << "Kode Pos: ";
        getline(cin, mhs1.alamat.kodePos);

        cout << "Data mahasiswa berhasil disimpan!" << endl;

        cout << "Ingin menginput data lagi? (y/n) ";
        cin >> userInput;
        cin.ignore();

    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}
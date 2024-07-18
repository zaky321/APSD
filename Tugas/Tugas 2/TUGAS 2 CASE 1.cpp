#include <iostream>
#include <string>

using namespace std;

float hitung_rata_rata(float tugasA, float tugasB, float tugasC) {
    return (tugasA + tugasB + tugasC) / 3;
}

int main() {
    string nama_siswa;
    float nilai_tugasA, nilai_tugasB, nilai_tugasC;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama_siswa);
    cout << "Masukkan nilai tugas A: ";
    cin >> nilai_tugasA;
    cout << "Masukkan nilai tugas B: ";
    cin >> nilai_tugasB;
    cout << "Masukkan nilai tugas C: ";
    cin >> nilai_tugasC;

    float rata_rata = hitung_rata_rata(nilai_tugasA, nilai_tugasB, nilai_tugasC);

    cout << "Nama Siswa: " << nama_siswa << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    // Penentuan apakah siswa lulus atau tidak
    if (rata_rata >= 75) {
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;
    }

    return 0;
}

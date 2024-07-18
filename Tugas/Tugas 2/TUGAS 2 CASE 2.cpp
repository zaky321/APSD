#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama_siswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;
    float nilai_murni_keaktifan, nilai_murni_tugas, nilai_murni_ujian;
    float nilai_akhir;

    // Masukkan data siswa
    cout << "Masukkan nama siswa: ";
    getline(cin, nama_siswa);

    cout << "Masukkan nilai keaktifan: ";
    cin >> nilai_keaktifan;

    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;

    cout << "Masukkan nilai ujian: ";
    cin >> nilai_ujian;

    // Hitung nilai murni
    nilai_murni_keaktifan = nilai_keaktifan * 0.2;
    nilai_murni_tugas = nilai_tugas * 0.5;
    nilai_murni_ujian = nilai_ujian * 0.3;

    // Hitung nilai akhir
    nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    // Tampilkan nama siswa dan nilai akhir
    cout << "Nama siswa: " << nama_siswa << endl;
    cout << "Nilai akhir: " << nilai_akhir << endl;

    return 0;
}

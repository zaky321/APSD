#include <iostream>
#include <string>

using namespace std;

int main () {
    // Deklarasi variabel
    string Nama_Siswa ;
    int NIM, nilai_TugasA, nilai_TugasB, nilai_TugasC ;
    int nilaiRata_rata ;

    //Input Data Siswa
    cout << "===== Program Menghitung Nilai Rata-rata =====" << endl;
    cout << "Nama Siswa: ";
    getline(cin,Nama_Siswa);

    cout << "Masukkan Nim" << endl;
    cin >> NIM;

    //Input Nilai Tugas
    cout << "Masukkan Nilai Tugas A" << endl;
    cin >> nilai_TugasA;

    cout << "Masukkan Nilai Tugas B" << endl;
    cin >> nilai_TugasB;

    cout << "Masukkan Nilai Tugas C" << endl;
    cin >> nilai_TugasC;

    //Penghitungan nilaiRata_rata
    nilaiRata_rata = (nilai_TugasA + nilai_TugasB + nilai_TugasC)/3;

    //Output
 cout << "Hasil akhir " << endl;
    cout << "NIM " << NIM;
    cout << " siswa yang memperoleh nilai Rata_rata " << nilaiRata_rata;
    cout << " dari hasil tugas yang diikutinya. " << endl;

    return 0;
}
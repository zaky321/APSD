#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  // Deklarasi variabel
  int n; // Panjang array

  // Meminta input panjang array dari pengguna
  cout << "Masukkan panjang array: ";
  cin >> n;

  // Deklarasi dan inisialisasi array
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Masukkan elemen array ke-" << i + 1 << ": ";
    cin >> arr[i];
  }

  // Menampilkan array sebelum diurutkan
  cout << "\nArray sebelum diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  // Mengurutkan array menggunakan bubble sort
  bubbleSort(arr, n);

  // Menampilkan array setelah diurutkan
  cout << "\nArray setelah diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
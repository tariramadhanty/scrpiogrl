#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) {
  // Memeriksa nilai input
  if (m < 0 || n < 0) {
    cerr << "Input tidak valid. Bilangan harus non-negatif." << endl;
    return -1;
  }

  // Loop utama algoritma Euclidean GCD
  while (n != 0) {
    int r = m % n; // Sisa pembagian m dengan n
    m = n;  // Menukar nilai m dan n
    n = r;  // Sisa menjadi nilai n baru
  }

  // Mengembalikan FPB
  return m;
}

int main() {
  int m, n;

  // Meminta input dari pengguna
  cout << "Masukkan bilangan pertama: ";
  cin >> m;
  cout << "Masukkan bilangan kedua: ";
  cin >> n;

  // Menghitung FPB
  int fpb = EuclideanGCD(m, n);

  // Menampilkan hasil
  cout << "FPB dari " << m << " dan " << n << " adalah: " << fpb << endl;

  return 0;
}

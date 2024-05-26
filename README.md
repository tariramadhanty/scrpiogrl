#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) 
{
  if (m < 0 || n < 0) 
  { 
    cerr << "Input tidak valid. Bilangan harus non-negatif." << endl;
    return -1;
  }
    while (n != 0) {
    int r = m % n; // Sisa pembagian m dengan n
    m = n;  // Menukar nilai m dan n
    n = r;  // Sisa menjadi nilai n baru
  }
 return m;
}

int main() {
  int m, n;

 
  cout << "Masukkan bilangan pertama: ";
  cin >> m;
  cout << "Masukkan bilangan kedua: ";
  cin >> n;

  int fpb = EuclideanGCD(m, n);
  cout << "FPB dari " << m << " dan " << n << " adalah: " << fpb << endl;

  return 0;
}

#include <iostream>
using namespace std;

//fungsi menghitung fpb dengan Algoritma Euclidean
int hitungfpb(int a, int b) { //fungsi hitungfpb dengan parameter a dan b
    if (b==0)//jika b=0
            return a;//maka nilai a adalah FPB dari a dan b
                else
                        return hitungfpb(b,a%b);//jika b!=0, maka fungsi hitungfpb dipanggil kembali dengan parameter b dan a mod b
              } 

int main() {
    int m,n;
        cout<<"m: ";//input m
        cin>>m;//memasukkan input ke variabel m     
        cout<<"n: ";//input n
        cin>>n;//memasukkan input ke variabel n
        int fpb = hitungfpb(m,n);//menghitung fpb dengan memanggil fungsi hitungfpb dengan parameter m dan n
        cout << "FPB: " << fpb << endl;//output fpb
    }

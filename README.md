#include <iostream>
using namespace std;


//fungsi menghitung dengan Algoritma Euclidean
int hitungfpb (int a, int b) { //fungsi hitungfpb dengan parameter a dan b
    int r;//deklarasi variabel r
    while(a%b!=0) {//perulangan jika a tidak habis dibagi b
        r=a%b;//r adalah a mod b
        a=b;//a menjadi b
        b=r;//b menjadi r
    }
    return b;//mengembalikan nilai b
}
//looping akan berhenti jika a habis dibagi b, maka nilai b adalah FPB dari a dan b

int main() {
    int m ,n; 
    cout<<"m: "; //input m
    cin>>m;//memasukkan input ke variabel m
    cout<<"n: ";//input n
    cin>>n;//memasukkan input ke variabel n
    int fpb = hitungfpb(m, n);//menghitung fpb dengan memanggil fungsi hitungfpb dengan parameter m dan n
    cout << "FPB: " << fpb << endl;//output fpb
}

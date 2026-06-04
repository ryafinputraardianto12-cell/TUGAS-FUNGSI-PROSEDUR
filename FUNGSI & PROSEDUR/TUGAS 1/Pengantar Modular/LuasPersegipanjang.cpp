#include <iostream>
using namespace std;

// 1. DEKLARASI (Prototipe Fungsi)
int hitungLuas(int panjang, int lebar); 

int main() {
    int p = 12, l = 8;
    
    // 2. PEMANGGILAN FUNGSI
    int hasil = hitungLuas(p, l);
    
    cout << "Panjang: " << p << ", Lebar: " << l << endl;
    cout << "Luas Persegi Panjang: " << hasil << endl;
    
    return 0;
}

// 3. DEFINISI FUNGSI
int hitungLuas(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas; // Mengembalikan hasil perhitungan
}


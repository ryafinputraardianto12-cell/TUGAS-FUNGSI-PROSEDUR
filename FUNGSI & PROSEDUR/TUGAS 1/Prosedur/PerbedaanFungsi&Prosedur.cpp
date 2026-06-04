#include <iostream>
#include <string>
using namespace std;

// ==========================================
// 1. CONTOH FUNGSI (Memiliki Tipe Data & Return)
// ==========================================
int hitungDiskon(int totalBelanja) {
    return totalBelanja * 0.1; // Mengembalikan hasil potongan 10%
}

// ==========================================
// 2. CONTOH PROSEDUR (Menggunakan void)
// ==========================================
void cetakKartuNama(string nama) {
    cout << "=========================" << endl;
    cout << " NAMA : " << nama << endl;
    cout << " STATUS: Anggota Aktif" << endl;
    cout << "=========================" << endl;
    // Tidak ada kata kunci return yang membawa nilai
}

int main() {
    // --- PEMANGGILAN FUNGSI ---
    // Karena fungsi mengembalikan nilai, kita harus menampungnya ke variabel 
    // atau langsung menggunakannya.
    int uangPotongan = hitungDiskon(100000); 
    cout << "Anda mendapat diskon: Rp " << uangPotongan << endl;


    // --- PEMANGGILAN PROSEDUR ---
    // Prosedur dipanggil langsung sebagai pernyataan mandiri.
    // Tidak bisa dimasukkan ke dalam variabel (int x = cetakKartuNama(...) akan ERROR).
    cetakKartuNama("Budi Santoso");

    return 0;
}


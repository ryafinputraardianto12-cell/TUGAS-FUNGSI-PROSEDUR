#include <iostream>
#include <string>
using namespace std;

// 1. PROSEDUR TANPA PARAMETER
// Kegunaan: Hanya menampilkan teks statis (Menu) ke layar
void tampilkanMenu() {
    cout << "=== APLIKASI KASIR TOKO BARU ===" << endl;
    cout << "1. Sabun Mandi  : Rp 5.000" << endl;
    cout << "2. Sampo Botol  : Rp 15.000" << endl;
    cout << "3. Pasta Gigi   : Rp 7.000" << endl;
    cout << "--------------------------------" << endl;
}

// 2. PROSEDUR DENGAN PARAMETER
// Kegunaan: Melakukan aksi cetak berdasarkan data yang dinamis
void cetakStruk(string namaBarang, int harga, int jumlah) {
    int total = harga * jumlah;
    cout << "\n======= STRUK PEMBELIAN =======" << endl;
    cout << "Barang      : " << namaBarang << endl;
    cout << "Harga/item  : Rp " << harga << endl;
    cout << "Jumlah Beli : " << jumlah << endl;
    cout << "--------------------------------" << endl;
    cout << "TOTAL BAYAR : Rp " << total << endl;
    cout << "================================" << endl;
}

int main() {
    // Memanggil prosedur tampilkanMenu
    tampilkanMenu();

    // Mensimulasikan pembelian
    string produk = "Sampo Botol";
    int hargaSatuan = 15000;
    int kuantitas = 3;

    // Memanggil prosedur cetakStruk dengan mengirimkan argumen
    cetakStruk(produk, hargaSatuan, kuantitas);

    return 0;
}

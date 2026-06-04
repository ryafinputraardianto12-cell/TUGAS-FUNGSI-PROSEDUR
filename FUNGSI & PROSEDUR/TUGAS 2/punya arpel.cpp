#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// =====================================
// PROSEDUR TANPA PARAMETER
// Menampilkan daftar barang
// =====================================
void tampilkanMenu() {
    cout << "\n===== TOKO SERBA ADA =====" << endl;
    cout << "1. Sarden  : Rp15000" << endl;
    cout << "2. Sabun   : Rp5000" << endl;
    cout << "3. Minyak  : Rp25000" << endl;
    cout << "=========================" << endl;
}

// =====================================
// FUNGSI DENGAN PARAMETER + NILAI BALIK
// Menghitung total belanja
// =====================================
int hitungTotal(int harga, int jumlah) {
    return harga * jumlah;
}

// =====================================
// FUNGSI DENGAN PARAMETER + RETURN
// Menghitung pajak 11%
// =====================================
double hitungPajak(int total) {
    return total * 0.11;
}

// =====================================
// PROSEDUR DENGAN PARAMETER
// Mencetak struk pembelian
// =====================================
void cetakStruk(string barang, int harga, int jumlah,
                int total, double pajak,
                double diskon, double bayar) {

    time_t sekarang = time(0);

    cout << "\n========== STRUK ==========" << endl;
    cout << "Tanggal : " << ctime(&sekarang);
    cout << "Barang  : " << barang << endl;
    cout << "Harga   : Rp" << harga << endl;
    cout << "Jumlah  : " << jumlah << endl;
    cout << "Total   : Rp" << total << endl;
    cout << "Pajak   : Rp" << pajak << endl;
    cout << "Diskon  : Rp" << diskon << endl;
    cout << "Bayar   : Rp" << bayar << endl;
    cout << "===========================" << endl;
}

int main() {

    int pilihan, jumlah;
    char ulang;

    do {
        tampilkanMenu();

        cout << "Pilih barang : ";
        cin >> pilihan;

        cout << "Jumlah beli  : ";
        cin >> jumlah;

        string barang;
        int harga;

        // PERCABANGAN
        switch (pilihan) {
            case 1:
                barang = "Sarden";
                harga = 15000;
                break;

            case 2:
                barang = "Sabun";
                harga = 5000;
                break;

            case 3:
                barang = "Minyak";
                harga = 25000;
                break;

            default:
                cout << "Pilihan tidak tersedia!" << endl;
                continue;
        }

        int total = hitungTotal(harga, jumlah);
        double pajak = hitungPajak(total);

        double diskon = 0;

        // Percabangan diskon
        if (total >= 100000) {
            diskon = total * 0.10;
        }

        double bayar = total + pajak - diskon;

        cetakStruk(
            barang,
            harga,
            jumlah,
            total,
            pajak,
            diskon,
            bayar
        );

        cout << "\nTransaksi lagi? (y/n): ";
        cin >> ulang;

    }while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah berbelanja.\n";

    return 0;
}
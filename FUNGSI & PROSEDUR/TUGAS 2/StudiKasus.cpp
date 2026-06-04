#include <iostream>
#include <string>
using namespace std;

// 1. PROSEDUR TANPA PARAMETER 
// Menampilkan Daftar 
void tampilanMenu() {
    cout << "==== APLIKASI KASIR WARUNG MADURA ====" << endl;
    cout << "---- Murah, Terjangkau, 24 Jam Buka ----" << endl;
    cout << "DAFTAR MENU: " << endl;
    cout << "1. Sarden    : Rp. 18.000" << endl;
    cout << "2. Sabun     : Rp. 5.000" << endl;
    cout << "3. Minyak 1L : Rp. 21.000" << endl;
    cout << "4. Gula 1kg  : Rp. 20.000" << endl << endl;
}


// 2. PROSEDUR DENGAN PARAMETER
// Cetak berdasarkan data yang dinamis
void cetakStruk(string namaBarang, int harga, int kuantitas, int diskon, int pajak, int totalTagihan, int bayar, double kembali) {
    cout << "======= STRUK PEMBELIAN =======" << endl;
    cout << "Tanggal     : " << __DATE__ << endl;
    cout << "Barang      : " << namaBarang << endl;
    cout << "Harga/item  : Rp " << harga << endl;
    cout << "Jumlah      : " << kuantitas << " item" << endl;
    cout << "Diskon      : Rp " << diskon << endl;
    cout << "Pajak       : Rp " << pajak  << endl;
    cout << "Bayar       : Rp " << bayar << endl;
    cout << "Kembali     : Rp " << kembali << endl;
    cout << "--------------------------------" << endl;
    cout << "TOTAL TAGIHAN : Rp " << totalTagihan << endl;
    cout << "================================" << endl;
}


// 3. FUNGSI DENGAN NILAI BALIK
    // Menghitung total Belanja
    int totalBelanja(int harga, int jumlah) {
    return harga * jumlah;
    }

    // Menghitung pajak berjumlah 0.8%
    double hitungPajak(int totalBelanja) {
        double pajak = 0.008;                      
        return totalBelanja * pajak;               
    }

    
// 4. FUNGSI DENGAN PARAMETER
// Menghitung total tagihan setelah diskon dan pajak
int totalTagihan(int totalBelanja, int diskon, double pajak) {
    return totalBelanja - diskon + pajak;
} 



// PROGRAM UTAMA
int main() {
    // Program input dan logika utama
    int pilihan, jumlah, bayar;
    char ulang;

 // Menampilkan menu
  do{tampilanMenu();

        cout << "Pilih barang (1-4): ";
        cin >> pilihan; 

        cout << "Jumlah beli: ";
        cin >> jumlah;

        cout << "Masukkan jumlah uang yang dibayarkan: Rp ";
        cin >> bayar;

        string namaBarang;
        int harga;

        //memilih barang berdasarkan input
        switch (pilihan) {
            case 1:
                namaBarang = "Sarden";
                harga = 18000;
                break;
            case 2:
                namaBarang = "Sabun";
                harga = 5000;
                break;
            case 3:
                namaBarang = "Minyak 1L";
                harga = 21000;
                break;
            case 4:
                namaBarang = "Gula 1kg";
                harga = 20000;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                return 0;    // Keluar dari program jika pilihan tidak valid
        }

        int total = totalBelanja(harga, jumlah);     // Menghitung total belanja
        double pajak = hitungPajak(total);           // Menghitung pajak

        if (bayar < total) {
            cout << "Uang yang dibayarkan kurang! Transaksi dibatalkan." << endl;
            return 0;   // Keluar dari program jika uang tidak cukup

        } 
        

        int diskon = 0;                                 
        if (total >= 100000){       
           diskon = total * 0.05;
        } 
            else {diskon = 0;       
            }
        // Diskon 5% jika total belanja >= 100.000
        // Tidak ada diskon jika total kurang dari 100.000

        int totalTagihan = total + pajak - diskon;   // Menghitung total tagihan
        double kembali = bayar - totalTagihan;       // Menghitung kembali


    // Mencetak struk pembelian
        cetakStruk(namaBarang, harga, jumlah, diskon, pajak, totalTagihan, bayar, kembali); 

        cout << "Apakah Anda ingin membeli lagi? (Y/N): ";
        cin >> ulang;
        
    } while (ulang == 'Y' || ulang == 'y');
    cout << "Terima kasih telah berbelanja!" << endl;
    return 0;
}
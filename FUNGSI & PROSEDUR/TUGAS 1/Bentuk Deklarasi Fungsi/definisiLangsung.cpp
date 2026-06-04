#include <iostream>
using namespace std;

// Fungsi langsung didefinisikan di atas main
double bagi(double a, double b) {
    if (b == 0) return 0;
    return a / b;
}

int main() {
    cout << "Hasil bagi: " << bagi(10, 5) << endl;
    return 0;
}

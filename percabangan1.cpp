#include<iostream>
using namespace std;

int main() {
    int total;
    cout << "Masukkan Total Belanja: ";
    cin >> total;

    if(total > 200000) {
        total = total - 25000;
    }

    cout << "Total Pembayaran: "<< total << endl;
    return 0;
}

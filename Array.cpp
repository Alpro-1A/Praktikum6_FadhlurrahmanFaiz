#include <iostream>
using namespace std;

int main() {
    cout << "-----------------------------" << endl;
    cout << "   Mencari Nilai Tertinggi   " << endl;
    cout << "-----------------------------" << endl;
    cout << endl;

    cout << "Nilai-Nilai: " << endl; // Menampilkan semua nilai dari array
    int jumArray[5] = {64, 29, 56, 78, 3};
    for (int i = 0; i < 5; ++i){
        cout << "Nilai " << i + 1 << ": " << jumArray[i] << endl;
    }

    int nilaiTertinggi = jumArray[0];
    int index = 0;

    for (int i = 1; i < 5; ++i){ // Mencari nilai tertinggi dan index
        if (jumArray[i] > nilaiTertinggi){
            nilaiTertinggi = jumArray[i];
            index = i;
        }
    }

    cout << endl;

    cout << "Nilai Tertinggi: " << nilaiTertinggi << endl; // Menampilkan nilai tertinggi dan index
    cout << "Index dengan nilai tertinggi: " << index << endl;

    return 0;
}

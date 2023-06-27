#include <iostream>

using namespace std;

// Enum untuk cuaca
#define CERAH 0
#define MENDUNG 1
#define HUJAN 2
#define BADAI 3

// Enum untuk gear kendaraan
#define N 0
#define R 1
#define D 2
#define L 3

// Enum untuk nilai
#define A 90
#define B 80
#define C 70
#define D 60
#define E 50

int main() {
    // Menggunakan enum Cuaca
    int cuacaHariIni = HUJAN;
    cout << "Cuaca hari ini: ";
    switch (cuacaHariIni) {
        case CERAH:
            cout << "Cerah";
            break;
        case MENDUNG:
            cout << "Mendung";
            break;
        case HUJAN:
            cout << "Hujan";
            break;
        case BADAI:
            cout << "Badai";
            break;
    }
    cout << endl;

    // Menggunakan enum Gear
    int gearKendaraan = D;
    cout << "Gear kendaraan: ";
    switch (gearKendaraan) {
        case N:
            cout << "Neutral";
            break;
        case R:
            cout << "Reverse";
            break;
        case D:
            cout << "Drive";
            break;
        case L:
            cout << "Low";
            break;
    }
    cout << endl;

    // Menggunakan enum Nilai
    int nilaiMahasiswa = B;
    cout << "Nilai mahasiswa: " << nilaiMahasiswa << endl;

    return 0;
}

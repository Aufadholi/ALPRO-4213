#include <iostream>
using namespace std;

struct hitung
{
    int p, r, l, t;
    double phi;

    int luas()
    {
        return p * l;
    }
    double luaslingkaran()
    {
        return 22 / 7 * r * r;
    }
    double volumekerucut()
    {
        return 1 / 3 * phi * r * r * t;
    }
    double volumebola()
    {
        return 4 / 3 * phi * r * r * r;
    }
};

typedef struct hitung berhitung;

int main()
{
    berhitung menghitung;

    menghitung.p = 5;
    menghitung.l = 6;
    menghitung.r = 15;
    menghitung.t = 7;
    menghitung.phi = 3.14;

    cout << "Luas Persegi Panjang: " << menghitung.luas() << endl;
    cout << "Luas Lingkaran: " << menghitung.luaslingkaran() << endl;
    cout << "Volume Kerucut: " << menghitung.volumekerucut() << endl;
    cout << "Voulume Bola: " << menghitung.volumebola() << endl;

    return 0;
}

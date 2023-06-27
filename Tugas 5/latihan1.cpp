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

int main()
{
    hitung hitung;
    hitung.p = 5;
    hitung.l = 6;
    hitung.r = 15;
    hitung.t = 7;
    hitung.phi = 3.14;

    cout << "Luas Persegi Panjang: " << hitung.luas() << endl;
    cout << "Luas Lingkaran: " << hitung.luaslingkaran() << endl;
    cout << "Volume Kerucut: " << hitung.volumekerucut() << endl;
    cout << "Voulume Bola: " << hitung.volumebola() << endl;

    return 0;
}

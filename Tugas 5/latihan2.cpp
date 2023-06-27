#include <iostream>
using namespace std;

typedef struct sepeda
{
    string merk, harga, type;
    int tahun;
} sepeda;

int main()
{
    sepeda sepeda;

    sepeda.merk = "Polygon";
    sepeda.harga = "2.000.000";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;

    cout << sepeda.merk << endl;
    cout << sepeda.type << endl;
    cout << sepeda.tahun << endl;
    cout << sepeda.harga << endl;
    return 0;
}

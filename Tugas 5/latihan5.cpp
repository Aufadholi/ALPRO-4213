#include <iostream>
using namespace std;

typedef struct sepeda
{
    string *merk, *harga, *type;
    int *tahun;
} sepeda;

int main()
{
    sepeda sepeda;

    string merkval = "Polygon";
    string typeval = "Sepeda Gunung";
    int tahunval = 2013;
    string hargaval = "2.000.000";

    sepeda.merk = &merkval;
    sepeda.harga = &hargaval;
    sepeda.type = &typeval;
    sepeda.tahun = &tahunval;

    cout << *sepeda.merk << endl;
    cout << *sepeda.type << endl;
    cout << *sepeda.tahun << endl;
    cout << *sepeda.harga << endl;
    return 0;
}

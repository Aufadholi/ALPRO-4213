#include <iostream>
using namespace std;

int Penjumlahan(int x, int y)
{
    return x + y;
}

int Pengurangan(int x, int y)
{
    return x - y;
}

int TotalArray(int arry[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arry[i];
    }

    return total;
}

double RataArray(int arry[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arry[i];
    }
    double rata_rata = (double) total / size;
    return rata_rata;
}

int main()
{
    int x,y,i;
    int arry[] = {1, 3, 4, 5};
    int size = sizeof(arry) / sizeof(arry[0]);

    cout << "\nData array = {1, 3, 4, 5}\n";
    cout << "\nMasukan nilai x: "; cin >> x;
    cout << "\nMasukan nilai y: "; cin >> y;
    cout << "\n";
    cout << "\n==> Hasil Penjumlahan dari x dan y adalah " << Penjumlahan(x, y) << endl;
    cout << "\n==> Hasil Pengurangan dari x dan y adalah " << Pengurangan(x, y) << endl;
    int tot = TotalArray(arry,size);
    double rata_rata = RataArray(arry, size);
    cout << "\n==> Hasil dari total data array: " << tot << endl;
    cout << "\n==> Hasil dari rata-rata data array: " << rata_rata << endl;

return 0;
}

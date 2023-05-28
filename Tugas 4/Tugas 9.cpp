#include<iostream>
using namespace std;

int tambah(int a,int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return 1+tambah(a, b-1 );
    }
}

int kurang(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return kurang(a - 1, b - 1);
    }
}

int kali(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + kali(a, b - 1);
    }
}

int bagi(int a, int b)
{
    if (a < b)
    {
        return 0;
    }
    else
    {
        return 1 + bagi(a - b,b);
    }
}

int pangkat(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pangkat(a,b - 1);
    }
}

int main()
{
    int x,y;
    cout<<"Masukan angka pertama: "; cin>>x;
    cout<<"Masukan angka kedua: "; cin>>y;
    cout<<"---------------------------"<<endl;
    cout<<"Hasil penjumlahan: "<< tambah(x,y) <<endl;
    cout<<"Hasil pengurangan: "<< kurang(x,y) <<endl;
    cout<<"Hasil perkalian: "<< kali(x,y) <<endl;
    cout<<"Hasil pembagian: "<< bagi(x,y) <<endl;
    cout<<"Hasil Pangkat: "<< pangkat(x,y)<<endl;


    return 0;
}

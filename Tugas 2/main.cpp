#include <iostream>

using namespace std;

bool isEven(int x)
{
    if(x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isOdd(int x)
{
    if(x % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFactor(int x, int y)
{
    return x % y == 0;
}

int maxArray(int arry[], int n)
{
    int hasil;
    for (int i = 0; i < n; i++)
    {
        if(hasil < arry[i])
        {
            hasil = arry[i];
        }
    }
    return hasil;
}


int minArray(int arry[], int n)
{
    int hasil;
    for (int i = 0; i < n; i++)
    {
        if(hasil > arry[i])
        {
            hasil = arry[i];
        }
    }
    return hasil;
}

int maximum(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int minimum(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int sumEven(int arry[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(arry[i] % 2 == 0)
        {
            sum += arry[i];
        }
    }
    return sum;
}


int sumOdd(int arry[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(arry[i] % 2 != 0)
        {
            sum += arry[i];
        }
    }
    return sum;
}


void Swap(int a, int b)
{
    int temporary;
    temporary = b;
    b = a;
    a = temporary;
    cout << "Nilai a: " << a << endl << "Nilai a: " << b;
}


bool isFound(int arry[], int x, int y)
{
    for (int i = 0; i < y; i++) {
        if (arry[i] == x) {
            return true;
        }
    }
    return false;
}


int main()
{
    int n, x, y, a, b;
    int arry[n];

    //isEven
    cout << "==========================================";
    cout << " IsEven" << endl;
    cout << "Masukan bilangan genap: "; cin >> n;
    string even = (isEven(n)==1) ? " adalah bilangan Genap" : " bukan angka Genap";
    cout << n << even << endl;
    cout << endl;


    //isOdd
    cout << "==========================================";
    cout << " IsOdd" << endl;
    cout << "Masukan bilangan ganjil: "; cin >> n;
    string odd = (isOdd(n)==1) ? " adalah bilangan Ganjil" : " bukan angka Ganjil";
    cout << n << odd << endl;
    cout << endl;


    //isFactor
    cout << "==========================================";
    cout << " IsFactor" << endl;
    cout << "Masukan x: "; cin >> x;
    cout << "Masukan y: "; cin >> y;
    string faktor = (isFactor(x,y)==1) ? "saling mengfaktorkan" : "tidak saling memfaktorkan";
    cout << x << " dan " << y << " " << faktor << endl;
    cout << endl;


    //max min Array
    cout << "==========================================";
    cout << " Maximum dan minimum" << endl;
    cout << "Masukan a: ";
    cin >> a;
    cout << "Masukan b: ";
    cin >> b;
    cout << "nilai yang terbesar : " << maximum(a,b) << endl;
    cout << "nilai yang terkecil : " << minimum(a,b) << endl;
    cout << endl;


    //max min array
    cout << "==========================================";
    cout << "MaxMinArray" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen array: ";
        cin >> arr[i];
    }
    int MaxArry = maxArray(arr,n);
    int MinArry = minArray(arr,n);
    cout << "Nilai array terbesar: " << MaxArry << endl;
    cout << "Nilai array terkecil: " << MinArry << endl;
    cout << endl;


    //sum even odd array
    cout << "==========================================";
    cout << "SumEvenOdd" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arrry[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen array: ";
        cin >> arrry[i];
    }
    int SumEven = sumEven(arr,n);
    int SumOdd = sumOdd(arr,n);
    cout << "Jumlah nilai genap: " << SumEven << endl;
    cout << "Jumlah nilai ganjil: " << SumOdd << endl;
    cout << endl;


    //swap
    cout << "==========================================";
    cout << " Swap" << endl;
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;
    Swap(a,b);
    cout << endl;
    cout << endl;


    //isFound
    cout << "==========================================";
    cout << " IsFound" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arrayy[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka: ";
        cin >> arrayy[i];
    }
    cout << "Angka yang dicari: ";
    cin >> x;
    string cari = (isFound(arry,x,y)==1) ? "Ditemukan" : "Tidak ditemukan";
    cout << cari << endl;
    cout << "==========================================";




    return 0;
}

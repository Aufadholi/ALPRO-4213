#include <bits/stdc++.h>
#define _flush      endl
#define ll          long long
using namespace std;

typedef struct dataMhs
{
    string nim;
    string nama;
    string jurusan;
    long long tahunLulus;
}daMhs;


int main() {
    //fastread();
    long long size;cout << "Enter the number of data: "; cin >> size;

    //alokasi memori dinamis untuk array of struct
    daMhs* dataArr = new daMhs[size];

    //mengisi data
    for (long long i = 0; i < size; i++)
    {
        cout << "Enter data for person " << i + 1 << ": " << _flush;
        cout << "NIM \t: \t";cin >> dataArr[i].nim;
        cin.ignore();
        cout << "Nama \t: \t"; getline(cin, dataArr[i].nama);
        cout << "Jurusan \t: \t"; getline(cin,  dataArr[i].jurusan);
        cout << "Tahun Lulus \t: \t";cin >> dataArr[i].tahunLulus;
    }

    for (ll i = 0; i < size; i++)
    {
        cout << "Data " << i+1 << ":" << endl;
        cout << "NIM: " << dataArr[i].nim << endl;
        cout << "Nama: " << dataArr[i].nama << endl;
        cout << "Jurusan: " << dataArr[i].jurusan << endl;
        cout << "Tahun Lulus: " << dataArr[i].tahunLulus << endl;
        cout << endl;
    }

    //delokasi memori seteleah selesai
    delete[] dataArr;
    return 0;
}

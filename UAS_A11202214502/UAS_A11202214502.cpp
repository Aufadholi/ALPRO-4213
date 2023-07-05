#include <iostream>
using namespace std;

typedef struct mahasiswa
{
    string Nama;
    string Nim;
    int score[5];
    void printData()
    {
        cout << "Nama :" << Nama <<endl;
        cout << "Nim :" << Nim <<endl;
        for(int i = 0; i < 5; i++)
        {
            cout << "Nilai " << i+1 << ":" << score[i] <<endl;
        }
    }

    void swapScore(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int sumScore(int *arr, int n)
    {
        if(n == 0)
        {
            return score[0];
        }
        return score[n] + sumScore(arr, n-1);
    }

    void bubblesort(int arr[], int n)
    {
        if(n<=1)
        {
            return;
        }
        else
        {
            for(int i=0; i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    swapScore(&arr[i],&arr[i+1]);
                }
            }
            bubblesort(arr,n-1);
        }
    }
}mahasiswa;

int main() {
    mahasiswa m1 = {"Aufa Fadholi Suharyoto", "A11.2022.14502", {99, 85, 88, 90, 95}};
    cout << "Before Swap:" << endl;

    m1.printData();

    cout << "\nAfter Swap:" << endl;
    m1.swapScore(&m1.score[2], &m1.score[3]);
    m1.printData();

    int n = sizeof(m1.score)/sizeof(m1.score[0]);
    cout << "Nilai Rata-rata:" << m1.sumScore(m1.score, n)/n << endl;

    m1.bubblesort(m1.score,n);
    cout<<"\nAfter sorting:"<<endl;
    m1.printData();

    return 0;
}

#include <iostream>

using namespace std;

void printArray(int Arry[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << Arry[i] << " ";
    }
    cout << endl;
}

void Bubblesort(int Arry[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
             if(Arry[j] < Arry[j+1])
             {
                 int temp = Arry[j];
                 Arry[j] = Arry[j+1];
                 Arry[j+1] = temp;
             }
        }
    }
}

void insertionsort(int Arry[], int n)
{
    for(int step = 1; step < n; step++)
    {
        int key = Arry[step];
        int j = step-1;

        while (key > Arry[j] && j <= 0)
        {
            Arry[j+1] = Arry[j];
            j--;
        }
        Arry[j+1] = key;
    }
}

int main()
{
    int data[] = {1,2,1,4,3,2,5};
    int len = sizeof(data)/sizeof(data[0]);
    cout << "Array sebelum di sort: " << endl;
    printArray(data, len);
    cout << endl;

    cout << "Array setelah bubble sort: " << endl;
    Bubblesort(data, len);
    printArray(data, len);
    cout << endl;

    cout << "Array setelah selection sort: " << endl;
    insertionsort(data, len);
    printArray(data, len);


}

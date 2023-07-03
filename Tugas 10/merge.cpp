#include <iostream>
#include <ctime>
using namespace std;

void merge(int arry[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arry[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arry[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arry[k] = L[i];
            i++;
        } else {
            arry[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arry[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arry[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arry[], int l, int r) {
    if (l < r) {

        int m = l + (r - l) / 2;


        mergeSort(arry, l, m);
        mergeSort(arry, m + 1, r);

        merge(arry, l, m, r);
    }
}


void printArray(int arry[], int size) {
    for (int i = 0; i < size; i++)
        cout << arry[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {-2, 45, 0, 11, -9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:\n";
    printArray(arr, size);

    clock_t start = clock();

    mergeSort(arr, 0, size - 1);

    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Sorted Array in Ascending Order:\n";
    printArray(arr, size);

    cout << "Time taken by Merge Sort: " << timeTaken << " seconds" << endl;

    return 0;
}

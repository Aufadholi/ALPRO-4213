#include <iostream>
#include <ctime>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arry[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arry[j] < arry[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arry[i], &arry[minIndex]);
    }
}

void printArray(int arry[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-2, 45, 0, 11, -9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:\n";
    printArray(arr, size);

    clock_t start = clock();

    selectionSort(arr, size);

    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Sorted Array in Ascending Order:\n";
    printArray(arr, size);

    cout << "Time taken by Selection Sort: " << timeTaken << " seconds" << endl;

    return 0;
}

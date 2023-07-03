#include <iostream>
#include <ctime>
using namespace std;


int binarySearch(int arry[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arry[mid] == target) {
            return mid;
        } else if (arry[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 5, 7, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;


    clock_t start = clock();

    int index = binarySearch(arr, 0, size - 1, target);


    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Target found at index " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }

    cout << "Time taken by Binary Search: " << timeTaken << " seconds" << endl;

    return 0;
}

#include <iostream>
#include <ctime>
using namespace std;


void bubbleSort(int arry[], int size) {
  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (arry[i] > arry[i + 1]) {
        int temp = arry[i];
        arry[i] = arry[i + 1];
        arry[i + 1] = temp;
      }
    }
  }
}


void printArray(int arry[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << arry[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);


  clock_t start = clock();

  bubbleSort(data, size);


  clock_t end = clock();

  double timeTaken = double(end - start) / CLOCKS_PER_SEC;

  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);

  cout << "Time taken by Bubble Sort: " << timeTaken << " seconds" << endl;

  return 0;
}

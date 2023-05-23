#include <iostream>

using namespace std;

bool Ganjil(int n);
void minEven(int arr[], int n);
int main(){
    int data[]={6,7,4,3,2};
    int n= sizeof(data)/sizeof(data[0]);
    minEven(data, n);
    return 0;
}
void minEven(int Arr[], int n){
    int min = Arr[0];
    int idx = 0;
    for(int i = 0; i < n; i++){
        if(Arr[i] <= min && !Ganjil(Arr[i])){
            min = Arr[i];
            idx = i;
        }
    }
    cout << "\nNilai genap terkecil : " << min << "\nIndex : "<< idx << endl;
}
bool Ganjil(int n){
    if(n % 2 != 0){
        return true;
    }else{
        return false;
    }
}

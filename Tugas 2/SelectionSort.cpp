#include <iostream>

using namespace std;

#define N 5

void SelectionSort(int *x){
    int imaks,temp;
    for(int i = N-1; i >= 1; i--){
        imaks = 0;
        for(int j = 1; j <= i; j++)
            if(x[j] > x[imaks])
                imaks = j;
        temp = x[i];
        x[i] = x[imaks];
        x[imaks] = temp;
    }
}

void printArray(int *x){
    for(int i = 0; i < N; i++)
    {
        cout << " " << x[i];
    }
    cout << endl;
}

int main(){
    int x[N] = {1,3,99,2,4};
    cout << "Sebelum sort : "; printArray(x);
    SelectionSort(x);
    cout << "Setelah sort : "; printArray(x);
}
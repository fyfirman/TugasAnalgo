#include <iostream>

using namespace std;

#define N 4

int CariMaks(int x[]){
    int maks = x[0];
    for(int i = 1; i < N; i++){
        if(x[i] > maks)
            maks = x[i];
    }
    return maks;
}

int main(){
    int x[N] = {1,3,99,2};
    cout << CariMaks(x);
}
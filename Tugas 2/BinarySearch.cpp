#include <iostream>

using namespace std;

#define N 5

int BinarySearch(int *x, int y){
    int i = 0,j = N,mid;
    bool found = false;
    while (!found && i<=j){
        mid = (i+j)/2;
        if( x[mid] == y )
            found = true;
        else if( x[mid] < y)
            i = mid + 1;
        else
            j = mid - 1;
    }

}

int main(){
    int x[N] = {1,3,99,2,4};
    cout << "Index key : " << BinarySearch(x,2);
}
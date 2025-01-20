#include <iostream>

using namespace std;

void bubbleSort(int A[], int n) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (A[i] < A[i - 1]) {
                swap(A[i], A[i - 1]);
                swapped = true;
            }
        }
    }
}
int main(){
    int A[5] = {5,4,3,2,1};
    bubbleSort(A, 5);
    for (int i : A) {
        cout << i << endl;
    }
    return 0;
}

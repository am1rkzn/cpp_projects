#include <iostream>

using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    cout << "Enter two numbers: ";
    int n1,n2;
    cin >> n1 >> n2;
    cout << n1 << " " << n2 << endl;
    swap(&n1, &n2);
    cout << n1 << " " << n2 << endl;
}

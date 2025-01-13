#include <iostream>

using namespace std;

int main() {
    int n1 = 10;
    int* ptr = &n1;
    int n2 = *ptr;
    cout << n2;
}

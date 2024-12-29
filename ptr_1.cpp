#include <iostream>

using namespace std;
int main() {
    int num1 = 10;
    int* ptr = &num1;
    cout << num1 << endl; // 10
    cout << ptr << endl; // 0xd756dff664
    cout << *ptr << endl; // 10
    cout << &num1 << endl; // 0xd756dff664
    return 0;
}

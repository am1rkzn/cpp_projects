#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = sum(num1,num2);
    cout << num3 << endl;
}

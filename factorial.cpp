#include <iostream>

using namespace std;

int factorial(int num1) {
    int res = 1;
    for (int i = 1; i<= num1; i++) {
        res *= i;
    }
    return res;
}
int main() {
    int num1;
    cin >> num1;
    cout << factorial(num1) << endl;
}

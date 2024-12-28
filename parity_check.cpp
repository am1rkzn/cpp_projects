#include <iostream>

using namespace std;
int check(int n1) {
    if (n1%2==0) {
        return 1;
    }
    return 0;
}
int main() {
    int n1;
    cout << "Enter number: ";
    cin >> n1;
    if (check(n1)==1) {
        cout << "Odd number!\n";
    } else {
        cout << "Even number!\n";
    }
}

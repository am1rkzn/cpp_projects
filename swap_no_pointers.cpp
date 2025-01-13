#include <iostream>

using namespace std;

int main() {
    cout << "Enter two numbers: ";
    int n1,n2;
    cin >> n1 >> n2;
    cout << n1 << " " << n2 << endl;
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << n1 << " " << n2 << endl;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int open_file(string str) {

    ifstream file (str);
    if (!file.is_open()) {
        cerr << "Error opening the file!";
    }
    string s;
    while (getline(file, s)) {
        cout << s << endl;
    }
    file.close();
    return 0;

}
int main() {
    open_file("input.txt");
}


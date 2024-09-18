#include <iostream>
using namespace std;

int main() {
    long double epsilon = 1;
    int n = 0;
    while (1 + epsilon != 1) {
        n++;
        epsilon = epsilon / 10;
        cout << epsilon << endl;
    }

    cout << n;
}
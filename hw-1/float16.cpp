#include <iostream>
#include "half.hpp"
using namespace std;
using half_float::half;

int main() {
    half epsilon(1);
    int n = 0;
    while (1 + epsilon != 1) {
        n++;
        epsilon = epsilon / 10;
        cout << epsilon << endl;
    }

    cout << n;
}
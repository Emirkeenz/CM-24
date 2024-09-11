#include <iostream>
using namespace std;

int main() {
    double epsilon = 1;
    int n = 0;
    while ((1+epsilon) != 1) {
        epsilon /= 10;
        ++n;
    }
    cout << n;
}
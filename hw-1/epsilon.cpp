#include <iostream>
using namespace std;

int main() {
    long double epsilon = 1;
    int n = 0;
    while ((1+epsilon) != 1) {
        epsilon /= 10;
        n++;
        cout << epsilon << " " << n << endl;
    }
    cout << "The amount iterations before epsilon becomes zero is " << n;
}
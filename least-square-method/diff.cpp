#include <iostream>
#include <cmath>
using namespace std;

double solveDiffEquation(double x) {
    return exp(pow(x, 2) / 2);
}

int main() {
    double x, y;
    cin >> x;
    y = solveDiffEquation(x);
    cout << "The solution of the equation when x = " << x << " is equal to y = " << y;
    return 0;
}
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    long double f, I = 0;
    long double b = 3 * (M_PI / 2), a = M_PI;
    int k = 0;
    long long n = 100000000;
    do {
        long double r = (b - a) * (((double)(rand() % RAND_MAX) + 1) / RAND_MAX) + a;
        f = sin(r);
        I += f*r;
        k++;
    } while (k <= n);
    cout << "Значение интеграла: " << I/k << endl;
    return 0;
}
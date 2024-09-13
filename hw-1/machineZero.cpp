#include <iostream>
using namespace std;

int main() {
    double z = 1;
    int n = 0;
    do {
        z /= 10;
        n++;
        cout << z << " " << n << endl;
    } while (2*z > z);
    cout << "The amount iterations before z becomes zero is " << n;
}
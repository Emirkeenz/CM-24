#include <iostream>
using namespace std;

int main() {
    int n = 0;
    double i = 1;
    do
    {
        if (i*2 == i) break;
        n++;
        i*=10;
        cout << i << " " << n << endl;
    } while (i*2!=i);
    cout << "Number of zeros " << n << endl;
}
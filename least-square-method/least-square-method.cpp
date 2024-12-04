#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> xArr = {1, 2, 3};
    vector<double> yArr = {1, 4, 9};
    double esp_x = 0, esp_y = 0, eps_xy = 0;
    double eps_xInPow = 0, eps_yInPow = 0, a = 0, b = 0;

    for (auto i : xArr) {
        esp_x += i;
        eps_xInPow += i*i;
    }

    for (auto i : yArr) {
        esp_y += i;
    }

    for (int i = 0; i < xArr.size(); i++)
    {
        eps_xy += xArr[i] * yArr[i];
    }

    a = (xArr.size() * eps_xy - esp_x * esp_y) / (xArr.size()*eps_xInPow - esp_x * esp_x);
    b = (esp_y - a * esp_x) / xArr.size();
    
    if (b >= 0) {
        cout << "y = " << a << "x + " << b;
    } else {
        cout << "y = " << a << "x - " << b;
    }
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    double num;
    int n;
    cout << "Enter your number that the programm will convert to the binary system: ";
    cin >> num;
    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = abs(num);
    }
    
    cout << "Enter a number for printing out decimal: ";
    cin >> n;
    cout << endl;
    int fullNum = num;
    long double decimal = num - fullNum;
    vector<int> wholeArr;
    bool isZero = false;
    do {
        int carry = fullNum % 2;
        wholeArr.push_back(carry);
        fullNum /= 2;
    } while (fullNum != 0);
    
    cout << "The number in binary system is: ";
    if (isNegative)
    {
        cout << "-";
    }
    
    for (int i = wholeArr.size()-1; i >= 0; i--)
    {
        cout << wholeArr[i];
    }
    cout << ".";
    int lastDecimalDigit = 0;
    bool continueLoop = false;
    for (int i = 0; i < n; i++) {
        decimal *= 2;
        if (decimal >= 1) {
            lastDecimalDigit = 1;
            decimal -= 1;
        } else {
            lastDecimalDigit = 0;
        }
        
        // if (i == n - 1 && lastDecimalDigit == 1) {
        //     continueLoop = true;
        // } 
        // cout << lastDecimalDigit;
        // if (i >= n && lastDecimalDigit == 0) {
        //     continueLoop = false;
        // }
    }
    cout << lastDecimalDigit;
    return 0;
}
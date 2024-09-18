#include <iostream>
#include <vector>
using namespace std;

int main() {
    double num;
    int n;
    cout << "Enter your number that the programm will convert to the binary system: ";
    cin >> num;
    cout << "Enter a number for printing out decimal: ";
    cin >> n;
    cout << endl;
    int fullNum = num;
    long double decimal = num - fullNum;
    vector<int> wholeArr;
    vector<int> decimalArr;
    bool isZero = false;
    do
    {
        int carry = fullNum % 2;
        wholeArr.push_back(carry);
        fullNum /= 2;
    } while (fullNum != 0);
    for (int i = 0; i < n || (isZero && decimalArr[decimalArr.size() - 1] != 0); i++)
    {
        decimal *= 2;
        int unit = 0;
        if (decimal >= 1)
        {
            unit++;
            decimal -= 1;
        }
        decimalArr.push_back(unit);
        if (i == n - 1 && unit == 1)
        {
            isZero = true;
        }
        else if (i == n - 1 && unit == 0) {
            isZero = false;
        }
    }
    
    cout << "The whole part in binary system is: ";
    for (int i = wholeArr.size()-1; i >= 0; i--)
    {
        cout << wholeArr[i];
    }
    cout << "\nThe decimal part in binary system is: ";
    for (int i = 0; i < decimalArr.size(); i++)
    {
        cout << decimalArr[i];
    }
    
    return 0;
}
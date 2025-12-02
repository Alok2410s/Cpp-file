#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;  

    while (num > 0) {
        digit = num % 10;        // last digit nikalo
        rev = rev * 10 + digit;  // reverse banao
        num = num / 10;          // last digit hatao
    }

    cout << "Reverse of " << original << " = " << rev << endl;

    return 0;
}

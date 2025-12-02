#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;  

    // reverse number
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    // check palindrome
    if (original == rev)
        cout << original << " is a Palindrome number." << endl;
    else
        cout << original << " is NOT a Palindrome number." << endl;

    return 0;
}

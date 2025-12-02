#include <iostream>
using namespace std;

// Call by Value (does not change original)
int squareByValue(int n) {
    return n * n;
}

// Call by Reference (changes original value)
void squareByReference(int &n) {
    n = n * n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    
    cout << "Square of " << num << " (Call by Value) = " << squareByValue(num) << endl;

    
    squareByReference(num);
    cout << "Square using Call by Reference (Original changed) = " << num << endl;

    return 0;
}

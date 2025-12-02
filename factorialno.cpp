#include <iostream>
using namespace std;

// Recursive function
int factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative function
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " using recursion: " << factorial_recursive(num) << endl;
        cout << "Factorial of " << num << " using iteration: " << factorial_iterative(num) << endl;
    }

    return 0;
}
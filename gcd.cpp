#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Greatest common divisor (GCD of " << num1 << " and " << num2 << " = " << gcd(num1, num2) << endl;

    return 0;
}

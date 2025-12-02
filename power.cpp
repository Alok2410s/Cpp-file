#include <iostream>
using namespace std;


double power(double base, int exp) {
    if (exp == 0)         
        return 1;
    else if (exp > 0)    
        return base * power(base, exp - 1);
    else                 
        return 1 / power(base, -exp);
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " raised to the power " << exponent << " = " 
         << power(base, exponent) << endl;

    return 0;
}

#include <iostream>
using namespace std;

int sumRecursive(int n) {
    if (n == 1)        
        return 1;
    else
        return n + sumRecursive(n - 1);  // recursive call
}

int main() {
    int n = 10;  
    cout << "Sum of first 10 natural numbers = " << sumRecursive(n) << endl;
    return 0;
}

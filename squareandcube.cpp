#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;
    int cube = num * num * num;

    cout << "Square of " << num << " = " << square << endl;
    cout << "Cube of " << num << " = " << cube << endl;

    return 0;
}
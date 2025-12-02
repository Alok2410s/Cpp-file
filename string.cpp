#include <iostream>
using namespace std;

int main() {
    int i;
    string str = "HelloWorld";
    string rev = "";

    for ( i = str.length() - 1; i >= 0; i--) {
        rev += str[i];  
    }

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << rev << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i, n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for ( i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for ( i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum value is: " << maximum << endl;
    cout << "Minimum value is: " << minimum << endl;

    return 0;
}

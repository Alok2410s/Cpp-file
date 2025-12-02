#include <iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  
    int sum = 0;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];    
        sum += arr[i];     
    }

    cout << "Sum of array  = " << sum << endl;

    return 0;
}

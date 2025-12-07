#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements (top -> bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack<int> s;
    cout << "How many elements would you like to push initially? ";
    int n;
    if (!(cin >> n) || n < 0) return 0;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.push(x);
    }

    while (true) {
        cout << "\nMenu:\n"
             << "1. Push\n"
             << "2. Pop\n"
             << "3. Top\n"
             << "4. Display all\n"
             << "5. Size\n"
             << "6. Empty?\n"
             << "0. Exit\n"
             << "Choose an option: ";
        int choice;
        if (!(cin >> choice)) break;

        switch (choice) {
            case 1: {
                cout << "Enter value to push: ";
                int v; cin >> v;
                s.push(v);
                break;
            }
            case 2:
                if (s.empty()) cout << "Cannot pop: stack is empty\n";
                else { cout << "Popped: " << s.top() << "\n"; s.pop(); }
                break;
            case 3:
                if (s.empty()) cout << "Stack is empty\n";
                else cout << "Top: " << s.top() << "\n";
                break;
            case 4:
                printStack(s);
                break;
            case 5:
                cout << "Size: " << s.size() << "\n";
                break;
            case 6:
                cout << (s.empty() ? "Empty\n" : "Not empty\n");
                break;
            case 0:
                return 0;
            default:
                cout << "Invalid option\n";
        }
    }

    return 0;
}
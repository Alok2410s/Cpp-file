#include<iostream>
#include<stack>
using namespace std;
int precedence(char op) {
    
    if(op == '^')
        return 3;
    if(op == '*' || op == '/' || op == '%')
        return 2;
    if(op == '+' || op == '-')
        return 1;
        else 
        return 0;

}
// function check if the character is operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%');
}

// main function 
string infixToPostfix(const string& infix) {
    stack<char> opStack; 
    
    string postfix;

    for(char c : infix) {
        
        
        if(isalnum(c)) {
            postfix += c;
        }
        
        else if(c == '(') {
            opStack.push(c);
        }
       
        else if(c == ')') {
            while(!opStack.empty() && opStack.top() != '(') {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.pop(); // pop '('
        }

        else if(isOperator(c)) {
            while(!opStack.empty() && precedence(opStack.top()) >= precedence(c)) {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.push(c);
        }
    }

    // pop all the operators from the stack
    while(!opStack.empty()) {
        postfix += opStack.top();
        opStack.pop();
    }

    return postfix;
}
int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
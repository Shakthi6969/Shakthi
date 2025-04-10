#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a, b; 
    char op; 

    cout << "Input two numbers and an operator" << endl; 
    cout << "Number input 1: ";
    cin >> a; 
    cout << "Number input 2: ";
    cin >> b; 
    cout << "Input the operator (+, -, * or /): "; 
    cin >> op; 

    switch(op)
    {
        case '+': 
            cout << "The sum is " << a + b << endl;
            break;
        case '-': 
            cout << "The difference is " << a - b << endl;
            break;
        case '*':
            cout << "The product is " << a * b << endl;
            break;
        case '/':
            cout << "The division is " << a / b << endl;
            break;
    }

    return 0;
}
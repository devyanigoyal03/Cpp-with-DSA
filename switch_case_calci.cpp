#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the values of operands:" << endl;
    cin >> a >> b;
    char op;
    cout << "Enter the arithmetic operator:" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Invalid Operator" << endl;
    }
    return 0;
}

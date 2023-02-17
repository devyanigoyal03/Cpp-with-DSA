#include <iostream>
using namespace std;
int sum(int a, int b) // Arguments or parameters
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    // pow(a,b)
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    cout << "Sum of no. from " << a << " to " << b << " : " << sum(a, b); // Caller
}
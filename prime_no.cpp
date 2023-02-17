#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    bool isPrime = 1;
    {
        cout << "Enter value of n\n";
        cin >> n;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                //cout << "Not a Prime No";
                isPrime=0;
                break;
            }
        }
        if (isPrime == 0)
        {
            cout << "Not a Prime No";
        }
        else
        {
            cout << "Is a Prime No";
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    {
        cout << "Enter value of n\n";
        cin >> n;
        int one = 0, two = 1;
        cout << one << " " << two << " ";
        for (i = 1; i <= n; i++)
        {
            int nextnum = one + two;
            cout << nextnum << " ";
            one = two;
            two = nextnum;
        }
    }
}
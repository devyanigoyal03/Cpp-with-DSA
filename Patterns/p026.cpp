#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n, print;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1, print = 1; j <= i; j++)
        {
            cout << j;
            //print++;
        }
        for (k = i-1; k >= 1; k--)
        {
            cout << k ;
        }
        cout << endl;
    }
        /*                   1234
                        1       1
                        2      121
                        3     12321
                        4    1234321
    */
}
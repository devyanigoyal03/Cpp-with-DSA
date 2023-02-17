#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int ch = n - i + 1;
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    /*                      1 2 3 4
                        1   4
                        2   3 4
                        3   2 3 4
                        4   1 2 3 4
    */
}
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        for (j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        for (j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        for (j = n - i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
/*                     1 2 3 4                 1 2 3 4
                   1   1 2 3 4           1     4 3 2 1
                   2   1 2 3 *           2     * 3 2 1
                   3   1 2 * *           3     * * 2 1
                   4   1 * * *           4     * * * 1
*/

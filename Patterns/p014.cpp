#include <iostream>
using namespace std;
int main()
{
    int i, j, n,p=4;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >=1; j--)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
    /*                      1 2 3 4
                        1   4 3 2 1
                        2   4 3 2 1
                        3   4 3 2 1
                        4   4 3 2 1
    */
}
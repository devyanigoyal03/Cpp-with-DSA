#include <iostream>
using namespace std;
int main()
{
    int i, j,k, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >=i; j--)
        {
            cout <<j;
        }
        cout << endl;
    }
    /*                      1 2 3 4
                        1   4 3 2 1
                        2   4 3 2 
                        3   4 3
                        4   4
    */
}
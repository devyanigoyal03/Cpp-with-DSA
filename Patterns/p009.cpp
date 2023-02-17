#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
/*
             1 2 3 
        1    1 2 3  
        2    1 2 3  
        3    1 2 3
*/
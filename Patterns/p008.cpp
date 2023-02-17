#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}
/*
             1 2 3 4 5
        1    1 1 1 1 1 
        2    2 2 2 2 2  
        3    3 3 3 3 3 
        4    4 4 4 4 4 
        5    5 5 5 5 5

*/
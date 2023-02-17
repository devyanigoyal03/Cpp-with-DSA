#include <iostream>
using namespace std;
int main()
{
    int i, j, n, print=1;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << print << " ";
            print++;
        }
        cout << endl;
    }
}
/*
     1 2 3 4 
     5 6 7 8 
     9 10 11 12 
     13 14 15 16  
*/
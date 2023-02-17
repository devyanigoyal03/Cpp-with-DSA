#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    char a='A';
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
    cout << endl;
}
/*
             1 2 3 4 
        1    A A A A 
        2    B B B B 
        3    C C C C 
        4    D D D D

*/
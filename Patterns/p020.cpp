#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        char a='A'+n-i;
        //cout<<a;
        for (j = 1; j <= i; j++)
        {
            cout<<a<<" ";
            a++;  
        }
        cout << endl;
    }
    cout << endl;
}
/*
             1 2 3 4 
        1    D 
        2    C D 
        3    B C D 
        4    A B C D

*/
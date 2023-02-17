#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        char a='A'+i-1;
        for (j = 1; j <= n; j++)
        {
            cout<<a<<" ";
            a++;  
        }
        cout << endl;
    }
    cout << endl;
}
/*
             1 2 3 
        1    A B C
        2    B C D
        3    C D E
*/
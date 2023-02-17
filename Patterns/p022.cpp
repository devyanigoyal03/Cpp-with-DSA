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
        1    A                  
        2    B C                
        3    C D E              
        4    D E F G            

*/
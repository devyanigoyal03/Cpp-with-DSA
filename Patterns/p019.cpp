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
            a++;
        }
        cout << endl;
    }
    cout << endl;
}
/*
             1 2 3 4 
        1    A B C D 
        2    E F G H 
        3    I J K L 
        4    M N O P

*/
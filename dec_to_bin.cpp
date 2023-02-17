#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, ans[32];
    cout << "Enter the value of n\n";
    cin >> n;
    int rem=n%2;
    while(n)
    {
        ans[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0;j--)
    {
        cout<<ans[j];
    }
}
/*
        15

15/2=7      r=1   1
 7/2=3      r=1   11
 3/2=1      r=1   
 1/2=0      r=1

       1111
*/
#include <iostream>
#include <math.h>
using namespace std;
int setbits(int n)
{
    int ans = 0;
    while (n)
    {
        if(n&1)
        {
            ans=ans+1;
        }
        n=n>>1;
    }
    return ans;
}
int main()
{
    int a, b, c, d;
    cout << "Enter the number" << endl;
    cin >> a >> b;
    c = setbits(a);
    d = setbits(b);
    cout << c + d;
    return 0;
}
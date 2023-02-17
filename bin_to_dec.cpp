#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i=0, digit, ans,sum=0;
    cout << "Enter the value of n\n";
    cin >> n;
    while(n)
    {
        digit=n%10;
        ans=(digit*pow(2,i));
        sum+=ans;
        n=n/10;
        i++;
    }
    cout<<sum;
}
/*
        1010

    0*2^0=0
    1*2^1=2
    0*2^2=0
    1*2^3=8

        0+2+0+8=10
*/
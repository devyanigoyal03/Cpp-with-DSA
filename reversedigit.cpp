#include <iostream>
using namespace std;
int main()
{
    int n,ans=0,digit;
    cout << "Enter the value of n" << endl;
    cin >> n;
    while(n)
    {
        digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<ans;
}
 
#include <iostream>
using namespace std;
int main()
{
    //pow(a,b)
    int a, b,ans=1;
    cout << "Enter the values of a and b" << endl;
    cin >> a>>b;
    for(int i=1; i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<ans;
}
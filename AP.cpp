#include <iostream>
using namespace std;
int AP(int n)
{
    int ap=(3*n+7);
    return ap;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int ans=AP(n);
    cout<<ans;
}
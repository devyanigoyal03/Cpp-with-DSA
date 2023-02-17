#include <iostream>
using namespace std;
int pow(int x, int y) //Arguments or parameters
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}
int main()
{
    // pow(a,b)
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    cout <<"Power("<<a<<","<<b<<") = "<<pow(a, b); //Caller
}

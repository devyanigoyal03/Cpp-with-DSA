#include <iostream>
using namespace std;
bool isprime(int n)
{
    // 1 -> Prime and 0 -> Not Prime
    int flag=1;
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isprime(n))
    {
        cout<<n<<" is a prime no.";
    }
    else{
        cout<<n<<" not a prime no.";
    }
    return 0;
}
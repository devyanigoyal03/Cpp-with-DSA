#include<iostream>
using namespace std;
void evenodd(int num)
{
    if(num%2==0)
    {
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    evenodd(n);
    return 0;
}
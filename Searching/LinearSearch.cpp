#include <iostream>
using namespace std;
int LS(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, arr[20], i, key,loc;
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the values of array\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched\n";
    cin >> key;
    loc=LS(arr, n, key);
    if(loc==-1)
    {
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found at index "<<loc<<endl;
    }
}

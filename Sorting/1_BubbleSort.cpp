#include <iostream>
using namespace std;
void printarr(int arr[20],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int bubblesort(int arr[20], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array is\n";
    printarr(arr,n);
    return 0;
}
int main()
{
    int n, arr[20];
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the values of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
}

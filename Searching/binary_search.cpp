#include <iostream>
using namespace std;

// For Binary Search, array must be sorted

int BS(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, arr[20], i, key, loc;
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the values of array in ascending order\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched\n";
    cin >> key;
    loc = BS(arr, 0, n, key);
    if (loc == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at index " << loc << endl;
    }
}
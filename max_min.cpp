#include <iostream>
using namespace std;
int main()
{
    int n, arr[20], min = 999, max = 0, i;
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the values of array\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "\nMax element in array" << max << endl;
    cout << "Min element in array" << min << endl;
}
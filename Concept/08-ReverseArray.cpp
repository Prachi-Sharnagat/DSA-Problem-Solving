#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return;
}

int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;
    cout << endl;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    reverseArray(array);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
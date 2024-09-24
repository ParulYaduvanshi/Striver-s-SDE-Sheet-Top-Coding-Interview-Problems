#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int> &arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > 2 * arr[j])
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;           // Read the size of the array
    vector<int> arr(n); // Declare a vector of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the array
    }

    int result = reversePairs(arr, n); // Get the count of reverse pairs
    cout << result << endl;            // Output the result
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sorting(vector<int> &arr, int n)
{
    // bubble sort
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = sorting(arr, n);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}

/*
we cal also use dutch national flag algorithm to solve this question.
#include <iostream>
using namespace std;

void sort012(int *arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    // Using Dutch National Flag algorithm
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {2, 0, 1, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort012(arr, n);
    return 0;
}

*/
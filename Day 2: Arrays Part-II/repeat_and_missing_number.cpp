#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> repeatAndMissing(vector<int> &arr)
{
    map<int, int> mp;
    vector<int> res;
    int sum = 0;
    for (auto i : arr)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
        {
            res.push_back(i.first);
        }
        sum += i.first;
    }
    int n = arr.size();
    int sum_n = (n * (n + 1)) / 2;
    int missing = sum_n - sum;
    res.push_back(missing);
    // for (auto i : res)
    // {
    //     cout << i << " ";
    // }     //valid only when we use void data type instead of vector

    return res;
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
    vector<int> result=repeatAndMissing(arr);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}
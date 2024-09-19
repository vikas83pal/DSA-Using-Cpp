#include <bits/stdc++.h>
using namespace std;
int checkDuplicateElement(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = checkDuplicateElement(arr, n);
    cout << res;
    return 0;
}
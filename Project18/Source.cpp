
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int arr[n];
        for (int i = 0;i < n;i++)
            cin >> arr[i];

        sort(arr, arr + n); //min=arr[0]
        for (int i = 0;i < n;i++)
        {
            sum += arr[i] - arr[0];
        }
        cout << sum << endl;

    }




}
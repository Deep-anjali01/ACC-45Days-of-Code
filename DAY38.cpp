#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    long int n, sum = 0, sum2 = 0, a = 0;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
      sum2 += arr[i];
    }
    sum2 = sum + sum2;
    for (int i = 1; i < sum2; i++)
    {
      if ((i * (i + 1)) == sum2 * 2)
        a = i;
    }

    if (a >= arr[n - 1])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
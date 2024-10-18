#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    };
    long long sum = 0;
    int mx = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
      sum += arr[i];
      mx = max(mx, arr[i]);
      if (sum - mx == mx)
      {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}

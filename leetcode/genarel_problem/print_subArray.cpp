#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    v.push_back(val);
  };
  int ans = INT_MIN;
  for (int st = 0; st < n; st++)
  {
    int mx = 0;
    for (int end = st; end < n; end++)
    {
      int count = 0;
      //
      for (int i = st; i <= end; i++)
      {
        count += v[i];
        cout << v[i] << " ";
      }
      mx = max(mx, count);
      cout << " ";
    }
    ans = max(ans, mx);
    cout << "\n";
  }
  // cout << ans;
  return 0;
}

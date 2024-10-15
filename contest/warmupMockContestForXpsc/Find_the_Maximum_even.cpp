#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  };

  int mx = 0;

  for (int i = 0; i < n; i++)
  {
    if (v[i] % 2 == 0)
    {
      mx = max(mx, v[i]);
    }
  };

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int val = v[i] + v[j];
      if (val % 2 == 0)
      {
        mx = max(mx, val);
      }
    }
  }
  cout << mx << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO             \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

int32_t main()
{
  fastIO;
  // CODE HERE
  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.rbegin(), v.rend());
  ll sum = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] == v[i - 1])
    {
      v[i]--;
      if (v[i] <= 0)
        break;
      sum += v[i];
    }
    else
    {
      sum += v[i];
    }
  }
  cout << sum << endl;
  return 0;
}
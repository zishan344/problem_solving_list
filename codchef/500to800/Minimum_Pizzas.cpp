#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    int total_pc = n * x;
    int m = total_pc % 4;
    if (m != 0)
    {
      int ans = (total_pc - m) / 4 + 1;
      cout << ans << endl;
    }
    else
    {
      cout << total_pc / 4 << endl;
    }
  }

  return 0;
}

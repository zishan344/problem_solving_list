#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;

    int totalMonth = 0;
    if (x < y)
    {
      int ans = floor(y / x);
      if (ans * x == y)
      {
        cout << ans - 1 << endl;
      }
      else
      {

        cout << y / x << endl;
      }
    }
    else
    {
      cout << 0 << endl;
    }
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    int cnt = 0;
    if (x * y <= z)
    {
      cout << cnt << endl;
    }
    else
    {

      while ((x * y) > z)
      {
        x--;
        cnt++;
      };
      cout << cnt << endl;
    }
  }

  return 0;
}

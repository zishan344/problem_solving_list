#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    if (x > 100 && x <= 1000)
    {
      // 25
      cout << x - 25 << endl;
    }
    else if (x > 1000 && x <= 5000)
    {
      // 100
      cout << x - 100 << endl;
    }
    else if (x > 5000)
    {
      // 500
      cout << x - 500 << endl;
    }
    else
    {
      cout << x << endl;
    }
  }

  return 0;
}

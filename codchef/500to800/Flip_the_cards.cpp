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
    int total_down = n - x;
    if (x == 0 || n == x)
    {
      cout << 0 << endl;
    }
    else if (total_down < x)
    {
      cout << n - x << endl;
    }
    else
    {
      cout << x << endl;
    }
  }

  return 0;
}
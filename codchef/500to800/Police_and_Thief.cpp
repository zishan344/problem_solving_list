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
    int result;

    if (x < y)
    {
      result = y - x;
    }
    else if (x > y)
    {
      result = x - y;
    }
    else
    {
      result = x - y;
    }
    cout << result << endl;
  }

  return 0;
}
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
    if (x < n)
    {
      int totalPacketNeed = (n - x);
      cout << ceil(totalPacketNeed / 4.00) << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }

  return 0;
}

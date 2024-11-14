#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, a, b;
    cin >> x >> a >> b;
    int total = (1 * a) + (2 * b);
    if (total >= x)
    {
      cout << "Qualify\n";
    }
    else
    {
      cout << "NotQualify\n";
    }
  }

  return 0;
}

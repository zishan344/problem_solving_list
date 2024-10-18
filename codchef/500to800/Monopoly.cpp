#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  while (q--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > (b + c + d) || b > (a + c + d) || c > (a + b + d) || d > (a + b + c))
    {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }

  return 0;
}

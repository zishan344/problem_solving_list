#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mx = INT_MIN;
    mx = max(mx, a + c);
    mx = max(mx, a + d);
    mx = max(mx, b + c);
    mx = max(mx, b + d);
    cout << mx << endl;
  }

  return 0;
}
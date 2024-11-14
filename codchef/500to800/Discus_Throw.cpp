#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  int tc;
  tc = t;
  while (tc--)
  {
    int mx = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
      //  cout << 1 + i << " ";
      int a;
      cin >> a;
      mx = max(mx, a);
    }
    cout << mx << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int even = 0;
  int odd = 0;
  while (t--)
  {
    int a;
    cin >> a;
    // cout << a << endl;
    if (a % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  // cout << even << " " << odd << endl;
  if (even > odd)
  {
    cout << "READY FOR BATTLE" << endl;
  }
  else
  {
    cout << "NOT READY" << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    float a, b;
    cin >> a >> b;

    if (2 * b >= a)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}

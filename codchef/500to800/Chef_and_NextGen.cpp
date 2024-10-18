#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int requiredPower = a * b;
    int totalPower = x * y;
    if (totalPower >= requiredPower)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    };
  }

  return 0;
}

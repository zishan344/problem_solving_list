#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a;
    cin >> a;
    if (a <= 15)
    {
      if (a > 10)
      {
        cout << "Lower Single\n";
      }
      else
      {
        cout << "Lower Double\n";
      }
    }
    else
    {
      if (a > 25)
      {
        cout << "Upper Single\n";
      }
      else
      {
        cout << "Upper Double\n";
      }
    }
  }

  return 0;
}

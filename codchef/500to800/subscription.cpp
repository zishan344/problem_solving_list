#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  // long solution
  /* while (t--)
  {
    int a, b;
    cin >> a >> b;
    int mod = a % 6;

    if (mod == 0)
    {
      // int ans = (a/6)
      cout << (a / 6) * b << endl;
    }
    else
    {
      int m = (a - mod) / 6;

      cout << (m + 1) * b << endl;
    }
  }; */
  // optimize solution
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int m = a / 6;
    if (a % 6 != 0)
      m++;
    cout << m * b << endl;
  }
}

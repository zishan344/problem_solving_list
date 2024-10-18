#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    // optimal version
    n == 3 ? cout << n << endl : cout << 2 << endl;
    // un optimal
    /* int s = 0;
    int ind;
    for (int i = 2; i <= n; i++)
    {
      int sum = 0;
      for (int j = 1; j <= n; j++)
      {
        if ((i * j) <= n)
        {
          sum += i * j;
        }
        else
          break;
      };
      s = max(s, sum);
      if (s == sum)
      {
        ind = i;
      }
        };
    cout << ind << endl;*/
  }
  return 0;
}

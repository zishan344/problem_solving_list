#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, age;
    cin >> n >> age;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      if (a >= age)
      {
        cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}

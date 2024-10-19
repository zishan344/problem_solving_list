#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int contestant[n];
  for (int i = 0; i < n; i++)
  {
    cin >> contestant[i];
  };
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (contestant[i] >= contestant[k - 1])
    {
      if (contestant[i] != 0)
      {
        cnt++;
      }
    };
  };
  cout << cnt << endl;

  return 0;
}

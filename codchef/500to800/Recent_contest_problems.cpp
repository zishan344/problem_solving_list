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
    string arr[n];
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] == "START38")
      {
        cnt1++;
      }
      else if (arr[i] == "LTIME108")
      {
        cnt2++;
      }
    }
    cout << cnt1 << " " << cnt2 << endl;
  }

  return 0;
}

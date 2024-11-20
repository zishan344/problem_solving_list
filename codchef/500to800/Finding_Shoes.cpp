#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;

    int leftShowNeeded = n - m;
    leftShowNeeded = leftShowNeeded < 0 ? 0 : leftShowNeeded;
    cout << leftShowNeeded + n << endl;
  }

  return 0;
}
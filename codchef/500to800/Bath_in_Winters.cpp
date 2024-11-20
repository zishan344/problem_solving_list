#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int perPersonNeedWater = y * 2;
    int totalPersonCanBath = x / perPersonNeedWater;
    cout << totalPersonCanBath << endl;
  }

  return 0;
}

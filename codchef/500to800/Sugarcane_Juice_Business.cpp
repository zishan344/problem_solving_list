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
    int totalJuicerPrice = 50 * n;
    int totalProfit = (totalJuicerPrice / 100.00) * 30;
    cout << totalProfit << endl;
  }

  return 0;
}

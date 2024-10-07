#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, w;
  cin >> n >> w;
  int weight[n], value[n];
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    weight[i] = a;
    value[i] = b;
  }

  int dp[n + 1][w + 1];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= w; j++)
    {
      if (i == 0 || j == 0)
        dp[i][j] = 0;
    }
  };

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      if (weight[i - 1] <= j)
      {
        int op1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
        int op2 = dp[i - 1][j];
        dp[i][j] = max(op1, op2);
      }
      else
      {
        int op2 = dp[i - 1][j];
        dp[i][j] = op2;
      }
    };
  }

    cout << dp[n][w] << " ";
  return 0;
}

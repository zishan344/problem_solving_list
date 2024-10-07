#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n, W;
  cin >> n >> W;

  int weight[n], value[n];
  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
    cin >> value[i];
  }

  int dp[n + 1][W + 1];
  for (int i = 0; i <= W; i++)
  {
    dp[0][i] = 0;
  };

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
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
    }
  };
  cout << dp[n][W];

  return 0;
}
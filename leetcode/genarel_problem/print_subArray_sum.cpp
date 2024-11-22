#include <bits/stdc++.h>
using namespace std;
/*
should revise this brouteforce approach
 int sz = nums.size();
        int maxSum = INT_MIN;
        for (int st = 0; st < sz; st++) {
            int currentSum = 0;
            for (int end = st; end < sz; end++) {
                currentSum += nums[end];
                maxSum = max(currentSum, maxSum);
            };
        };
 */
int main()
{
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    v.push_back(val);
  };
  int maxSum = INT_MIN;
  int currentSum = 0;
  for (int st = 0; st < n; st++)
  {
    currentSum += v[st];
    maxSum = max(currentSum, maxSum);
    if (currentSum < 0)
    {
      currentSum = 0;
    }
  }

  cout << maxSum;

  return 0;
}

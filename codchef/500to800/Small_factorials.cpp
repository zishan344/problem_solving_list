#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int fac;
    cin >> fac;
    long long int n = 1;
    for (int i = 1; i <= fac; i++)
    {
      n *= i;
    };
    cout << n << endl;
  }

  return 0;
}

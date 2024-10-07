#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a + b + c + d < 1 ? cout << "IN" << endl : cout << "OUT" << endl;
  }

  return 0;
}

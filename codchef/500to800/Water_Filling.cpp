#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    a + b + c > 1 ? cout << "Not now" << endl : cout << "Water filling time" << endl;
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int New = a * 2;
    if (New == b)
    {
      cout << "ANY" << endl;
    }
    else if (b < New)
    {
      cout << "FIRST" << endl;
    }
    else
    {
      cout << "SECOND" << endl;
    }
  }

  return 0;
}

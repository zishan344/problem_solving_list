#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;

    if (n % 4 == 0)
    {
      cout << "Good" << endl;
    }
    else
    {
      cout << "Not Good" << endl;
    }
  }

  return 0;
}

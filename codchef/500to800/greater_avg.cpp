#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int n;
  cin >> n;
  while (n--)
  {
    float a, b, c;
    cin >> a >> b >> c;
    float avg = (a + b) / 2;
    if (avg > c)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    };
  }
}

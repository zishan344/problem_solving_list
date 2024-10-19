#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int cnt = 0;
  while (n--)
  {
    string x;
    cin >> x;
    if (x == "X++")
    {
      cnt++;
    }
    else if (x == "++X")
    {
      ++cnt;
    }
    else if (x == "X--")
    {
      cnt--;
    }
    else if (x == "--X")
    {
      --cnt;
    };
  };
  cout << cnt;

  return 0;
}

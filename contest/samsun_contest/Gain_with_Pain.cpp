#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int back = 2;
  int leg = 2;
  int chest = 2;
  int shoulder = 1;
  int arm = 3;
  vector<int> v = {2, 2, 2, 1, 3};
  while (t--)
  {
    bool flag = true;
    int d;
    cin >> d;
    while (d--)
    {
      for (int i = 0; i < v.size(); i++)
      {
        int a, b, c;
        cin >> a >> b >> c;
        if (v[i] != a || b != 3 || c != 10)
        {
          flag = false;
        }
      };
    };
    if (flag)
    {
      cout << "Consistent";
    }
    else
    {
      cout << "Inconsistent";
    }
    flag = true;
    cout << endl;
  };

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int bookList[n];
  for (int i = 0; i < n; i++)
  {
    cin >> bookList[i];
  };

  int search;
  cin >> search;
  sort(bookList, bookList + n);
  int low = 0;
  int high = n - 1;
  bool flag = false;
  int ind = 0;
  while (low <= high)
  {
    // ind++;
    int mid = (low + high) / 2;
    if (search == bookList[mid])
    {
      flag = true;
      cout << bookList[mid] << endl;
      cout << "high" << high << endl
           << " " << "LOW " << low;
      // ind = high;
      break;
    }
    else if (search > bookList[mid])
    {
      low = mid + 1;
    }
    else if (search < bookList[mid])
    {
      high = mid - 1;
    };
  }

  if (flag)
  {
    // cout << ind;
  }
  else
  {
    // cout << "-1";
  };
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> bookList(n);
  for (int i = 0; i < n; i++)
  {
    cin >> bookList[i];
  };

  int search;
  cin >> search;
  auto it = find(bookList.begin(), bookList.end(), search);
  if (it != bookList.end())
  {

    int index = it - bookList.begin();
    cout << index << endl;
  }
  else
  {

    cout << "-1" << endl;
  }

  return 0;
}

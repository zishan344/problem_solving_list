#include <bits/stdc++.h>
using namespace std;

bool nextPermutation(vector<int> &data)
{
  int n = data.size();
  int i = n - 2;
  while (i >= 0 && data[i] >= data[i + 1])
  {
    i--;
  };
  if (i >= 0)
  {
    int j = n - 1;
    while (data[j] <= data[i])
      j--;
    swap(data[i], data[j]);
  }
  else
  {
    return false;
  }
  reverse(data.begin() + i + 1, data.end());
  return true;
}

int main()
{

  vector<int> data = {4, 5, 6};

  // Generate all possible permutation values write code manually
  do
  {
    for (int x : data)
    {
      cout << x << " ";
    }
    cout << endl;
  } while (nextPermutation(data));

  // Generate all possible permutation values using stl
  /* sort(data.begin(), data.end());
  do
  {
    for (int x : data)
    {
      cout << x << " ";
    }
    cout << endl;
  } while (next_permutation(data.begin(), data.end()));
 */
  return 0;
}
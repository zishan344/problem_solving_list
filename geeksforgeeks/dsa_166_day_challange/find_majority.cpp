#include <bits/stdc++.h>
using namespace std;
vector<int> findMajority(vector<int> &arr)
{
  // Your code goes here.
  map<int, int> mp;
  int sz = arr.size();
  for (int i = 0; i < sz; i++)
  {
    mp[arr[i]]++;
  };
  vector<int> temp = arr;
  sort(temp.begin(), temp.end());
  temp.erase(unique(temp.begin(), temp.end()), temp.end());
  vector<int> v;

  for (int i = 0; i < temp.size(); i++)
  {
    if (mp[temp[i]] > (sz / 3))
    {
      v.push_back(temp[i]);
    }
  }

  sort(v.begin(), v.end());
  return v;
}
int main()
{

  vector<int> arr = {3, 2, 1, 1, 2, 3, 4, 1, 4, 4, 4, 1, 3, 1, 2, 1};

  vector<int> maj = findMajority(arr);
  for (int value : maj)
  {

    cout << value << " ";
  };
  return 0;
}
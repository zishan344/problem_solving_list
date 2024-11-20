#include <bits/stdc++.h>
using namespace std;
// User function template for C++
class Solution
{
public:
  // Function returns the second
  // largest elements
  int getSecondLargest(vector<int> &arr)
  {
    // Code Here
    int first_largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] > first_largest)
      {
        second_largest = first_largest;
        first_largest = arr[i];
      }
      else if (arr[i] > second_largest && arr[i] < first_largest)
      {
        second_largest = arr[i];
      }
    }

    return second_largest == INT_MIN ? -1 : second_largest;
  }
};

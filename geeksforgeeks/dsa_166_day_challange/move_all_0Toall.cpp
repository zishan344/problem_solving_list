// User function template for C++
class Solution
{
public:
  void pushZerosToEnd(vector<int> &arr)
  {
    // code here
    vector<int> nonZero;
    int countZero = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] != 0)
      {
        nonZero.push_back(arr[i]);
      }
      else
      {
        countZero++;
      }
    };
    if (countZero)
    {
      for (int i = 0; i < countZero; i++)
      {
        nonZero.push_back(0);
      }
    }
    arr = nonZero;
  }
};
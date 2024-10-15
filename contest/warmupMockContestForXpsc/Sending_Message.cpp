#include <bits/stdc++.h>
using namespace std;

int main()
{
  string word1, word2;

  while (cin >> word1 >> word2)
  {
    int i = 0, j = 0;

    while (i < word1.size() && j < word2.size())
    {
      if (word1[i] == word2[j])
      {
        j++;
      }
      i++;
    }

    if (j == word2.size())
    {
      cout << "Possible" << endl;
    }
    else
    {
      cout << "Impossible" << endl;
    }
  }

  return 0;
}

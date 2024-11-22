int mx = 0;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = i; j < n; j++)
    {
      count += v[j];
    }
    mx = max(mx, count);
  }
  cout << mx;
  return 0;
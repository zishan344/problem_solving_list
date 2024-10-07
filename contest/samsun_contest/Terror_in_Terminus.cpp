#include <bits/stdc++.h>
using namespace std;

// Function to perform BFS and calculate distances from a starting city
void bfs(int start, const unordered_map<int, vector<int>> &graph,
         unordered_map<int, int> &distances)
{
  queue<int> q;
  q.push(start);
  distances[start] = 0;

  while (!q.empty())
  {
    int city = q.front();
    q.pop();

    for (int neighbor : graph.at(city))
    {
      if (distances.find(neighbor) == distances.end())
      {
        distances[neighbor] = distances[city] + 1;
        q.push(neighbor);
      }
    }
  }
}

// Function to find the middle city based on BFS distances
int findMiddleCity(int cityA, int cityB, const unordered_map<int, vector<int>> &graph)
{
  unordered_map<int, int> distancesA, distancesB;

  // Perform BFS from both cities
  bfs(cityA, graph, distancesA);
  bfs(cityB, graph, distancesB);

  int middleCity = -1;
  int minDistanceDiff = INT_MAX;

  // Iterate over all cities to find the one minimizing the distance difference
  for (const auto &[city, distA] : distancesA)
  {
    if (distancesB.find(city) != distancesB.end())
    {
      int distB = distancesB[city];
      int distanceDiff = abs(distA - distB);

      // Choose the city based on minimizing the distance difference
      if (distanceDiff < minDistanceDiff ||
          (distanceDiff == minDistanceDiff && distA < distancesA[middleCity]))
      {
        minDistanceDiff = distanceDiff;
        middleCity = city;
      }
    }
  }

  return middleCity;
}

int main()
{
  int T;
  cin >> T; // Number of test cases

  while (T--)
  {
    int N;
    cin >> N; // Number of cities
    unordered_map<int, vector<int>> graph;

    // Read roads (edges) and construct the graph
    for (int i = 0; i < N - 1; i++)
    {
      int u, v;
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u); // Undirected road
    }

    int Q;
    cin >> Q; // Number of queries

    // Process each query
    for (int i = 0; i < Q; i++)
    {
      int cityA, cityB;
      cin >> cityA >> cityB;
      int middleCity = findMiddleCity(cityA, cityB, graph);
      cout << middleCity << endl;
    }
  }

  return 0;
}
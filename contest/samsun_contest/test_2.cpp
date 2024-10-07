#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAXN = 100001; // Adjust based on problem constraints
const int LOG = 17;      // log2(100000) is around 17

vector<int> tree[MAXN];
int parent[MAXN][LOG + 1];
int depth[MAXN];

void dfs(int node, int par, int dep)
{
  parent[node][0] = par; // immediate parent
  depth[node] = dep;     // depth of the node
  for (int i = 1; i <= LOG; ++i)
  {
    if (parent[node][i - 1] != -1)
    {
      parent[node][i] = parent[parent[node][i - 1]][i - 1];
    }
  }
  for (int neighbor : tree[node])
  {
    if (neighbor != par)
    {
      dfs(neighbor, node, dep + 1);
    }
  }
}

// Function to find LCA of u and v
int lca(int u, int v)
{
  if (depth[u] < depth[v])
  {
    swap(u, v);
  }

  // Bring u and v to the same level
  for (int i = LOG; i >= 0; --i)
  {
    if (depth[parent[u][i]] >= depth[v])
    {
      u = parent[u][i];
    }
  }

  if (u == v)
    return u; // If they are the same, return one of them

  // Move both u and v up until their parents match
  for (int i = LOG; i >= 0; --i)
  {
    if (parent[u][i] != parent[v][i])
    {
      u = parent[u][i];
      v = parent[v][i];
    }
  }

  return parent[u][0]; // Return the parent of u (or v)
}

int main()
{
  int T;
  cin >> T; // Number of test cases

  while (T--)
  {
    int N;
    cin >> N; // Number of cities

    // Resetting the tree and parent arrays
    for (int i = 1; i <= N; ++i)
    {
      tree[i].clear();
      for (int j = 0; j <= LOG; ++j)
      {
        parent[i][j] = -1;
      }
    }

    // Read roads (edges) and construct the graph
    for (int i = 0; i < N - 1; i++)
    {
      int u, v;
      cin >> u >> v;
      tree[u].push_back(v);
      tree[v].push_back(u); // Undirected road
    }

    // Perform DFS from the root node (1 or any arbitrary node)
    dfs(1, -1, 0);

    int Q;
    cin >> Q; // Number of queries

    // Process each query
    for (int i = 0; i < Q; i++)
    {
      int cityA, cityB;
      cin >> cityA >> cityB;
      int middleCity = lca(cityA, cityB); // Find the LCA of cityA and cityB
      cout << middleCity << endl;
    }
  }

  return 0;
}

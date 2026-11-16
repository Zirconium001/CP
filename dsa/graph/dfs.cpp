
#include<bits/stdc++.h>
using namespace std;
// Global variables
int adj[6][6], vis[6], n, e, res[6], j;
void dfs(int s)
{
    vis[s] = 1;          // Mark starting vertex as visited

    res[j++] = s;        // Store current vertex in result array

    // Check all vertices to find adjacent neighbors
    for(int i = 0; i < n; i++)
    {
        int neigh = i;   // Consider vertex i as a neighbor

        // Check whether current vertex and neighbor are connected
        if(adj[s][i] == 1)
        {
            // Check whether the neighbor is not visited yet
            if(vis[neigh] == 0)
            {
                dfs(neigh);  // Recursively visit the neighbor
            }
        }
    }
}

int main()
{
    int x, y;
    cin >> n >> e;  // Input number of vertices and edges

    // Take edge connections as input
    for(int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;  // Connect x to y
        adj[y][x] = 1;  // Connect y to x (undirected graph)
    }
    dfs(0);  // Start DFS traversal from vertex 0

    // Print DFS traversal order
    for(int i = 0; i < j; i++)
        cout << res[i] << " ";

    return 0;
}

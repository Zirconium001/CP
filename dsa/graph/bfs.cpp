
#include<bits/stdc++.h>
using namespace std;
// Global variables
int adj[6][6], vis[6], n, e, res[6], j;
void bfs(int s)
{
    queue<int> q;       // Queue to store vertices

    vis[s] = 1;         // Mark starting vertex as visited
    q.push(s);          // Insert starting vertex into queue

    while(!q.empty())  // Continue until queue becomes empty
    {
        int cur = q.front();  // Get the front vertex
        q.pop();              // Remove it from the queue

        res[j++] = cur;       // Store current vertex in result array

        // Check all vertices to find adjacent neighbors
        for(int i = 0; i < n; i++)
        {
            int neigh = i;    // Consider vertex i as a neighbor
          
            // Check whether current vertex and neighbor are connected
            if(adj[cur][i] == 1)
            {
                // Check whether the neighbor is not visited yet
                if(vis[neigh] == 0)
                {
                    vis[neigh] = 1;  // Mark neighbor as visited
                    q.push(neigh);   // Insert neighbor into queue
                }
            }
        }
    }
    // Print BFS traversal order
    for(int i = 0; i < j; i++)
        cout << res[i] << " ";
}

int main() {
    int x, y;
    cin >> n >> e;  // Input number of vertices and edges
    // Take edge connections as input
    for(int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;  // Connect x to y
        adj[y][x] = 1;  // Connect y to x (undirected graph)
    }
    bfs(0);  // Start BFS traversal from vertex 0
    return 0;
}

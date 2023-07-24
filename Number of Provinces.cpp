#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis, int V) {
        vis[node] = 1;
        
        for(int i=0; i<V; i++)
            if(adj[node][i] == 1 && !vis[i]) 
                dfs(i, adj, vis, V);
        
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        int ans = 0;
        vector<int> vis(V, 0);
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis, V);
                ans++;
            }
        }
        return ans;
    }
};
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> result;
        // for(int i=0;i<V;i++){
            queue<int>q;
            q.push(0);
            while(!q.empty()){
                int front = q.front();
                q.pop();
                vis[front]=1;
                result.push_back(front);
                for(int j : adj[front]){
                    if(!vis[j]){
                        q.push(j);
                        vis[j]=1;
                    }
                }
            }
        // }
        return result;
    }
};
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
  
void dfs(vector<int> adj[],vector<int>&vis,int node,vector<int>& result){
    vis[node]=1;
    result.push_back(node);
    for(int i:adj[node]){
        if(vis[i]==0){
            vis[i]=1;
            dfs(adj,vis,i,result);
        }
    }
}
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
    vector<int> vis(V,0);
    vector<int> ans;
    // for(int i=0;i<V;i++){
    //     if(vis[i]==0){
            dfs(adj,vis,0,ans);
    //     }
    // }
    return ans;
    }
};
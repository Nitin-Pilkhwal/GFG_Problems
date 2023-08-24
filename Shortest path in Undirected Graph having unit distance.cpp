#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> dis(N,1e6);
        queue<pair<int,int>> q;
        q.push({src,0});
        vector<int> adj[N];
        for(int i=0;i<M;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dis[src]=0;
        while(!q.empty()){
            int a = q.front().first;
            int wt = q.front().second;
            q.pop();
            for(int i:adj[a]){
                if(wt + 1 < dis[i]){
                    dis[i] = wt + 1;
                    q.push({i,wt+1});
                }
            }
        }
        
        
        for(int i=0;i<N;i++){
            if(dis[i]==1e6)
                dis[i]=-1;
        }
        return dis;
    }
};
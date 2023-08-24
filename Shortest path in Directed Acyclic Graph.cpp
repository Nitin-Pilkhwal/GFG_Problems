#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
    void toposort(vector<pair<int,int>> adj[],stack<int>& st,vector<int>& vis,int node){
        vis[node]=1;
        for(auto i:adj[node]){
            int v=i.first;
            if(vis[v]==0) {
                toposort(adj,st,vis,v);
            }
        }
        st.push(node);
    }
    public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<pair<int,int>> adj[N];
        for(int i=0;i<M;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
            
        }
        stack<int> st;
        vector<int> vis(N,0);
        for(int i=0;i<N;i++){
            if(vis[i]==0){
                toposort(adj,st,vis,i);
            }
        }
        vector<int> dis(N,1e5);
        dis[0]=0;
        while(!st.empty()){
            int a=st.top();
            st.pop();
            for(auto i:adj[a]){
                int v = i.first;
                int wt = i.second;
                if(dis[a] + wt < dis[v])
                    dis[v] = dis[a] + wt;
            }
        }
        for(int i=0;i<dis.size();i++) 
            if(dis[i]==1e5) dis[i]=-1;
        return dis;
    }
};
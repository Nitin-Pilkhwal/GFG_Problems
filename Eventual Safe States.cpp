#include <iostream>
#include <vector>
using namespace std;


class Solution {
  public:
    bool bfs(vector<int> graph[],vector<int>& vis,vector<int>& pvis,vector<int>& check,int node){
        vis[node]=1;
        pvis[node]=1;
        for(int i:graph[node]){
            if(vis[i]==0){
                if(bfs(graph,vis,pvis,check,i)){
                    check[i]=0;
                    return true;
                }
            }
            else if(pvis[i]){
                check[i]=0;
                return true;
            }
        }
        pvis[node]=0;
        check[node]=1;
        return false;
    }
    vector<int> eventualSafeNodes(int n, vector<int> graph[]) {
        
        vector<int> vis(n,0);
        vector<int> pvis(n,0);
        vector<int> check(n,0);

        vector<int> ans;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                bfs(graph,vis,pvis,check,i);
            }
        }

        for(int i=0;i<n;i++){
            if(check[i]==1) ans.push_back(i);
        }
        return ans;
    }
};
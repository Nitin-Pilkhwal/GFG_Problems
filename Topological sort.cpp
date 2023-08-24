#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
    void dfs(vector<int> adj[],vector<int>& vis,stack<int>& st,int node){
    vis[node]=1;
    for(int i:adj[node]){
        if(vis[i]==0) dfs(adj,vis,st,i);
    }
    st.push(node);
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    stack<int> st;
	    vector<int> vis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                dfs(adj,vis,st,i);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
	}
};
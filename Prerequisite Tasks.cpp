#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
	bool isPossible(int n,int P, vector<pair<int, int> >& prerequisites) {
	    vector<int> adj[n];
        vector<int> indegree(n,0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i].first].push_back(prerequisites[i].second);
            indegree[prerequisites[i].second]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            topo.push_back(a);
            for(int i:adj[a]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        if(topo.size()==n) return true;
        return false;
	}
};
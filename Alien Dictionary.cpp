#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
class Solution{
    public:
    vector<int> toposort(int n,vector<int> adj[]){
        vector<int> ans;
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(int j:adj[i]){
                indegree[j]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int a=q.front();
            q.pop();
            ans.push_back(a);
            for(int i:adj[a]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        return ans;
    }
    string findOrder(string dict[], int N, int K) {
        vector<int> adj[K];
        
        for(int i=0;i<N-1;i++){
            string a = dict[i];
            string b = dict[i+1];
            int len = min(a.size(),b.size());
            for(int i=0;i<len;i++){
                if(a[i]!=b[i]){
                    adj[a[i]-'a'].push_back(b[i]-'a');
                    break;
                }
            }
        }
        
        
        vector<int> topo = toposort(K,adj);
        string ans = "";
        for(int i=0;i<topo.size();i++){
            ans += char(topo[i]+'a');
        }
        return ans;
    }
};
int main(){

return 0;
}
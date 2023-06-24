#include <iostream>
#include <queue>
#include <map>
using namespace std;

class Solution {
  public:
  class compare{
        public:
        bool operator()(pair<int,int>&p1,pair<int,int>&p2){
        if (p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second < p2.second;
        }
    };
    vector<int> topK(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int > ans;

        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq(mp.begin(),mp.end());
        
        // for(auto c:mp){
        //     pq.push({c.first,c.second});
        //     if(pq.size()>k)
        //         pq.pop();
        // }
        // while(!pq.empty()){
        //     ans.push_back(pq.top().first);
        //     pq.pop();
        // }
        // reverse(ans.begin(),ans.end());
        for(int i=1;i<=k;i++){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};

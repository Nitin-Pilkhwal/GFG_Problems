#include <iostream>
#include <queue>
using namespace std;

class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(pq.size() < k){
                pq.push(arr[i]);
                if(pq.size()<k){
                    ans.push_back(-1);
                }
                else {
                    ans.push_back(pq.top());
                }
            }
            else {
                if(arr[i]>pq.top()){
                    pq.pop();
                    pq.push(arr[i]);
                }
                ans.push_back(pq.top());
            }
        }
        return ans;
    }
};
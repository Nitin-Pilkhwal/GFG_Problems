#include <iostream>
#include <queue>
using namespace std;

class Solution{
public:
    int kthLargest(vector<int> &Arr,int n,int k){
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += Arr[j];
                if(pq.size()<k) pq.push(sum);
                else if(pq.top()<sum){
                        pq.pop();
                        pq.push(sum);
                    }
            }
        }
        return pq.top();
    }
};

#include <iostream>
#include <queue>
using namespace std;

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        long long ans=0;
        priority_queue<long long,vector<long long>,greater<long long>> mp;
        for(int i=0;i<n;i++) mp.push(arr[i]);
        long long a,b;
        while(mp.size()>1){
            long long a=mp.top();
            mp.pop();
                long long b=mp.top();
                mp.pop();
            mp.push(a+b);
            ans+=(a+b);
        }
        return ans;
    }
};
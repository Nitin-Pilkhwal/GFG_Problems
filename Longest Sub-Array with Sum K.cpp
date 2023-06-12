#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        int i=0,maxlen=0;
        map<long long, int> mp;
        long long sum=0;
        for(i=0;i<N;i++){
            sum+=A[i];
            if(sum==k) maxlen=max(maxlen,i+1);
            
            if(mp.find(sum-k)!=mp.end()){
                maxlen=max(maxlen,i - mp[sum-k]);
            }
            if(mp.find(sum) == mp.end())
            mp[sum] = i;
            
        }
        return maxlen;
    } 

};
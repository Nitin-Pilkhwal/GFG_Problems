#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans=INT_MIN,curr=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            ans=max(ans,curr);
            if(curr<0) curr=0;
        }
        return ans;
        
    }
};
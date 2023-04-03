#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> ans;
        if(s==0){
            ans.push_back(-1);return ans;
        }
        
        int left=0,right=0;
        long long sum=0;
        while(right<arr.size()){
            sum+=arr[right];
            while(sum>s && left<arr.size()){
                sum-=arr[left];
                left++;
            }
            if(sum==s){
                ans.push_back(left+1);  
                ans.push_back(right+1);  
                return ans;
            }
            right++;
        }
        ans.push_back(-1);
        return ans;
    }
};
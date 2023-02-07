#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int> l(n);
        vector<int> r(n);
        l[0]=arr[0];
        r[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
            l[i]=max(l[i-1],arr[i]);
        for(int i=n-2;i>=0;i--)
            r[i]=max(r[i+1],arr[i]);
        long long sum=0;
        for(int i=0;i<n;i++)
            sum+=(min(l[i],r[i])-arr[i]);
        return sum;
        
    }
};
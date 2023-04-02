#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int max=0,i;
        vector<int> ans;
        for(i=n-1;i>=0;i--){
            if(a[i]>=max) ans.push_back(a[i]),max=a[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
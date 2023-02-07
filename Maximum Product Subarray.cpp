#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    if(n==1) return arr[0];
	    long long cur=1,dur=1;
	    long long total=arr[0];
	    for(int i=0;i<n;i++){
	        cur*=arr[i];
	        dur*=arr[n-i-1];
	        total=max(total,max(cur,dur));
	        if(cur==0) cur=1;
	        if(dur==0) dur=1;
	    }
	    return total;
	}
};
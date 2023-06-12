#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int nums[], int n, int m) {
        int l=0,r=0,count=0,zero=0;
        for(r=0;r<n;r++){
            if(nums[r]==0) zero++;
            while(l<n && zero>m){
                if(nums[l]==0) zero--;
                l++;
            }
            count=max(count,r-l+1);
        }
        return count;
    }  
};
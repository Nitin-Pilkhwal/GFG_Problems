#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int nums[], int n) {
	    int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) nums[c++]=nums[i];
        }
        while(c<n){
            nums[c++]=0;
        }
	}
};
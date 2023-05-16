#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<vector<long long>> ans;
        long long a=1;
        
        for(int i=0;i<n;i++){
            vector<long long> v(i+1,1);
            for(int j=1;j<v.size()-1;j++){
                v[j]=(ans[i-1][j-1]+ans[i-1][j])%(1000000000+7);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans[n-1];
        
    }
};
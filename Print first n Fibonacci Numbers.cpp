#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
        vector<long long> v;
        if(n==1) v.push_back(1);
        else if(n==2) {v.push_back(1);v.push_back(1);}
        else {
                v.push_back(1);v.push_back(1);
            for(int i=2;i<n;i++){
                v.push_back(v[i-1]+v[i-2]);
            }
        }
        return v;
    }
};
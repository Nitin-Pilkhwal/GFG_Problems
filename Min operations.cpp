#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int solve(int a, int b) {
        // code here
        if(a==b) return 0;
        if((a&b)==min(a,b)) return 1;
        if((a&b)>=0 && (a&b)<min(a,b)) return 2;
        return 0;
    }
};
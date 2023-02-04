#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    string removePair(string s) {
        // code here
        string ans;
        for(int i=0;i<s.size();i++){
            if(ans.empty()) ans+=s[i];
            else if(!ans.empty() && ans.back()==s[i]){
                ans.pop_back();
            }
            else
                ans.push_back(s[i]);
        }
        if(ans.empty()) return "-1";
        return ans;
    }
};
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n=s.size();
        for(int i=n/2;i>=0;i--){
            if(s.substr(0,i+1)==s.substr(i+1,i+1)){
                return (i+1)+1+(n-2*(i+1));
            }
        }
        return n;
    }
};
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string t;
        t=A;
        int ans=1;
        while(A.size()<B.size()){
            A=A+t;
            ans++;
        }
        size_t found;
        found = A.find(B);
        if(found != string::npos){
            return ans;
        }
        else{
            A=A+t;
            ans++;
            found = A.find(B);
            if(found != string::npos) return ans;
            else return -1;
        }
        return -1;
    }
};
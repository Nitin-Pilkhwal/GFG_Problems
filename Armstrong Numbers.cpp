#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int t=n,ans=0;
        
        while(t){
            int r=t%10;
            ans+=(r*r*r);
            t/=10;
        }
        if(ans==n) return "Yes";
        return "No";
    }
};
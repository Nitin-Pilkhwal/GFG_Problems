#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    long long reversedBits(long long X) {
        long long ans=0;
        unsigned int n=sizeof(X)*8;
        for(int i=0;i<32;i++){
            if(X&1){
                ans=ans<<1;
                ans++;
            }
            else ans=ans<<1;
            X=X>>1;
        }
        return ans;
    }
};
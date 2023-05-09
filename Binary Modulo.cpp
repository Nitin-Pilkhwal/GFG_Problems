#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;


class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int ans=0,n=s.size(),base=1;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    ans+=base;
                }
                ans%=m;
                base=base*2;
                base%=m;
            }
            // ans=ans%m;
            return ans;
        }
};

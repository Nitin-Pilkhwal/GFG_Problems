#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int t=N,c=0;
        
        while(t){
            int r=t%10;
            if(r!=0 && N%r==0) c++;
            t/=10;
        }
        return c;
    }
};
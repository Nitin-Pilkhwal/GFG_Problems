#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    long long hcf(long long A , long long B) {
        while(A!=B){
            if(A>B){
                if(A%B==0) return B;
                else A=A%B;
            }
            else{
                if(B%A==0) return A;
                else B=B%A;
            }
        }
        return A;
    }
    long long lcm(long long a , long long b) {
        return (a/hcf(a,b))*b;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        return {lcm(A,B),hcf(A,B)};
    }
};
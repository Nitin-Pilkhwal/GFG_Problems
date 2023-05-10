#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++) cout<<j<<' ';
            for(int j=1;j<(5*n-4*i-4);j++) cout<<' ';
            for(int j=i;j>=1;j--) cout<<j<<' ';
            cout<<endl;
        }
    }
};
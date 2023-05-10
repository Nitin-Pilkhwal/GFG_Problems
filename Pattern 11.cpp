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
        int set;
        for(int i=1;i<=n;i++){
            (i%2==0)?set=0:set=1;
            for(int j=1;j<=i;j++){
                cout<<set<<" ";
                (set)?set=0:set=1;
            }
            cout<<endl;
        }
    }
};
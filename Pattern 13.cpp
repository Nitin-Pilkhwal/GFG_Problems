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
        int s=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
                cout<<s++<<" ";
            cout<<endl;
        }
    }
};
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
            char s='A';
            for(int j=1;j<=i;j++){
                cout<<s++;
            }
            cout<<endl;
        }
    }
};
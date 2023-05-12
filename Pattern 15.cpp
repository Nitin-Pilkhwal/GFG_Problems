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
        char c='A';
        for(int i=n;i>=1;i--){
            c='A';
            for(int j=1;j<=i;j++)
                cout<<c++;
            cout<<endl;
        }
    }
};
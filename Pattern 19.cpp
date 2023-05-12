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
        char c = 'A'+n-1;
        char a;
        for(int i=1;i<=n;i++){
            a=c;
            for(int j=1;j<=i;j++)
                cout<<a--<<' ';
            cout<<endl;
        }
    }
};
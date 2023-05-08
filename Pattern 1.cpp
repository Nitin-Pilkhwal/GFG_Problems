#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cout<<"*"<<" ";
            cout<<endl;
        }
    }
};

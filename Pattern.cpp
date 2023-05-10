#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    void printDiamond(int n) {
        for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++) cout<<' ';
            for(int j=0;j<=i;j++) cout<<'*'<<' ';
            cout<<endl;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<n-i;j++) cout<<' ';
            for(int j=0;j<=i;j++) cout<<'*'<<' ';
            cout<<endl;
        }
    }
};


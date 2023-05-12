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
        char a;
        for(int i=1;i<=n;i++){
            a='A';
            for(int j=1;j<=n-i;j++) cout<<' ';
            for(int j=1;j<=i;j++) cout<<a++;
            a--;
            a--;
            for(int j=1;j<i;j++) cout<<a--;
            cout<<endl;
        }
    }
};
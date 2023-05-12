#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=1;i<=n;i++){
            if(i==1 || i==n)
                for(int j=1;j<=n;j++) cout<<'*';
            else{
                cout<<'*';
                for(int j=1;j<=n-2;j++) cout<<' ';
                cout<<'*';
            }
            cout<<endl;
        }
    }
};
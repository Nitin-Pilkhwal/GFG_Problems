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
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int t=i,l=j,r=(2*n-2)-j,d=(2*n-2)-i;
                cout<<(n-min(min(l,r),min(t,d)))<<' ';
            }
            cout<<endl;
        }
    }
};
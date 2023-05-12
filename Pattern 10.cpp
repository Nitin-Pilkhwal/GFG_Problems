#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++) cout<<'*'<<' ';
            cout<<endl;
        }
        
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=i;j++) cout<<'*'<<' ';
            cout<<endl;
        }
    }
};
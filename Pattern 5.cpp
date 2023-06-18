#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<'*'<<' ';
            }
            cout<<endl;
        }
	}
};
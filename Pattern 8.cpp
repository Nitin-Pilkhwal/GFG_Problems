
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
	    for(int i=n-1;i>=0;i--){
	        for(int j=1;j<n-i;j++) cout<<' ';
	        for(int j=0;j<2*i+1;j++) cout<<'*';
	        cout<<endl;
	    }
	}
};
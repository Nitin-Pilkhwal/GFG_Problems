#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   k=k%n;
	   int i,j;
	   i=0,j=k-1;
	   while(i<j){
	       int t=arr[i];
	       arr[i]=arr[j];
	       arr[j]=t;
	       i++;
	       j--;
	   }
	   i=k,j=n-1;
	   while(i<j){
	       int t=arr[i];
	       arr[i]=arr[j];
	       arr[j]=t;
	       i++;
	       j--;
	   }
	   i=0,j=n-1;
	   while(i<j){
	       int t=arr[i];
	       arr[i]=arr[j];
	       arr[j]=t;
	       i++;
	       j--;
	   }
	}
};

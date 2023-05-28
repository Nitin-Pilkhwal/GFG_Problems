#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        if(d%n==0) return ;
        int temp[n];
        int mod=d%n,i;
        int x=0;
        for(i=mod;i<n;i++)
            temp[x++]=arr[i];
        for(i=0;i<mod;i++)
            temp[x++]=arr[i];
        for(i=0;i<n;i++) arr[i]=temp[i];
    }
};
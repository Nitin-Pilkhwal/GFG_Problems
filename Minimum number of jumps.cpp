#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==0 || n==1) return 1;
        if(arr[0]==0) return -1;
        int jumps=0,reach=arr[0],steps=arr[0];
        for(int i=1;i<n-1;i++){
            steps--;
            reach=max(reach,arr[i]+i);
            if(steps==0){
                jumps++;
                steps=reach-i;
                if(steps==0) return -1;
            }
        }
        
        return jumps+1;
    }
};
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int s=0;
        int e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(arr[m]==k) return m;
            else if(arr[m]>k) e=m-1;
            else s=m+1;
        }
        return -1;
    }
};
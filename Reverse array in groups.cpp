#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution{
public:
    void reverse(vector<long long>& arr,int s,int e){
        while(s<=e){
            long long t;
            t=arr[s];
            arr[s]=arr[e];
            arr[e]=t;
            s++;
            e--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        if(k==1) return;
        if(n==1 || n==0) return;
        long long s=0;
        long long temp,i;
        temp=k;
        for(i=0;i<n;i++){
            if((i+1)%k==0) {
                reverse(arr,s,i);
                s+=k;
                temp=temp+temp;
            }
        }
        if(s<n) reverse(arr,s,n-1);
    }
};
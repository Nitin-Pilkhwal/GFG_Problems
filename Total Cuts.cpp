#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        int left[N];
        int right[N];
        left[0] = A[0];
        for(int i=1;i<=N;i++)
            left[i] = max(A[i],left[i-1]);
            
        right[N-1] = A[N-1];
        for(int i=N-2;i>=0;i--)
            right[i] = min(A[i],right[i+1]);
        int count=0;
        for(int i=0;i<N-1;i++)
            if(left[i]+right[i+1]>=K) count++;
        return count;
    }
};
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int row, int c) 
    {
        // code here 
        vector<int> ans;
        int t=0,b=row-1;
        int r=c-1,l=0,i;
        while(l<=r && t<=b){
            for(i=l;i<=r;i++) ans.push_back(matrix[t][i]);
            t++;
            for(i=t;i<=b;i++) ans.push_back(matrix[i][r]);
            r--;
            if(t<=b){
                for(i=r;i>=l;i--) ans.push_back(matrix[b][i]);
                b--;
            }
            if(l<=r){
                for(i=b;i>=t;i--) ans.push_back(matrix[i][l]);
                l++;
            }
        }
        return ans;
    }
};
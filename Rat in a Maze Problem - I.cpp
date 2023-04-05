#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution{
    public:
    void helper(int row,int col,vector<vector<int>> &m, int n,vector<string>&ans,string res){
        if(row<0||row>=n||col<0||col>=n||m[row][col]==0)
            return;
        if(row==n-1 && col==n-1){
            ans.push_back(res);
            return;
        }
        m[row][col]=0;
        helper(row+1,col,m,n,ans,res+'D');
        helper(row-1,col,m,n,ans,res+'U');
        helper(row,col+1,m,n,ans,res+'R');
        helper(row,col-1,m,n,ans,res+'L');
        m[row][col]=1;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string res="";
        helper(0,0,m,n,ans,res);
        return ans;
    }
};

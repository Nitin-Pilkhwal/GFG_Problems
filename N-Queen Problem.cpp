#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution{
public:
    bool issafe(int r,int c,vector<string>& board,int n){
        int row=r;
        int col=c;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;col--;
        }
        row=r;
        col=c;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;col--;
        }
        row=r;
        col=c;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        return true;
    }
    
    void helper(vector<vector<int>>& ans,int col,vector<int>&v,int n,vector<string>& row){
        if(col==n){
            ans.push_back(v);
            return ;
        }
        for(int i=0;i<n;i++){
            if(issafe(i,col,row,n)){
                row[i][col]='Q';
                v.push_back(i+1);
                helper(ans,col+1,v,n,row);
                v.pop_back();
                row[i][col] = '.';
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<int> v;
        
        vector<string> row;
        string s(n,'.');
        for(int i=0;i<n;i++)
            row.push_back(s);
        helper(ans,0,v,n,row);
        return ans;
    }
};
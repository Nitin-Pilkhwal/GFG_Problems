#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
  public:
    void bfs(int row,int col, vector<vector<int>>& grid,vector<pair<int,int>>& temp,vector<vector<int>>& vis,int r,int c){
        int m=grid.size();
        int n=grid[0].size();
        vis[r][c]=1;
        temp.push_back({row-r,col-c});
        int rows[4] = {-1,0,1,0};
        int cols[4] = {0,1,0,-1};
        
        for(int i=0;i<4;i++){
            int nr = rows[i] + r;
            int nc = cols[i] + c;
            if(nr>=0 && nc>=0 && nr<m && nc<n && vis[nr][nc]==0 && grid[nr][nc]==1){
                    bfs(row,col,grid,temp,vis,nr,nc);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        set<vector<pair<int,int>>> st;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                vector<pair<int,int>> x;
                    bfs(i,j,grid,x,vis,i,j);
                    st.insert(x);
                }
            }
        }
        
        return st.size();
    }
};
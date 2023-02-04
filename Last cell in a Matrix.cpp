#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        // Direction ={ right = 1, down =2, left =3, up=4 }
        int dir = 1;
        int i=0,j=0;
        while(i<R && j<C && i>=0 && j>=0){
            if(dir == 1){
                if(matrix[i][j] == 0){
                    j++;
                }
                else{
                    matrix[i][j]=0;
                    dir = 2;
                }
            }
            else if(dir == 2){
                if(matrix[i][j] == 0){
                    i++;
                }
                else{
                    matrix[i][j]=0;
                    dir = 3;
                }
            }
            else if(dir == 3){
                if(matrix[i][j] == 0){
                    j--;
                }
                else{
                    matrix[i][j]=0;
                    dir = 4;
                }
            }
            else if(dir == 4){
                if(matrix[i][j] == 0){
                    i--;
                }
                else{
                    matrix[i][j]=0;
                    dir = 1;
                }
            }
        }
        if(dir==1) j--;
        else if(dir==2) i--;
        else if(dir==3) j++;
        else if(dir==4) i++;
        return {i,j};
        
    }
};
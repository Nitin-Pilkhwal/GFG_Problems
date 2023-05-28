#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:	
	int matSearch (vector <vector <int>> &matrix, int M, int N, int t)
	{
        int i=M-1,j=0;
        while(i>=0 && j<N){
            if(matrix[i][j]==t) return true;
            else if(matrix[i][j]>t) i--;
            else j++;
        }
        return false;
	}
};
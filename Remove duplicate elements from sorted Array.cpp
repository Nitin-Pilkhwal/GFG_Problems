#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int count=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                a[count++]=a[i];
            }
        }
        return count;
    }
};
#include <iostream>
using namespace std;

class Solution{
    public:
    int parent(int i){
        return (i-1)/2;
    }
    bool isMaxHeap(int a[], int n)
    {
        int i=0;
        while(i<n){
            int lchild = 2*i +1;
            int rchild = 2*i +2;
            if(lchild<n && a[lchild]>a[i]) return false;
            if(rchild<n && a[rchild]>a[i]) return false;
            i++;
        }
        return true;
    }
};
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
public:
    void heapify(vector<int> &arr,int i, int n){
        int largest = i;
        int lchild = 2*i +1;
        int rchild = 2*i +2;
        if(lchild <n && arr[lchild] > arr[largest]) largest = lchild;
        if(rchild <n && arr[rchild] > arr[largest]) largest = rchild;
        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,largest,n);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int n){
        for(int i=(n-1)/2;i>=0;i--){
            heapify(arr,i,n);
        }
        
    }
    
};
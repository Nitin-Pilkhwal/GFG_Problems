#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int size=sizeof(arr)/arr[0];
        selectionSort(arr,size);
    }
     
    void selectionSort(int a[], int n)
    {
       //code here
       for(int i=0;i<n;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
                if(a[min]>a[j]) min=j;
            }
            if(i!=min) swap(a[min],a[i]);
        }
    }
};
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class solution{
    public:
    void merge(int a[], int l, int m, int r)
    {
        int i,j,k,n1,n2;
        n1= m-l+1;
        n2= r-m;
    
        int L[n1],R[n2];
    
        for(i=0;i<n1;i++)
            L[i] = a[l + i];
        for(j=0;j<n2;j++)
            R[j] = a[m+1 + j];
        
        i=0,j=0,k=l;
    
        while(i<n1 && j<n2){
            if(L[i]<=R[j]) a[k++]=L[i++];
            else a[k++]=R[j++];
        }
          while (i < n1) {
            a[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            a[k] = R[j];
            j++;
            k++;
        }
    }
    public:
    void mergeSort(int a[], int l, int r)
    {
        if(l<r){
            int m=l+(r-l)/2;
            mergeSort(a,l,m);
            mergeSort(a,m+1,r);
            merge(a,l,m,r);
        }
    }
};
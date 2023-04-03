#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

    
void sort012(int a[], int n)
{
    int i,zero=0,one=0;
    for(i=0;i<n;i++){
        if(a[i]==0) zero++;
        else if(a[i]==1) one++;
    }
    for(i=0;i<n;i++){
        if(zero) a[i]=0,zero--;
        else if(one) a[i]=1,one--;
        else a[i]=2;
    }
}
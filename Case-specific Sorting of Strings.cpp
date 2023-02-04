#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char> s1;
        vector<char> s2;
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z')
                s1.push_back(str[i]);
            else
                s2.push_back(str[i]);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z')
                str[i]=s1[a++];
            else
                str[i]=s2[b++];
        }
        return str;
        
    }
};
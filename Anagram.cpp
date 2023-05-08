#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size()) return false;
        int n=a.size();
        map<char,int> p;
        map<char,int> q;
        for(int i=0;i<n;i++)
            p[a[i]]++;
        for(int i=0;i<n;i++)
            q[b[i]]++;
        for(int i=1;i<=26;i++)
        {
            char x= char(i+96);
            if(p[x]!=q[x]) return false;
        }
        return true;
    }

};

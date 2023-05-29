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
    long long sumOfDivisors(int N)
    {
        long long ans=0;
        for(int i=1;i<=N;i++)
            ans +=(N/i)*i;
        return ans;
    }
};
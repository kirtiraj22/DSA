//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> v;
        int i = 1;
        while(fact(i) <= N){
            v.push_back(fact(i));
            i++;
        }
        return v;
    }
    
    long long fact(int n){
        return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
    }
};

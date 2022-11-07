//User function template for C++
class Solution{
public:	
	
	bool ans(int i, string &S){
	    int n = S.size();
	    if(i >= n  / 2)
	        return true;
	    
	    if(S[i] != S[n - i - 1])
	        return false;
	    return ans(i+1 , S);
	    
	}
	
	int isPalindrome(string S)
	{
	    return ans(0 , S);
	}

};

//{ Driver Code Starts.


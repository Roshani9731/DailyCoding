int helper(string s, int st, int e){
	    if(st>=e){
	        return 1;
	    }
	    if(s[st]!=s[e]){
	        return 0;
	    }
	    return helper(s,st+1,e-1);
	}
	int isPalindrome(string s)
	{
	    // Your code goes here
	    int n= s.size()-1;
	    return helper(s,0,n);
	   
	}

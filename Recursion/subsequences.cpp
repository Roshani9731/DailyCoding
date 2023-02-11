void helper(string s, string temp, int index){
	        if(s.size()==index){
	            cout<<temp<<" ";
	            return;
	            helper(s,temp+s[index],index+1);
	            helper(s,temp,index+1);
	        }
	    }

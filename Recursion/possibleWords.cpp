vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ns;
    void helper(int b[],int n,string temp,int i){
        if(i==n){
            ns.push_back(temp);
            return;
        }
        for(int j=0;j<keys[b[i]].size();j++){
            helper(b,n,temp+keys[b[i]][j],i+1);
        }
        return;
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int b[], int N)
    {
        //Your code here
        helper(b,N,"",0);
        return ns;
    }

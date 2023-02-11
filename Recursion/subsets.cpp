vector<vector<int>> ns;
    void helper(vector<int> b,vector<int> temp, int index){
        if(index==b.size()){
            ns.push_back(temp);
            return;
        }
        temp.push_back(b[index]);
        helper(b,temp,index+1);
        temp.pop_back();
        helper(b,temp,index+1);
        return ;
    }
    vector<vector<int> > subsets(vector<int>& b)
    {
        //code here
        vector<int> temp;
        helper(b,temp,0);
        sort(ns.begin(),ns.end());
        return ns;
    }

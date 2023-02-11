 vector<vector<int>> ns;
    void helper(vector<int>& num, int i){
        if(i==num.size()){
            ns.push_back(num);
            return;
        }
        for(int j=i;j<num.size();j++){
            swap(num[i],num[j]);
            helper(num,i+1);
            swap(num[i],num[j]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return ns;
    }

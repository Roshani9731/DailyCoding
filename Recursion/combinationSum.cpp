vector<vector<int>> ns;
void helper(vector<int> & cnd,int tg,int i, int cursum, vector<int> temp){
    if(cursum >tg) return;
    if(i==cnd.size()){
        if(cursum==tg){
            ns.push_back(temp);
        }
        return;
    }
    cursum+= cnd[i];
    temp.push_back(cnd[i]);
    helper(cnd,tg,i,cursum,temp);
    cursum -= cnd[i];
    temp.pop_back();
    helper(cnd,tg,i+1,cursum,temp);
}
    vector<vector<int>> combinationSum(vector<int>& cnd, int tg) {
        vector<int> temp;
        helper(cnd,tg,0,0,temp);
        return ns;
    }

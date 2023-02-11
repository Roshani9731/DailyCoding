bool helper(vector<int> b,int temp,int ind,int sum){
        if(temp==sum) return true;
        if(ind>=b.size()){
            return false;
        }
        int c = helper(b,temp+b[ind],ind+1,sum);
        int d = helper(b,temp,ind+1,sum);
        return c|| d;
    }
    bool isSubsetSum(vector<int>b, int sum){
        // code here 
        int flg = helper(b,0,0,sum);
        return flg;
    }

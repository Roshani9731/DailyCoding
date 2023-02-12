vector<vector<int>> ns;
    bool isSfe(vector<vector<int>>& bord,int r,int c,int n){
        for(int i=0;i<r;i++){
            if(bord[i][c]==1){
                return false;
            }
        }
        for(int i=r-1,j=c-1;i>=0 &&j>=0;i--,j--){
            if(bord[i][j]==1){
                return false;
            }
        }
        for(int i=r-1,j=c+1;i>=0&&j<n;i--,j++){
            if(bord[i][j]==1){
                return false;
            }
        }
        return true;
    }
    void helper(vector<vector<int>>& bord,int n,int r){
        if(r==n){
            vector<int> temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(bord[i][j]==1){
                        temp.push_back(j+1);
                    }
                }
            }
            ns.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSfe(bord,r,i,n)){
                bord[r][i]=1;
                helper(bord,n,r+1);
                bord[r][i]=0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> bord(n,vector<int> (n,0));
        helper(bord,n,0);
        return ns;
    }

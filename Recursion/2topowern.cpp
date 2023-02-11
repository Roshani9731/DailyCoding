long long int 2topowern(int N){
        //code here
        if(N==1){
            return 2;
        }
        if(N==0) return 1;
        long long int res;
        res = 2*2topowern(N-1);
        return res;
}

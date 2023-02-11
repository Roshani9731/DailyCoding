long long int factorial(int N){
        //code here
        if(N==1 or N==0){
            return 1;
        }
        long long int res;
        res = N*factorial(N-1);
        return res;
}

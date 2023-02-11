#include<bits/stdc++.h>
using namespace std;
int sumton(int n);
int main(){
  int n;
  cin>>n;
  int fc = sumton(n);
  cout<<fc<<endl;
  return 0;
}
int sumton(int n){
  if(n==1) return 1;
  int ans = n + sumton(n-1);
  return ans;
}

// Question:- https://www.codechef.com/submit/MEANMEDIAN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y){
	        cout<<x<<" "<<x<<" "<<x<<endl;
	    }
	    else{
	        cout<<y<<" "<<y<<" "<<(x*3)-(2*y)<<endl;
	    }
	}
	return 0;
}

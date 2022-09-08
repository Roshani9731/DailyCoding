// Question:- https://www.codechef.com/submit/PERMCLEAR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x;
	    vector<int> a;
	    for(int i=0;i<x;i++){
	        int temp;
	        cin>>temp;
	        a.push_back(temp);
	    }
	    cin>>y;
	    set<int> b;
	    
	    for(int i=0;i<y;i++){
	        int temp;
	        cin>>temp;
	        b.insert(temp);
	    }
	    for(int i=0;i<x;i++){
	        if (b.find(a[i]) == b.end()) {
                cout<<a[i]<<" ";
            }
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}

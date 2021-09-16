#include <iostream>
using namespace std;
int ans(int n,int s){
    int m;
     m=((n*n)+n-(2*s))/2;
     cout<<m;
    return m;
    if(!(int)m){
        return -1;
    }
    
    
}

int main() {
	int t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int x;
	    x=ans(n,s);
	    cout<<x<<endl;
	    
	}
	return 0;
}

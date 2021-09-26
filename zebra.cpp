#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            if((a[i]=0 && a[i+1]=1 ||a[i]=1 && a[i+1]=0  )){
                count++;
            }

        }
        if(count>k){
            
        }
        
    }

	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int elder=0;
        int younger=0;
        int time=0;
        for(int i=n;i>=n-p;i--){
            if(a[i]==0){
                younger++;
            }
            if(a[i]==1){
                elder++;
            }
        }
        time=(younger*x)+(elder*y);
        cout<<time<<endl;
    }
    return 0;

}
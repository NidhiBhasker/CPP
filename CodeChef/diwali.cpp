#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        int anar=0;
        int chakri=0;
        anar=b+(x*a);
        chakri=c+(y*a);
        int minimum=0;
        minimum=min(anar,chakri);
        int net;
        net=p/minimum;
        cout<<net<<endl;
    }
    return 0;

}
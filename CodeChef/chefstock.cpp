#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--){
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        int net=((100+c)*s)/100;
        if(net>=a && net<=b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }




    return 0;
}
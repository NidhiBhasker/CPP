#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string p;
        cin>>p;
        long long i=0,count =0,ans =0,capability=0;
        while(i<p.size()){

            while(p[i]=='.'){
                count++;
                i++;
            }
            if(count>capability){
                ans++;
                capability=count;

            }

            i++;
            count=0;
        }
        cout<<ans<<endl;

    }
    return 0;
}
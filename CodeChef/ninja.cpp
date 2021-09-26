#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int counter=0;
        for(int i=0;i<s.size();i++){
            if(a[i]!=a[i+1]){
                counter++;            }
        }
        cout<<counter<<endl;
    }
    return 0;

}
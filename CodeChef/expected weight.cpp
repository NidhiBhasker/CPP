#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long fact=factorial(n-1);
        long long ans=(n*(n+1)*(n+1))/4;
        
       
       long long final= ans%998244353 ;
        cout<<final<<"\n";
    }
    return 0;

}
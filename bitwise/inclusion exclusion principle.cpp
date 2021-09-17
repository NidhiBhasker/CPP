#include<bits/stdc++.h>
using namespace std;
int divisible(int n,int a, int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    int ans=c1+c2-c3;
}
int main(){
 int n,a,b;
 cin>>n>>a>>b;
 int net=divisible(n,a,b);
 cout<<net<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &A) {
    int net=0;

    for(int i=0;i<A.size();i++){
        net+=A[i];
        net=net*10;
    }
    net=net+1;
    for(int i=A.size();i--){
        A[i]=net%10;
        net=net/10;
    }
    return A;
}

int main(){
 vector<int>A;
 vector<int>B;
 for(int i=0;i<A.size();i++){
     cin>>A[i];
 }
 B=plusone(A);
 for(int i=0;i<B.size();i++){
     cout<<B[i]<<" ";
 }
 return 0;
}
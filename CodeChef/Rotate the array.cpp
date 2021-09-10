#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
          cin>>a[i][j];
        }
    }
    for(int i=0;i<n/2;i++){
      for(int j=0;j<n;j++){
           int temp=a[i][j];
           a[i][j]=a[n-i-1][j];
           a[n-i-1][j]=temp;
      } 
    }
     for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
      } 
    }
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<a[i][j] <<" ";
      }
        cout<<endl;
      }

    return 0;

}

#include<bits/stdc++.h>
#include <numeric>
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(long long int a,long long int b)
{
    return (a / gcd(a, b)) * b;
}
  
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long llcm=lcm(n,k);
        //std::lcm();
        long long ans=llcm/k;
        cout<<ans<<endl; 

    }


    return 0;

}
#include <bits/stdc++.h>
using namespace std;
bool ispowerof2(int n){
    return n && !(n & n-1);
/*n and n-1 are like 1000 and 0111 that means last significant bit ke baad all compliment.i.e
10010->10001
so if n is a perfect square then n & n-1 thi s will give 0 and ! maes it 1 thus output 1 but
 if n=0,then that corner case is fulfilled by putting n&&
*/
}
int main(){
    cout<<ispowerof2(16)<<endl;
     return 0;
}

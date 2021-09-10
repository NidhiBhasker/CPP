#include <bits/stdc++.h>
using namespace std;

class soln{
    public:
        int ans(string s){
            set<char> st;
            for(int i=0;i<s.size();i++){
                st.insert(s[i]);
            }
            return st.size();

        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        soln ob;
        cout<<ob.ans(s)<<endl;

    }

}
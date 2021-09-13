#include <bits/stdc++.h>
using namespace std;

  vector<int> plusOne(vector<int> &digits) {
            reverse(digits.begin(), digits.end());
            vector<int> ans;
            int carry = 1;
            for (int i = 0; i < digits.size(); i++) {
                int sum = digits[i] + carry;
                ans.push_back(sum%10);
                carry = sum / 10;
            }
            while (carry) {
                ans.push_back(carry%10);
                carry /= 10;
            }
            while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
                ans.pop_back();
            }
            reverse(ans.begin(), ans.end());
            reverse(digits.begin(), digits.end());
            return ans;
        }

int main(){
    int n;
    cin>>n;
    vector<int>A;
    vector<int>B;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        A.push_back(ele);
    }
    B = plusOne(A);
    for(int i=0;i<B.size();i++){
        cout<<B[i]<<" ";
    }
    return 0;
}
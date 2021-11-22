#include<bits/stdc++.h>
using namespace std;
string xyz(string s,int ind1,int ind2){
string new;
 for(int i=ind1;i<=ind2;i++){
        if(s[i]=='x'&& s[i+1]=='y'||s[i]=='y'&& s[i+1]=='x')
        {
            new[i]=z;
            for(int j=i+2;j<=ind2;j++){
                new[i+1]=s[i+2];
            }
        }
        if(s[i]=='x'&& s[i+1]=='z'||s[i]=='z'&& s[i+1]=='x'){
             new[i]=y;
            for(int j=i+2;j<=ind2;j++){
                new[i+1]=s[i+2];
            }
        }
        if(s[i]=='y'&& s[i+1]=='z'||s[i]=='z'&& s[i+1]=='y'){
             new[i]=x;
            for(int j=i+2;j<=ind2;j++){
                new[i+1]=s[i+2];
            }
        }
        if(s[i]=='x'&& s[i+1]=='x')
        {
            new[i]=y;
            new[i+1]=z;
            for(int j=i+2;j<=ind2;j++){
                new[i+2]=s[i+2];
            }
        }
        if(s[i]=='y'&& s[i+1]=='y')
        {
            new[i]=z;
            new[i+1]=x;
            for(int j=i+2;j<=ind2;j++){
                new[i+2]=s[i+2];
            }
        }
        if(s[i]=='z'&& s[i+1]=='z')
        {
            new[i]=x;
            new[i+1]=y;
            for(int j=i+2;j<=ind2;j++){
                new[i+2]=s[i+2];
            }
        }
        return new;



    }

}
int main(){
    string s;
    cin>>s;
    char opr;
    cin>>opr;
    int count=0;
    int ind1;
    int ind2;
    for(int i=0;i<s.size();i++){
        if(s[i]==opr){
            count++;
        
        }
        if (count==1){
            ind1=i;
        }
        if (count==2){
            ind2=i;
        }

    }
    string new1;
    while()
    {new1=xyz(s,ind1,ind2);
    for(int i=0;i<ind1;i++){
        cout<<s[i];
    }
    cout<<new1;
    for(int i=ind2;i<s.size();i++){
        cout<<s[i]; 
    }}

   
    return 0;
}
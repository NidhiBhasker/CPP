#include <iostream>
using namespace std;
int ansi(int n,int s)
{
    int m;
     m=((n*n)+n-(2*s))/2;
    if(!(int)m)
    {
        return -1;
    }
}

int main() 
{
	int t;
	while(t--)
    {
	    int n,s;
	    cin>>n>>s;
	    int x;
	    x= ansi(n,s);
	    cout<<x<<endl;
	    
	}
	return 0;
}

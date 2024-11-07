#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,X;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>X;
	    
	    int cost,s=1,p=6;
	    l1: if (N<=p)
	        cost=X*s;
	        
	    else
	    {
	        s++;
	        p=p+6;
	        goto l1;
	    }
	    cout<<cost<<"\n";
}
return 0;
}
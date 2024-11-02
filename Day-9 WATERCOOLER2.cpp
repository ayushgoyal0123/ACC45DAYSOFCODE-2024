#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T,X,Y;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>X>>Y;
	    if(X==Y)
	        cout<<"0\n";
	        
	    else if(Y%X==0)
	        cout<<(Y/X)-1<<"\n";
	        
	    else
	    cout<<Y/X<<"\n";
	}
return 0;
}

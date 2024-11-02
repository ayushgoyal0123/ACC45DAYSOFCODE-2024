#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T,W,X,Y,Z;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>W>>X>>Y>>Z;
	    if(X==W||Y==W||Z==W||X+Y==W||Y+Z==W||X+Z==W||X+Y+Z==W)
	        cout<<"YES\n";
	        
	    else
	        cout<<"NO\n";
	}
return 0;
}

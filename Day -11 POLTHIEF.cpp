#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T,X,Y;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>X>>Y;
	    if(X>Y)
	        cout<<X-Y<<"\n";
	        
	    else if(Y>X)
	        cout<<Y-X<<"\n";
	        
	    else
	        cout<<X-Y<<"\n";
	}
return 0;
}

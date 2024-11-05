#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T, X,Y;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>X>>Y;
	    if(Y>X)
	        cout<<0<<"\n";
	    else
	        cout<<X-Y<<"\n";
	}
return 0;
}

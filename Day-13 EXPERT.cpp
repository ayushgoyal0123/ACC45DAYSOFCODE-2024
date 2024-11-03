#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T,X,Y,N;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>X>>Y;
	    if((Y*100/X)>=50)
	        cout<<"YES\n";
	       
	    else
	        cout<<"NO\n";
	}

}

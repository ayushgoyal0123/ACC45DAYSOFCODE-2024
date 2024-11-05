#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T, A,B,C;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>A>>B>>C;
	    if((A+B)/2.0>C)
	        cout<<"YES\n";
	        
	    else
	        cout<<"NO\n";
	}
return 0;
}

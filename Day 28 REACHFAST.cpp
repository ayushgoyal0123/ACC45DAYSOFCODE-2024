#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,K;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>A>>B>>K;
	    if(A<=B)
	        cout<<ceil(float(B-A)/K)<<"\n";
	   
	    else
	       cout<<ceil(float(A-B)/K)<<"\n";

	}
return 0;
}

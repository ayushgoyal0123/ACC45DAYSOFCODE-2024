#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T;
	float N,K,M;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>N>>K>>M;
	    cout<<ceil(N/(K*M))<<"\n";
	}
	
return 0;
}

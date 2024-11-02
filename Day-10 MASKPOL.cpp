#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,T,A,N;
    cin>>T;
	for(i=0;i<T;i++)
	{
	 cin>>N>>A;
	 if(N-A==A)
	    cout<<A<<"\n";
	    
	 else if(N-A<A)
	    cout<<N-A<<"\n";
	
	 else
	    cout<<A<<"\n";
	
	}
return 0;
}

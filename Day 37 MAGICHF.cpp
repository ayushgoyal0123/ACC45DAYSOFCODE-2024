#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int T,N,X,S,A,B;
	cin>>T;
	for(long long int i=0;i<T;i++)
	{
	    cin>>N>>X>>S;
	    int target=X;
	    for(long long int j=0;j<S;j++)
	    {
	        cin>>A>>B;
	        if(target==A)
	            target =B;
	            
	        else if(target==B)
	            target =A;
	            
	        else
	            continue;
	      
	    }
	    cout<<target<<"\n";
	    
	}
return 0;
}

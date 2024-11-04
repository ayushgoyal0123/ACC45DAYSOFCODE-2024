#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,i,A,B,C,D;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>A>>B>>C>>D;
	    if(A+C>=A+D && A+C>=B+C && A+C>=B+D)
	        cout<<A+C<<"\n";
	        
	    else if (A+D>=A+C && A+D>=B+C && A+D>= B+D)
	        cout<<A+D<<"\n";
	        
	    else if (B+C>=A+C && B+C>=A+D && B+C>=B+D)
	        cout<<B+C<<"\n";
	        
	    else 
	        cout<<B+D<<"\n";
	}
return 0;
}

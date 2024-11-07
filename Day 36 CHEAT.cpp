#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N;
	    int count=0,n=2;
	    for(int j=0;j<=N;j++)
	    {
	        if(j==n)
	        {
	        count++;
	        n=n+7;
	        }
	    }
	    
	    cout<<count<<"\n";
	}
return 0;
}

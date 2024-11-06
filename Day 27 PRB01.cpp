#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,count=0;;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N;
	    int j;
	    for(j=2;j<=N-1;j++)
	    {
	        if(N%j==0)
	        {
	            break;
	        }
	   	}
	   	if(N==j)
             cout<<"yes\n";
        
         else
             cout<<"no\n";
	}
    
        
return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,j,T,N,X,Y;
	cin>>T;
	for(i=0;i<T;i++)
	{   
	    cin>>N>>X>>Y;
	    int sum =X;
	    int count=0;
	    for(j=1;j<=N;j++)
	    {
	        if(Y==0){
	        count=1;
	        break;
	        }
	        
	        else if(sum==Y)
	        {
	        count =1;
	        break;
	        }
	        
	        else
	           sum=sum+X;
	    }
	    
	    if(count==1)
	        cout<<"YES\n";
	        
	    else
	        cout<<"NO\n";
	}
return 0;
}

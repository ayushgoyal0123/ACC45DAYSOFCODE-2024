#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>A>>B;
	    int C,count=0;
	    C=21-(A+B);
	    for(int j=1;j<=10;j++)
	    {
	       if(C==j)
	       count=1;
	    }
	    
	    if(count==1)
	        cout<<C<<"\n";
	        
	    else
	        cout<<-1<<"\n";
	}
return 0;
}

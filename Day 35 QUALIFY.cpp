#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,X,A,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>X>>A>>B;
	    if(A + (B*2)>=X)
	        cout<<"Qualify\n";
	        
	    else
	        cout<<"NotQualify\n";
	}
return 0;
}

#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int i,j,T,N,A,B;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>N>>A>>B;
	    int z;
	    z=log(N)/log(2);
	    cout<<A*(z) + B*(z-1)<<"\n";
	}
return 0;
}

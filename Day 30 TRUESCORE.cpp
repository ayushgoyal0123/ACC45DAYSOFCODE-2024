#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C,D;
	cin>>T;
	    for(int i=0;i<T;i++)
	    {
	        cin>>A>>B;
	        cout<<"\n";
	        cin>>C>>D;
	        if(C<A || D<B)
	            cout<<"IMPOSSIBLE";
	            
	        else 
	            cout<<"POSSIBLE";
	    }
return 0;
}

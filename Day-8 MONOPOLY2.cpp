#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,T,P,Q,R,S;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>P>>Q>>R>>S;
	    if((P>(Q+R+S))||(Q>(P+R+S))||(R>(P+Q+S))||(S>(P+Q+R)))
	        cout<<"YES\n";
	        
	    else
	        cout<<"NO\n";
	}
return 0;

}

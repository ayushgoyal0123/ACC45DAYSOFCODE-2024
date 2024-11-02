#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i, T,N,X;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N>>X;
        if(N==X)
            cout<<"0\n";
        else if(N-X<X)
            cout<<N-X<<"\n";
        else
            cout<<X<<"\n";
    }
return 0;
}

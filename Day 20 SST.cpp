#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,T,A,B;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>A>>B;
        if(A*10 > B*5 )
            cout<<"FIRST\n";
            
        else if (A*10 < B*5)
            cout<<"SECOND\n";
            
        else
            cout<<"ANY\n";
    }
return 0;
}

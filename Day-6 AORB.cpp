#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,A,B,T,X,Y,outp1,outp2;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>X>>Y;
        A=500;
        B=1000;
        outp1= A-(X*2) + B-((X+Y)*4);
        outp2= B-(Y*4) + A-((X+Y)*2);
        if(outp1>outp2)
        cout<<outp1<<"\n";
        
        else
        cout<<outp2<<"\n";
    }
return 0;
}

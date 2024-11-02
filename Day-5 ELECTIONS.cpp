#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,T,Xa,Xb,Xc;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>Xa>>Xb>>Xc;
        if(Xa>Xb && Xa>Xc && Xa>50)
            cout<<"A"<<"\n";
        
        else if(Xb>Xc && Xb>Xa  && Xb>50)
            cout<<"B"<<"\n";
            
        else if(Xc>Xa && Xc>Xb && Xc>50)
            cout<<"C"<<"\n";
            
         else 
            cout<<"NOTA\n";
    }
    return 0;
}

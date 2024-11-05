#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,T,H,X,Y;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>H>>X>>Y;
        H=H-Y;
        int count=1;
        
        if(H==0){
            cout<<count<<"\n";

        }
        
        else {
        count =count+ceil(float(H)/X);
        cout<<count<<"\n";
    }
    }
return 0;
}

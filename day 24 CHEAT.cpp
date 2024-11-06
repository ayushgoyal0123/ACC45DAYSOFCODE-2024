#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int count=0;
        if(N==1)
            cout<<count<<"\n";
            
        else
            {
                for(int j=2;j<=N;j+=7)
                    count++;
                    
                    cout<<count<<"\n";
            }
    }
return 0;
    
}

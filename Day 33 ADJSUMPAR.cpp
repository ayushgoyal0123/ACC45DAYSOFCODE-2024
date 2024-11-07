#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,N,B[100000];
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>N;
        int sum=0;
        for(int j=0;j<N;j++)
            cin>>B[j];
            
        for(int k=0;k<N;k++)
            sum = sum +B[k];
    
        if(sum%2==0)
            cout<<"YES\n";
            
        else
            cout<<"NO\n";
    }
return 0;
}

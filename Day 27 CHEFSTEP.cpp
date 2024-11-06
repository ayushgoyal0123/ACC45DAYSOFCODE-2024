#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,N,K;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>> N>>K;
        int A[10000];
        for(int j=0;j<N;j++)
        {
            cin>>A[j];
        }
        
        for(int k=0;k<N;k++)
        {
            if(A[k]%K==0)
            cout<<"1";
            
            else
            cout<<"0";
        }
        cout<<"\n";
    }

return 0;
}

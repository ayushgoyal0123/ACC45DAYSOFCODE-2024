#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,N;
    int A[100000];
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>N;
        
        for(int l=0; l<N;l++)
            cin>>A[l];
        
        for(int j=0; j<N-1;j++)
        {
            if(j%2==0)
            {
                if(A[j]>=A[j+1])
                {
                    A[j]=A[j]+A[j+1];
                    A[j+1]= A[j]-A[j+1];
                    A[j]= A[j]-A[j+1];
                }
            }      
             else
                {
                if(A[j]<=A[j+1])
                {
                    A[j]=A[j]+A[j+1];
                    A[j+1]= A[j]-A[j+1];
                    A[j]= A[j]-A[j+1];
                }
                }
                
            }
             for(int k=0;k<N;k++)
                 {
                    cout<<A[k]<<" ";
                 }   
        
                     cout<<"\n";
      }
    
}

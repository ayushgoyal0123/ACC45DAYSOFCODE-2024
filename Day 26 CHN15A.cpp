#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {   
        int N,K,count=0;
         int A[100000];
         
        cin>>N>>K;
        
         for(int j=0;j<N;j++)
          cin>>A[j];

        for(int k=0;k<N;k++)
        {   
           
            if((A[k]+K)%7==0)
               count++;
        }
          cout<<count<<"\n";
    }
return 0;    
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//I used Hints to solve this problem
    int T,N,A[1000];
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        for(int j=0;j<N;j++)
        {
            cin>>A[j];
        }
        int sum=0;
        for(int k=0;k<N;k++)
        {
            sum =sum+A[k];
        }
        int count1=0,count2=0;
        for(int l=0;l<N;l++)
        {
            if(A[l]==1)
            count1++;
            
            else
            count2++;
        }
        int diff;
        if(count1>=count2)
            diff=count1-count2;
            
        else
            diff =count2-count1;
                
            if(N%2!=0)
                cout<<-1<<"\n";
                
            else 
                
                {
                    if(sum==0)
                     cout<<0<<"\n";
                     
                     else
                     cout<<(diff/2)<<"\n";
                }
    }
return 0;
}

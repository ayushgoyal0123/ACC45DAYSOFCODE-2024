#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, i,X,Y,count;
	cin>>T;
	for(i=0;i<T;i++)
    {   
        cin>>X>>Y;
        if(X>=2*Y || Y>=2*X)
            cout<<0<<"\n";
            
        else
            {   count=0;
                if(X<Y)
                {
                l1: --X;
                    count++;
                if(X>=2*Y || Y>=2*X)
                    cout<<count<<"\n";
                
                else
                    goto l1;
                }
                
                else
                {
                    l2: --Y;
                    count++;
                     if(X>=2*Y || Y>=2*X)
                        cout<<count<<"\n";
                      else
                        goto l2;
                    
                }
            }
    }
return 0;
}

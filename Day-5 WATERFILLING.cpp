#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int i,T,B1,B2,B3;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>B1>>B2>>B3;
        if(B1==0&& B2 ==0 && B3==0)
            cout<<"Water filling time\n";
    
        else if(B1==1&& B2 ==1 && B3==1)
            cout<<"Not now\n";
            
        else if(B1==0&& B2 ==0 && B3==1)
            cout<<"Water filling time\n";    
            
        else if(B1==0&& B2 ==1 && B3==0)
            cout<<"Water filling time\n";    
            
        else if(B1==1&& B2 ==0 && B3==0)
            cout<<"Water filling time\n";
            
        else
            cout<<"Not now\n";    
    
    }
return 0;
    
}

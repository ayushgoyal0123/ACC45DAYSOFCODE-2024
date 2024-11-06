#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i, T,N;
	cin>>T;
	for(i=0;i<T;i++)
	{   int count1 =0;
	    int count2 = 0;
	    cin>>N;
	    string s;
	    for(int j=0;j<N;j++){
	        cin>>s;
	    
	    if(s=="START38")
	        count1++;
	        
	    else
	        count2++;
	   
	        
	    }
	    
	  cout<<count1<<" "<<count2<<"\n";
	}

}

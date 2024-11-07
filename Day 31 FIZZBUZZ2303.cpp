#include <bits/stdc++.h>
using namespace std;

int factorial(int N)
{
      int fact=1;
	    for(int j=1;j<=N;j++)
	       { fact = fact*j;}
	       
	   return fact;
}

int main() {
	// your code goes here
	int T,N;
	cin>>T;
	for(int i=0; i<T;i++)
	{
	    cin>>N;
	    cout<<factorial(N)/factorial(N-2)<<"\n";
	}
return 0;
}


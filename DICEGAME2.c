#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c,x,y,z,A,B,max;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
	    if(a>b && a>c)
	    {
	        max=(b>c)?b:c;
	        A=a+max;
	    }
	    else if(b>c)
	    {
	        max=(c>a)?c:a;
	        A=b+max;
	    }
	    else
	    {
	        max=(a>b)?a:b;
	        A=c+max;
	    }
	    if(x>y && x>z)
	    {
	        max=(y>z)?y:z;
	        B=x+max;
	    }
	    else if(y>z)
	    {
	        max=(z>x)?z:x;
	        B=y+max;
	    }
	    else 
	    {
	        max=(x>y)?x:y;
	        B=z+max;
	    }
	    if(A>B)
	    printf("Alice\n");
	    else if(B>A)
	    printf("Bob\n");
	    else 
	    printf("Tie\n");
	}
	return 0;
}


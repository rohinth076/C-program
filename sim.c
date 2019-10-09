#include<stdio.h>
int main()
{
	int m,n,b,r,i,a,s,j;
	printf(" enter n");
	scanf("%d",&n);
	m=n;
	b=0;
	while(n!=0)
	{
		s=0;
		r=n%10;
		for(i=1;i<=r;i++)
		{
			a=1;
			for(j=1;j<=i;j++)
			a=a*j;
			s=s+a;
			
		}
		b=b+s;
	    n=n/10;
	}
	if(m==b)
	printf("%d is sim\n",m);
	else
	printf("%d is not sim\n",m);
	
}

#include<stdio.h>
#include<math.h>
int Prime(int );
int main()
{
	int n;

	printf("enter n\n");
	scanf("%d",&n);

	if(Prime(n))
	printf("%d is prime number\n",n);
	else
	printf("%d is not a prime number",n);

	return 0;
}


int Prime(int n)
{
	int i,f;

	f=1;

	if(n%2==0)
	 return 0;

	 for(i=3;i<=sqrt(n);i=i+2)
	   if(n%i==0)
	   {
	   f=0;
	   break;
	   }

	   return f;
}
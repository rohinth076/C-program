#include<stdio.h>
#include<math.h>
int rev(int );
int main()
{
	int n;
	scanf("%d",&n);
	if(rev(pow(n,2))==pow(rev(n),2))
	  printf("adam no.");
	 else
	  printf("not a adam no.");

	 return 0;
}

int rev(int n)
{
	int r,s;
	s=0;
	while(n)
	{
	 r=n%10;
	 s=s*10+r;
	 n /=10;
	}
	return s;
}

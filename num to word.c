#include<stdio.h>
#include<string.h>

char *a[15]={"","one","two","three","four","five","six","seven","eight","nine"};
char *b[15]={"","eleven","twelve","thriteen","fourteen","fifteen","sixteen","seventeen","eightteen","ninteen"};
char *c[15]={"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
char *d[15]={"","hundred","thousand","lakh","crore"};

void fun (int ,int);

int main()
{
	long n,e[10]={0},m,i;
	
	printf("enter a number\n");
	scanf("%ld",&n);
	m=n;
	i=0;
	while(m!=0)
	{
		e[i]=m%10;
		m=m/10;
		i++;
	}
	if(n==0)
	printf("zero");
	
	
	   	fun(e[8],e[7]);
	   	if(e[7]!=0 || e[8]!=0)
	   	printf("%s ",d[4]);
	
	   	fun(e[6],e[5]);
	   	if(e[6]!=0 || e[5]!=0)
	   	printf("%s ",d[3]);
	
		fun(e[4],e[3]);
		if(e[4]!=0 || e[3]!=0)
		printf("%s ",d[2]);
	
		fun(0,e[2]);
		if(e[2]!=0)
		printf("%s ",d[1]);
	
		fun(e[1],e[0]);
		
		return 0;
	
}

void fun(int x,int y)
{
	if(x==0 && y!=0)
	printf("%s ",a[y]);
	
    else if(x!=0 && y==0)
	printf("%s ",c[x]);
	
    else if(x==1 && y!=0)
	printf("%s ",b[y]);
	
	else if(x!=0 && y!=0)
	printf("%s %s",c[x],a[y]);
}

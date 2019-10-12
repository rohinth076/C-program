#include<stdio.h>
#include<string.h>
struct varcon
{
	char v[20];
	int c;

};
int main()
{
	struct varcon b[10];
	char a[100];
	int l,i,k,m,s,j;
	printf("enter a string");
	gets(a);
	l=strlen(a);
	k=0;
	
	for(i=0;i<l;i++)
	{
		m=0;
		while(a[i]>96 && a[i]<123)
		{
		  b[k].v[m] = a[i];
		  m++;
		  i++;
	    }
	    b[k].v[m]='\0';
	    s=0;
	    while((a[i]-48)<=9 && a[i]!='\0')
	    {
	    	s=s*10;
	    	s=s+(a[i]-48);
	    	i++;
		}
		b[k].c=s;
		k++;
		i--;
	}
	for(i=0;i<k;i++)
	 
	 for(j=1;j<=b[i].c;j++)
	   printf("%s",b[i].v);
}

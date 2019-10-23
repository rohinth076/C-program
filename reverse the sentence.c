#include<stdio.h>
#include<string.h>
char *gets(char *a);
int main()
{
	char a[200],b[200];
	int s,i,l,j,f,n;
	printf("enter a string\n");
	gets(a);
	n=strlen(a);
	s=0;
	l=0;
	for(i=n-1;i>=0;i--)
	{
	if(a[i]==32 || i==0)
	{
	for(j=i+1;j<n;j++)
		{ 
		if(j==1)
	   b[l++]=a[0];
		if(a[j]==32)
		break;
	   b[l++]=a[j];
	    }
	 b[l++]=' ';
	}

	}
	b[l++]='\0';
	printf("%s",b);
    return (0);
}
    

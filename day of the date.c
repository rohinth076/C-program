#include<stdio.h>
char *d[10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
 int b[]={0,0,3,3,6,1,4,6,2,5,0,3,5};
 int c[]={0,5,3,1};  
char * dayOfTheWeek(int , int , int );
int main()
{
	int day ,month,year;
	char *a;
	printf("enter date ,month,year");
	scanf("%d %d %d",&day,&month,&year);
	a=dayOfTheWeek(day,month,year);
	printf("%s",a);
	return 0;
}

char * dayOfTheWeek(int day, int month, int year)
{

 
    
    int s,l,m,i,f,n;  
    s=0;
    f=0;
    n=year;
    
    if(year%4==0 && month>=3)
        f=1;
    
    l=year%100;
    year=year/100;
    
    s=s+day;       //date
    s=s+b[month];  //month code
    s=s+(l-1);     //last two digits of year-1
    if(l==0)
    s=s-1;
    s=s+((l-1)/4); //last two digits of year/4
    s=s+c[year%4]; //century code
    s=s+f;         //for leap year
    m=s%7;
    
    return d[m];

}

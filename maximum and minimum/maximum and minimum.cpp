#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
{
	if(a>b&&a>c)
	printf("a is maximum\n");
	else if(b>a&&b>c)
	printf("b is maximum\n");
	else if(c>a&&c>b)
	printf("c is maximum\n");
}
{
if(a<b&&a<c)
	printf("a is minimum\n");
	else if(b<a&&b<c)
	printf("b is minimum\n");
	else if(c<a&&c<b)
	printf("c is minimum\n");	
}
}

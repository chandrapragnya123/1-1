#include<stdio.h>
int main()
{
int num1,num2,product;
printf("enter number");
scanf("%d",&num1);
printf("multiplication table of %d is:",num1);
num2=1;
while(num2<=5)
{
	product=num1*num2;
	printf("%d*%d=%d\n",num1,num2,product);
	num2=num2+1;
	
}
return 0;
}


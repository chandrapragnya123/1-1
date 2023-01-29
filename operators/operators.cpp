#include<stdio.h>
int main()
{
int num1,num2;
printf("enter the numbers");
scanf("%d%d",&num1,&num2);
printf("%d\n",num1+num2);
printf("%d\n",num1-num2);
printf("%d\n",num1*num2);
printf("%d\n",num1%num2);
printf("%d\n",num1>=num2);
printf("%d\n",num1<=num2);
printf("%d\n",num1&&num2);
printf("%d\n",num1||num2);
printf("%d\n",num1=num1+1);
printf("%d\n",num1=num2+2);
printf("%d\n",num1=num1++ + ++num1);
printf("%d\n",num2=num2-- + --num2);
printf("%d\n",num1!=num2);
0
return 0;
}

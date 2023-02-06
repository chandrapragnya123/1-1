#include<stdio.h>
#include<math.h>
int main()
{
int x,i,n;
float sum=1;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value of x");
scanf("%d",&x);
for(i=1;i<=n;i++){

sum=sum+pow(x,i);
}
printf("sum of the geometric progression is  %f",sum);
return 0;
}



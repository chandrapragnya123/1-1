#include<stdio.h>
#include<math.h>
int main()
{
/* calculating the compound intrest */
float p,r,t,ci;
printf("enter principal amount");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow(1+r/100,t);
printf("%f",ci);
return 0;
}


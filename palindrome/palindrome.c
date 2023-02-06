#include<stdio.h>
int main()
{
int num,sum=0,r,temp,rev=0;
printf("enter a number");
scanf("%d",&num);
temp=num;
while(num>0){
r=num%10;
sum=sum+r;
rev=(rev*10)+r;

num=num/10;


}
printf("sum of the given number is :%d\n",sum);


if(temp==rev){
printf("it is palindrome");
}
else{
printf("it is not a palindome");
}
return 0;
}

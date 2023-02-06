#include<stdio.h>
int main()
{
int per;
printf("enter percentage");
scanf("%d",&per);
if(per>=70&&per<=100)
{
printf("distinction");
}
else if(per>=60&&per<70)
{
printf("first class");
}
else if(per>=50&&per<60)
{
printf("second class");
}
else
{
printf("fail");
}

}


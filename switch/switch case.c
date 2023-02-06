#include<stdio.h>
int main()
{
int choice;
float first_num=56.7;
float second_num=45.8;
printf("choice 1:addition\n");
printf("choice 2:subtraction\n");
printf("choice 3:multiplication\n");
printf("choice 4:division\n");
printf("enter the choice");
scanf("%d",&choice);    
switch(choice)
{
     case 1:
     printf("addition is:%f\n",first_num+second_num);
     break;
     case 2:
     printf("subtraction is:%f\n",first_num-second_num);
     break;
     case 3:
     printf("multiplication is:%f\n",first_num*second_num);
     break;
     case 4:
     printf("division is:%f\n",first_num/second_num);
     break;
     
   
   default:
   printf("enter choice between 1 to 4\n");
   break;
   }
   printf("end of switch case\n");
   return 0;
   }

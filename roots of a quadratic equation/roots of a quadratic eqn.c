#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float root1,root2,imaginary,discriminant;
	printf("\n Please Enter values of a,b,c :  ");
  	scanf("%d%d%d",&a,&b,&c);
  	discriminant = (b*b)-(4*a*c);
  	if(discriminant>0)
  	{
  		root1 = (-b+sqrt(discriminant)/(2*a));
  		root2 = (-b-sqrt(discriminant)/(2*a));
		printf("roots are %f,%f\n",root1,root2);
		printf("roots are real\n");
  	}
  	else if(discriminant==0)
  	{
  		root1= -b/(2*a);
  		root2= -b/(2*a);
  		printf("roots are %f,%f\n",root1,root2);
  		printf("roots are equal");
  	}
  	else 
  	{
  		printf("roots are imaginary");
  	}
	
  	return 0;
}

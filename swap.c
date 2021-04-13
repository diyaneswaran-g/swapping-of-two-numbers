#include <stdio.h>
#include <stdlib.h>

int main()
 {
 	int a,b,temp;
 	printf("Enter the two numbers that you wanted to swap \n");
 	scanf("%d",&a);
 	scanf("%d",&b);
 	printf("The two numbers are %d%d\n\n",a,b);
 	temp=a;
 	a=b;
 	b=temp;
 	printf("The swaped two numbers are %d%d\n\n",a,b);
	return 0;
 }

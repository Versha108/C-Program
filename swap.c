// Simple Swapping 
#include<stdio.h>
main(){
	int  a,b,temp;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping\n");
	printf("a=%d,b=%d",a,b);
}
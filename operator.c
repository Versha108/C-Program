/*program to exhibit the use of operator*/
#include<stdio.h>
 main()
 {
 	int i,j,sum,mul,mod;
 	float l,m,sub,divi;
 	printf("enter two interger:");
 	scanf("%d%d",&i,&j);
 		printf("enter two real no:");
 	scanf("%f%f",&l,&m);
 	sum=i+j;
 	mul=i*j;
 	sub=l-m;
 	divi=l/m;
 	printf("sum=%d\n",sum);
 	printf("multiplication=%d\n",mul);
 	printf("remainder=%d\n",mod);
 	printf("substraction=%f\n",sub);
 	printf("division=%f\n",divi);
 	
 }
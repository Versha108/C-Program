#include<stdio.h>
// eligibility for voting and driving
void main(){
int age;
printf("Enter age=");
scanf("%d",&age);
if(age>=18)
{
    printf("adult\n");
    printf("eligible to vote\n");
    printf("eligible to drive");
}
else{
    printf("not adult");
}
}
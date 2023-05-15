#include<stdio.h>
int main(){
    int arr[50],position,c,n,value;
    printf("Enter numbers of elements in array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(c=0;c<n;c++)
       scanf("%d",&arr[c]);
     printf("Enter the location where you want to enter the new element\n");
     scanf("%d",&position);
     printf("Enter the value\n");
     scanf("%d",&value);
     for(c=n-1;c>=position-1;c--)
           arr[c+1]=arr[c];
     arr[position-1]=value;
     printf("Resultant array\n");
     for(c=0;c<=n;c++)
        printf("%d\n",arr[c]);
    return 0;
}
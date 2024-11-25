#include<stdio.h>
int main()
{
int num,i;
printf("enter any number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if (num%i==0)
    printf("%d is not prime number.", num);
}
}                                     

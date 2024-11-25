#include<stdio.h>
int main()
{

int num;
printf("write any number:");
scanf("%d",&num);
if (num>=0)
{
printf("its a postive number\n" );
}
else
{
printf("its a negative number\n");
}
int y = num%10;
printf("the unit place number is:");
printf("%d\n",y);
int k=num/10;
int l = k%10;
printf("now this the tenth place:");
printf("%d\n",l);
int m =num/100;
int n = m%10;
printf("now this is the 100th place:");
printf("%d\n",n);
int add=y+l+n;
printf("this is the addition of each digit of your number:");	
printf("%d",add); 
}

#include<stdio.h>
int main() 
{
    int a[5];
    int i;
    int num;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) 
    {
        printf("Enter the number %d\n: ", i + 1);
        scanf("%d", &a[i]);

    }
    
    	printf("write the number you want to find\n");
    	scanf("%d",&num);
    	
    		int arraylength = sizeof(a[5]);
    		int half = arraylength/2;
    	
    		if(num>half)
    		{
    		printf("it exists on right side of array\n");
		}
				
		else if(num<half)
		{
		printf("it exists on left side of array\n");
		}
	
		else
		{
		printf("the number does not exists\n");
		}
	
return 0;
}


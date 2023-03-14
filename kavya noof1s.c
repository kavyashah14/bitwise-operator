#include <stdio.h>
#include <stdlib.h>
int main()
 {
	int num1;
	int count=0;
	printf("Enter a number: ");
	scanf("%d",&num1);
	while(num1 !=0)
	{
		if((num1 & 1) == 1)
		count++;
		num1= num1>>1;
	}
	printf("The number of ones are:\n%d\n",count);
	
		return 0;
}

	



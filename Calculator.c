#include<stdio.h>

int main()
{   
// Declareing the variables
	float num1,num2,res;
	int n;
	
// Taking user input
	printf("\nEnter two numbers : ");
	scanf("%f %f",&num1,&num2);

	printf("\nChoose the Operation ");
	printf("\nPress 1 - Add");
	printf("\nPress 2 - Subtract");
	printf("\nPress 3 - Multiply");
	printf("\nPress 4 - Divide");
	printf("\nEnter your choice : ");
	scanf("%d",&n);

// Using switch condition
	switch(n)
	{
	case 1:
		res = num1 + num2;
		printf("\nSum is %f",res);
		break;
	case 2:
		res = num1 - num2;
		printf("\nDifference is %f",res);
		break;
	case 3:
		res = num1 * num2;
		printf("\nProduct is %f",res);
		break;
	case 4:
		res = num1 / num2;
		printf("\nQuotient is %f",res);
		break;
	default:
		printf("\nINvalid Option Selected ");
	}
	return 0;
}
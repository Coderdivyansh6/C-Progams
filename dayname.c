#include<stdio.h>

void main()
{
// Declearing the variables
	int num;

// Taking user input
	printf("\nEnter a day number : ");
	scanf("%d",&num);

// Using switch condition
	switch(num)
	{
	case 1:
		printf("\n Monaday");
		break;
	case 2:
		printf("\n Tuesday");
		break;
	case 3:
		printf("\n Wednesday");
		break;
	case 4:
		printf("\n Thursday");
		break;
	case 5:
		printf("\n Friday");
		break;
	case 6:
		printf("\n Saturday");
		break;
	case 7:
		printf("\n Sunday");
		break;
	default:
		printf("\nInvalid Day Number");

	}
	

}
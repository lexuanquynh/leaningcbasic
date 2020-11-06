/*#include <stdio.h>

#define PRIME_NUMBER		0
#define NOT_PRIME_NUMBER	1

void checkPrimeNumber();

int main() 
{
	checkPrimeNumber(); // argument is not passed 
	return 0;
}

// return type is void meaning doesn't return any value 
void checkPrimeNumber() 
{
	int n, i, flag = PRIME_NUMBER;

	printf("Enter a positive integer: "); 
	scanf_s("%d", &n);

	for (i = 2; i <= n / 2; ++i) 
	{
		if (n % i == 0) 
		{
			flag = NOT_PRIME_NUMBER;
			break;
		}
	}

	if (flag == NOT_PRIME_NUMBER)
		printf("%d is not a prime number.", n); 
	else 
		printf("%d is a prime number.", n);
}
*/
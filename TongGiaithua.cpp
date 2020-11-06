#include <stdio.h>
#include<math.h>

long int multiplyNumbers(int n);

double SumArray(int n);

int main()
{
	double result = 0;
	int number;

	printf_s("Nhap n: ");
	scanf_s("%d", &number);

	result = SumArray(number);
	result = sqrt(result);

	printf_s("result: %f", result);
	return 0;
}


long int multiplyNumbers(int n) {
	if (n >= 1) return n * multiplyNumbers(n - 1);
	else return 1;
}

double SumArray(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return (multiplyNumbers(n) /  pow(2 * n - 2, 5)) + SumArray(n - 1);
	}


}
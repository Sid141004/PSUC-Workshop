// C Program to print the Fibbonaci series
#include <stdio.h>
int prev1 = 1;
int prev2 = 0;

// recursive function
void fib(int n)
{
	if (n < 3) {
		return;
	}
	int fn = prev1 + prev2;
	prev2 = prev1;
	prev1 = fn;
	printf("%d ", fn);
	return fib(n - 1);
}

void printFib(int n)
{
	//n=0
	if (n < 1) {
		printf("Invalid number of terms\n");
	}
	//n=1
	else if (n == 1) {
		printf("%d ", 0);
	}
	//n=2
	else if (n == 2) {
		printf("%d %d", 0, 1);
	}
	//n>2
	else {
		printf("%d %d ", 0, 1);
		fib(n);
	}
	return;
}
int main()
{
	int n = 9;
	printFib(n);
	return 0;
}

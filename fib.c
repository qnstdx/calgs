#include <stdio.h>

void fib(int n)
{
	int f1 = 1, f2 = 1, temp;
	for (int i = 2; i < n; ++i) {
		temp = f1;
		f1 = f2;
		f2 = temp + f2;

		printf("%d\n", f2);
	}
}

int main()
{
	fib(10);
}

#include <stdio.h>

int bsearch(int list[], int item)
{
	int low = 0, high = sizeof(list) / sizeof(int) - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		int guess = list[mid];

		if (guess == item)
			return 1;
		else if (guess > mid)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return 0;
}

int main()
{
	int list[5] = {1, 3, 5, 7, 10};

	int result = bsearch(list, 1);

	printf("%d\n", result);

	return 0;
}

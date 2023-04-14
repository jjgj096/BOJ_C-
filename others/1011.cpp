#include <stdio.h>

int main()
{
	int n;
    int x, y;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);

		int distance = y - x;
		int count = 0;
		long int max = 0;
		while (max < distance) {
			max += count / 2 + 1;
			count++;
		}
		printf("%d\n", count);

	}
	return 0;
}

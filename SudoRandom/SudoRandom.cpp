
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N    20
#define MAX 100


int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		printf("%d\n", rand() % MAX + 1);
	}

	return EXIT_SUCCESS;
}


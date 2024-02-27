#include <stdio.h>
#include <stdlib.h> // malloc, calloc

int main() {
	int *v;
	int n = 10;

	v = (int*)malloc(n*sizeof(int)); // malloc
	printf("%d\n", v[0]);
	free(v);

	v = (int*)calloc(n, sizeof(int)); // calloc
	printf("%d\n", v[0]);
	free(v);
}
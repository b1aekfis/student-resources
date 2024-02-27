#include <stdio.h>
#include <stdlib.h> // itoa

int main() {
	char buffer[3];
	itoa(170,buffer,10);
	printf("%s", buffer);
	return 0;
}
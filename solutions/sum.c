#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

if (argc < 2) {
	printf("Usage: %s <list of integers>\n", argv[0]);
	return 1;
}

int sum = 0;

for(int i = 1; i < argc; i++) {
	int value = atoi(argv[i]);
	sum +=value;
}

printf("Sum of arguments: %d\n", sum);



return 0;
}

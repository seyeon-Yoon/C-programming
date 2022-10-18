#include<stdio.h>

#pragma warning(disable:4996)


int bin(int n);



int main() {

	int number;

	printf("Please enter a number: ");
	scanf("%d", &number);
	bin(number);
	printf("\n");


	return 0;

}

int bin(int n) {



	if (n == 0 || n == 1)

		printf("%d", n);

	else {

		bin(n / 2);

		printf("%d", n % 2);

	}

	return 0;

}
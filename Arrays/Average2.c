#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number[3];

    printf("Enter a number: ");
    scanf("%d", &number[0]);

    printf("Enter a number: ");
    scanf("%d", &number[1]);

    printf("Enter a number: ");
    scanf("%d", &number[2]);

    // Print average
    printf("Average: %f\n", (number[0] + number[1] + number[2]) / 3.0);

	return 0;
}

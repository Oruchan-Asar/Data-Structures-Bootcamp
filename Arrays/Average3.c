#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numbers[3];
    
    int i;
	for (i = 0; i < 3; i++)
    {
       printf("Enter a number: ");
       scanf("%d", &numbers[i]);
    }

    // Print average
    printf("Average: %f\n", (numbers[0] + numbers[1] + numbers[2]) / 3.0);
	return 0;
}

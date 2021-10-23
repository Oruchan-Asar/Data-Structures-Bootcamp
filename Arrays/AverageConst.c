#include <stdio.h>
#include <stdlib.h>

const int CONSTANT = 3;

int main(void)
{
    int scores[CONSTANT];
    
	int i;
	for (i = 0; i < CONSTANT; i++)
    {
    	printf("Enter a score: ");
    	scanf("%d", &scores[i]);
    }
    
    float sum = 0;
    for (i = 0; i< CONSTANT; i++) {
    	sum += scores[i];
	}
    
    printf("Average: %f\n", sum / CONSTANT);
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *input;
	printf("Before capitalize: ");
	scanf("%s", &input);
	
	printf("After:  ");
	
	int i;
	int n = strlen(&input);
    for (i = 0; i < n; i++)
    {
        printf("%c", toupper(&input[i]));
    }
    printf("\n");
}

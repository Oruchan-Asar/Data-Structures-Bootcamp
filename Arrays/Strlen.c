#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *name;
	
	printf("What is your name: ");
	scanf("%s", &name);
	
    printf("Output: ");
    
    int i;
    int len = strlen(&name);
   
    for (i = 0; i < len; i++)
    {
        printf("%c", &name[i]);
    }
    printf("\n");
	return 0;
}

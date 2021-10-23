#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numbers[5] = {1, 9, 3, 11, 7};
    int maxValue = numbers[0];
    
    int i;
    for (i = 1; i < 5; i++) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    printf("%d", maxValue);
}

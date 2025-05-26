#include <stdio.h>

int main() {
    int i;
    printf("Enter how many elements: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Invalid input. Number of elements must be greater than zero.\n");
        return 1;
    }

    for (i = 0; i < i; i++) {
        printf("* ");
    }
    printf("\n");

    return 0;
}

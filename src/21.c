#include <stdio.h>

int main() {
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &i);

    if (i > 0) {
        for (j = 1; j <= i; ++j) {
            for (int k = 1; k < j; ++k) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Invalid input!");
    }

    return 0;
}

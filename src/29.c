#include <stdio.h>

int main() {
    int i = 0;
    printf("Hello, World!\n");
    
    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
        
        i++;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int x = 0;
    while (x < 10) {
        if (x % 2 == 0) {
            printf("偶数: %d\n", x);
        } else {
            printf("奇数: %d\n", x);
        }
        x++;
    }
    return 0;
}

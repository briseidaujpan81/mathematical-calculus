#include <stdio.h>
int main() {
    int n = 5;
    double x = 2.0;
    double y = 3.0;
    double z = 4.0;
    double w = 1.0;
    double result = (n * x) + (y / z) - (w / n);
    printf("Result: %f\n", result);
    return 0;
}

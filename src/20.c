#include <stdio.h>
int main() {
    double x, y, z;
    printf("Enter values for x and y: ");
    scanf("%lf %lf", &x, &y);
    if (fabs(x - 0.0) < 1e-6 && fabs(y + 2.0) < 1e-6) {
        printf("The point is in the first quadrant.\n");
    } else if (fabs(x + 1.0) < 1e-6 && fabs(y - 2.0) < 1e-6) {
        printf("The point is on the line x = y + 2.\n");
    } else {
        printf("The point is in the third quadrant.\n");
    }
    return 0;
}

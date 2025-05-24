#define PI 3.141592653589793238

double calculateArea(double x1, double y1, double x2, double y2) {
    double area = (x1 * y2 - x2 * y1);
    return area;
}

int main() {
    double x1, y1, x2, y2;
    printf("Enter the coordinates of the first point: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%lf %lf", &x2, &y2);
    double area = calculateArea(x1, y1, x2, y2);
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}

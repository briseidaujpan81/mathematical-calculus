// Code for calculating the area of a circle
double calculateArea(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double radius = 5.0;
    double area = calculateArea(radius);
    printf("The area of the circle with radius %lf is %lf\n", radius, area);
    return 0;
}

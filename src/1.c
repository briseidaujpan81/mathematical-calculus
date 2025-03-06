int main(void)
{
    int n = 10; // some number
    double x = 2.5; // some number
    double y = -3.14; // some number

    double result = f(x, y);

    return 0;
}

double f(double x, double y)
{
    return (x + y) * sin(y) / tan(x);
}
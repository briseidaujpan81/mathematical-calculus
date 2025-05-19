#include <stdio.h>
#include <stdlib.h>

double f(double x) {
    double result = 0.0;
    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0)
            result += 1 / i * (x - i);
    }
    return result;
}

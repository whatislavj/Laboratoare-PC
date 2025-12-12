#include <stdio.h>
#include <math.h>

int main() {
    double m = 0.7;
    double c = 2.1;
    double x = 1.7;

    double z = (sin(x)) / (sqrt(1 + pow(m, 2) * pow(sin(x), 2))) - c * m * log(m * x);

    printf("Valoarea lui z este: %f\n", z);

    return 0;
}
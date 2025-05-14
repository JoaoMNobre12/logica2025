#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    const double PI = acos(-1.0);

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double s = (a + b + c) / 2.0;

        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        double r_in = area / s;
        double area_in = PI * r_in * r_in;

        double r_out = (a * b * c) / (4.0 * area);
        double area_out = PI * r_out * r_out;

        double sunflowers = area_out - area;
        double violets = area - area_in;
        double roses = area_in;

        printf("%.4f %.4f %.4f\n", sunflowers, violets, roses);
    }

    return 0;
}

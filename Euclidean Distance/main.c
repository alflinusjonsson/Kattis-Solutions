#include <stdio.h>
#include <math.h>

double calculateDistance();

double calculateDistance(double x1, double x2, double y1, double y2, double p) {

    double x_abs = fabs((x1 - x2));
    double y_abs = fabs((y1 - y2));
    double x_calc = pow(x_abs, p);
    double y_calc = pow(y_abs, p);
    double result = x_calc + y_calc;
    double distance = pow(result, (1 / p));

    if (distance < 0) {
        return distance * -1;
    } else
        return distance;
}

int main() {

    while (1) {
        double x1 = 0, y1 = 0, x2 = 0, y2 = 0, p = 0;
        scanf("%lf", &x1);
        if (x1 == 0) {
            break;
        }

        scanf("%lf", &y1);
        scanf("%lf", &x2);
        scanf("%lf", &y2);
        scanf("%lf", &p);

        printf("%.10lf\n", calculateDistance(x1, x2, y1, y2, p));
    }
    return 0;
}
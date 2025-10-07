#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    float x1, y1, x2, y2, x3, y3;
    float a, b, c, p, s;

    printf("¬ведите координаты точки A (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("¬ведите координаты точки B (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("¬ведите координаты точки C (x3 y3): ");
    scanf("%f %f", &x3, &y3);

   
    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    p = (a + b + c) / 2;

    s = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("ѕлощадь треугольника: %.2f\n", s);

    return 0;
}

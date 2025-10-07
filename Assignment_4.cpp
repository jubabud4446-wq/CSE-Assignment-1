#include <stdio.h>

int main() {
    float a, b, area;
    printf("Enter length and breadth of ellipse: ");
    scanf("%f %f", &a, &b);
    area = 3.14 * a * b;
    printf("Area of ellipse: %.2f", area);

    return 0;
}
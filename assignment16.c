#include<stdio.h>

void calculate_area_and_circumference(int n, float *area, float *circumference) {
    *area = 3.14 * n * n;
    *circumference = 2 * 3.14 * n;
}

int main () {
    int r;
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    calculate_area_and_circumference(r, &area, &circumference);
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;

}
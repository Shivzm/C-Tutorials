#include<stdio.h>

void alter_values(int *a, int *b);

int main () {
    int x=5, y=9;
    printf("Before altering the values: x=%d, y=%d\n", x, y);

    alter_values(&x, &y);

    printf("After altering the values: x=%d, y=%d\n", x, y);
    
    return 0;
}

void alter_values(int *a, int *b) {
     *a = *a + 10;
     *b = *b * 8;
}
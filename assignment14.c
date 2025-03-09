#include <stdio.h>

int main() {
    int x,y,z,*_x,*_y ;
    printf("Enter First number(x): ");
    scanf("%d", &x);
    printf("Enter Second number(y): ");
    scanf("%d", &y);

    _x = &x;
    _y = &y; 
    
    printf("Swapping two numbers using pointers\n");
   
    printf("Before Swapping: x = %d, y = %d\n", x, y);
    z = *_x;
    *_x = *_y;
    *_y = z;
    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}
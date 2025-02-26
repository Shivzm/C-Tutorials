#include <stdio.h>

int main () {
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("Enter third number: ");
    scanf("%d",&z);
    
    if(x>y) {
        if(x>z) {
            printf("The largest number is %d\n", x);
        } else {
            printf("The largest number is %d\n", z);
        }
    } else {
        if(y>z) {
            printf("The largest number is %d\n", y);
        } else {
            printf("The largest number is %d\n", z);
        }
    }
}


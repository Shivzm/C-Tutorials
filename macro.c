#include<stdio.h>

#define SWAP(x,y,num) {num=x; x=y; y=num; }

int main() {
     int x,y,num;

     printf("Enter the value of x: ");
     scanf("%d", &x);
     printf("Enter the value of y:");
     scanf("%d", &y);

     printf("Before swapping: x=%d and y=%d\n", x,y);

     SWAP(x,y,num);

     printf("After swapping: x=%d and y=%d\n", x,y);
    
    return 0;
}
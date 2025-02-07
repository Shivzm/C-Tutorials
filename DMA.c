#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i<5; i++) {
         printf("%d\n", ptr[i]);
    }

    ptr = (int *) realloc(ptr , 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;  
    ptr[4] = 10;
    ptr[5] = 12;

    
    for (int i = 0; i<6; i++) {
         printf("%d\n", ptr[i]);
    }



    //int *ptr;
    //ptr = (int *) calloc(5, sizeof(int));

    //printf("Enter number(5): ");
    //for(int i=0; i<5; i++) {
         //scanf("%d", &ptr[i]);
    //}

    //ptr = (int*) realloc(ptr , 8);
    //printf("Enter number(8): ");
    //for(int i=0; i<8; i++) {
        // scanf("%d", &ptr[i]);
    //}
    
    //print
     //for(int i=0; i<8; i++) {
         //scanf("%d", &ptr[i]);
    //}

    return 0;










     //int *ptr;
     //int n;
     //printf("enter n: ");
     //scanf("%d", &n);

     //ptr = (int *) calloc(n, sizeof(int));

     //for(int i=0; i<=n; i++) {
         //printf("%d\n", ptr[i]);
     //}

     //free(ptr);

      //ptr = (int *) calloc(2, sizeof(int));

      //for(int i=0; i<=n; i++) {
         //printf("%d\n", ptr[i]);
     //}




     //float *ptr;
     //ptr = (float *)calloc(5 ,sizeof(float));

     //ptr[0] = 1;
     //ptr[1] = 3;
     //ptr[2] = 5;
     //ptr[3] = 7;
     //ptr[4] = 9;

     //for(int i=0; i<5; i++) {
         //printf("%f\n", ptr[i]);
     //}






     //float *ptr;
     //ptr = (float *)malloc(5 * sizeof(float));

     //ptr[0] = 1;
     //ptr[1] = 3;
     //ptr[2] = 5;
     //ptr[3] = 7;
     //ptr[4] = 9;

     //for(int i=0; i<5; i++) {
         //printf("%f\n", ptr[i]);
     //}
}
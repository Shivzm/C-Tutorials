#include<stdio.h>
#include<stdlib.h>

int main () {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *arr;
    arr = (int *) calloc(n, sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d numbers: ", n);
    for(int i = 0; i<=n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum =0;
    for(int i=0; i<=n; i++) {
        sum += arr[i];
    }

    float avg = (float)sum/n;

    printf("Sum: %d\n", sum);
    printf("Average: %f\n", avg);


    return 0;
}
#include<stdio.h>
#include<string.h>

void even(int arr[], int n);
void odd(int arr[],int n);
void calculate_sum_and_average(int arr[],int n);
void maximum_and_minimum(int arr[],int n);
void remove_duplicates(int arr[],int *n);
void reverse_array(int arr[],int n);


int main() {
    int arr[10],n,option;
    char choice;

    printf("Enter the number of elements in the array(max 10): ");
    scanf("%d", &n);

    if(n>10) {
        printf("Number of elements exceeds the limit\n");
        return 1;
    }
    
    printf("Enter the elements of the array: ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    do{
        printf("\n\n1.Print the even valued elements of array \n2.Print the odd valued elements of array\n3.Print the sum and average of the elements of the array\n4.Print the maximum and minimum elements of the array\n5.Remove duplicates from the array\n6.Print the array in reverse order\n7.Exit\nEnter your choice:");
        scanf("%d", &option);

        switch(option) {
            case 1: even(arr,n);
                    break;
            case 2: odd(arr,n);
                    break;
            case 3: calculate_sum_and_average(arr,n);
                    break;
            case 4: maximum_and_minimum(arr,n);
                    break;
            case 5: remove_duplicates(arr,&n);
                    break;
            case 6: reverse_array(arr,n);
                    break;
            case 7: return 0;
            default: printf("Invalid choice\n");
                     break;
        }
        
            printf("\nDo you want to continue?(y/n): ");
            scanf(" %c", &choice);
        
        
    }
    
    while(choice == 'Y' || choice == 'y');

    return 0;
}

void even(int arr[], int n) {
    printf("Even valued elements of the array are: ");
    for(int i=0; i<n; i++) {
        if(arr[i]%2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

void odd(int arr[], int n) {
    printf("Odd valued elements of the array are: ");
    for(int i=0; i<n; i++) {
        if(arr[i]%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}

void calculate_sum_and_average(int arr[], int n) {
    int sum = 0;
    float average;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    average = sum/n;
    printf("Sum of the elements of the array is: %d\nAverage of the elements of the array is: %f", sum, average);
}

void maximum_and_minimum(int arr[], int n) {
    int max = arr[0], min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element of the array is: %d\nMinimum element of the array is: %d", max, min);
}


void remove_duplicates(int arr[], int *n) {
    int i, j, k;
    for(i=0; i<*n; i++) {
        for(j=i+1; j<*n; j++) {
            if(arr[i] == arr[j]) {
                for(k=j; k<*n; k++) {
                    arr[k] = arr[k+1];
                }
                (*n)--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for(i=0; i<*n; i++) {
        printf("%d ", arr[i]);
    }
}

void reverse_array(int arr[], int n) {
    printf("Array in reverse order: ");
    for(int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}
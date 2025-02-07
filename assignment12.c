#include<stdio.h>

void even(int arr[]);
void odd(int arr[]);
void calculate_sum_and_average(int arr[]);
void maximum_and_minimum(int arr[]);
void remove_duplicates(int arr[]);
void reverse_array(int arr[]);


int main() {
    int arr[11],option;
    char choice;
    
    printf("Enter the elements of the array(utpo 10 elements): ");
    for(int i=0; i<11; i++) {
        scanf("%d", &arr[i]);
    }

    do{
        printf("\n\n1.Print the even valued elements of array \n2.Print the odd valued elements of array\n3.Print the sum and average of the elements of the array\n4.Print the maximum and minimum elements of the array\n5. Remove duplicates from the array\n6.Print the array in reverse order\n7. Exit\nEnter your choice: ");
        scanf("%d", &option);

        switch(option) {
            case 1: even(arr);
                    break;
            case 2: odd(arr);
                    break;
            case 3: calculate_sum_and_average(arr);
                    break;
            case 4: maximum_and_minimum(arr);
                    break;
            case 5: remove_duplicates(arr);
                    break;
            case 6: reverse_array(arr);
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

void even(int arr[]) {
    printf("Even valued elements of the array are: ");
    for(int i=0; i<11; i++) {
        if(arr[i]%2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

void odd(int arr[]) {
    printf("Odd valued elements of the array are: ");
    for(int i=0; i<11; i++) {
        if(arr[i]%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}

void calculate_sum_and_average(int arr[]) {
    int sum = 0;
    float average;
    for(int i=0; i<11; i++) {
        sum += arr[i];
    }
    average = sum/11;
    printf("Sum of the elements of the array is: %d\nAverage of the elements of the array is: %f", sum, average);
}

void maximum_and_minimum(int arr[]) {
    int max = arr[0], min = arr[0];
    for(int i=1; i<11; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element of the array is: %d\nMinimum element of the array is: %d", max, min);
}


void remove_duplicates(int arr[]) {
    int i, j, k;
    for(i=0; i<11; i++) {
        for(j=i+1; j<11; j++) {
            if(arr[i] == arr[j]) {
                for(k=j; k<11; k++) {
                    arr[k] = arr[k+1];
                }
                j--;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for(i=0; i<11; i++) {
        printf("%d ", arr[i]);
    }
}

void reverse_array(int arr[]) {
    printf("Array in reverse order: ");
    for(int i=10; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}
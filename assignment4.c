#include<stdio.h>

int main() {
     int n,i;
     float sum=0;
        printf("Enter the number of terms: ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            sum=sum+(1.0/i);
        }
        printf("Sum of the series is: %f",sum);

    return 0;
}
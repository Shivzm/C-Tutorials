#include<stdio.h>

int main() {
     int n,i;
     float sum=0;
        printf("Enter the length of the series: ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                sum-= i;
            }
            else
            {
                sum+= i;
            }
        }
        printf("Sum of the series is: %f",sum);

    return 0;
}
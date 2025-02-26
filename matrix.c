#include<stdio.h>

int main() {
     int r,c,A[100][100],B[100][100],sum[100][100],i,j;
     printf("Enter number of rows: ");
     scanf("%d", &r);

     printf("Enter number of columns: ");
     scanf("%d", &c);

     printf("Enter the elements of matrix A:\n");
     for(i=0;i<r;++i)
         for(j=0;j<c;++j) {
              printf("enter the element of A%d%d: ", i+1,j+1);
              scanf("%d", &A[i][j]);
        }
     
     printf("Enter the elements of matrix B:\n");
     for(i=0;i<r;++i)
         for(j=0;j<c;++j) {
              printf("enter the element of B%d%d: ", i+1,j+1);
              scanf("%d", &B[i][j]);
        }
     
     for(i=0;i<r;++i)
         for(j=0;j<c;++j) {
             sum[i][j] = A[i][j] + B[i][j];
         } 

    printf("The sum of the two matrices is:\n");
    for(i=0;i<r;++i)
         for(j=0;j<c;++j) {
             printf("%d    ", sum[i][j]);
             if(j == c-1) {
                 printf("\n\n");
         }
    }
    return 0;
}
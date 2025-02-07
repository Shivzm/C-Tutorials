#include<stdio.h>

 int checkPrime(int num);

int main () {
     printf("The prime numbers less than 100 are: \n");

     for (int i=2; i< 100; i++) {
         if (checkPrime(i)) {
         printf("%d\t\n", i);
         }
     }
     return 0;
}

int checkPrime(int num) {
    if (num<2) {
        return 0;
    }

    for (int i=2; i*i<=num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
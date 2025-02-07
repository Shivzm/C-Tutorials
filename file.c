#include <stdio.h>

int main() {
     FILE *fptr;
     fptr = fopen("Sum.txt", "r");
     
     int x,y;
     fscanf(fptr, "%d", &x);
     fscanf(fptr, "%d", &y);

     fclose(fptr);

     fptr=fopen("Sum.txt", "w");
     int sum;
     fprintf(fptr, "Sum is: %d", sum=x+y);






     //int n;
     //printf("Enter a number: ");
     //scanf("%d", &n);
     
     //for(int i=1; i<=n; i++) {
          //if(i % 2 != 0) {
             //fprintf(fptr, "%d\n", i);
          //}
     //}

     //char name[50];
     //int age;
     //float cgpa;
     //printf("Enter Name: ");
     //scanf("%s", name);
     //printf("Enter age: ");
     //scanf("%d", &age);
     //printf("Enter CGPA: ");
     //scanf("%f", &cgpa);

     //fprintf(fptr, "Student Name: %s\n", name);
     //fprintf(fptr, "Student Age: %d\n", age);
     //fprintf(fptr, "Student CGPA: %f\n", cgpa);








     //int n;
     //fscanf(fptr, "%d", &n);
     //printf("number = %d\n", n);
     //fscanf(fptr, "%d", &n);
     //printf("number = %d\n", n);
     //fscanf(fptr, "%d", &n);
     //printf("number = %d\n", n);
     //fscanf(fptr, "%d", &n);
     //printf("number = %d\n", n);
     //fscanf(fptr, "%d", &n);
     //printf("number = %d\n", n);

     //fputc('M', fptr);
     //fputc('A', fptr);
     //fputc('N', fptr);
     //fputc('G', fptr);
     //fputc('O', fptr);  

     //printf("%c\n", fgetc(fptr));
     //printf("%c\n", fgetc(fptr));
     //printf("%c\n", fgetc(fptr));
     //printf("%c\n", fgetc(fptr));
     //printf("%c\n", fgetc(fptr));

     //fprintf(fptr,"%c", 'M');
     //fprintf(fptr,"%c", 'A');
     //fprintf(fptr,"%c", 'N');
     //fprintf(fptr,"%c", 'G');
     //fprintf(fptr,"%c", 'O');
     

     fclose(fptr);

     return 0;
}
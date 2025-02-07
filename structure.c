#include <stdio.h>
#include <string.h>

//user defined
typedef struct student{
     char name[100];
     int roll;
     float cgpa;
} stu;

typedef struct computerengineeringstudent{
     int roll;
     float cgpa;
     char name[100];
} coe;

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

struct vector{
    int x;
    int y;
};

void calcSum(struct vector v1,struct vector v2,struct vector sum);

struct complex{
    int real;
    int img;
};

typedef struct BankAccount
{
    char name[100];
    int accountNumber;
}Acc;


int main () {
     Acc acc1 = {"RupeshSingh", 2465};
     Acc acc2 = {"RadhikaKapoor", 1321};
     Acc acc3 = {"PriyaShekhawat", 1425};

     printf("name is:%s\n",acc1.name);
     printf("acc no is:%d\n",acc1.accountNumber);





     //struct address adds[5];
     //input
     //printf("enter info of person 1: ");
     //scanf("%d", &adds[0].houseNo);
     //scanf("%d", &adds[0].block);
     //scanf("%s", adds[0].city);
     //scanf("%s", adds[0].state);

     //printf("enter info of person 2: ");
     //scanf("%d", &adds[1].houseNo);
     //scanf("%d", &adds[1].block);
     //scanf("%s", adds[1].city);
     //scanf("%s", adds[1].state);

     //printf("enter info of person 3: ");
     //scanf("%d", &adds[2].houseNo);
     //scanf("%d", &adds[2].block);
     //scanf("%s", adds[2].city);
     //scanf("%s", adds[2].state);

     //printf("enter info of person 4: ");
     //scanf("%d", &adds[3].houseNo);
     //scanf("%d", &adds[3].block);
     //scanf("%s", adds[3].city);
     //scanf("%s", adds[3].state);

     //printf("enter info of person 5: ");
     //scanf("%d", &adds[4].houseNo);
     //scanf("%d", &adds[4].block);
     //scanf("%s", adds[4].city);
     //scanf("%s", adds[4].state);
     
     //printAdd(adds[0]);
     //printAdd(adds[1]);
     //printAdd(adds[2]);
     //printAdd(adds[3]);
     //printAdd(adds[4]);
   
    return 0;
}

void printAdd(struct address add) {
      printf("address is: %d, %d, %s, %s\n", add.houseNo,add.block,add.city,add.state);
}

void calcSum(struct vector v1,struct vector v2,struct vector sum) {
      sum.x = v1.x + v2.x;
      sum.y = v1.y + v2.y;

      printf("sum of x is: %d\n", sum.x);
      printf("sum of y is: %d\n", sum.y);
}  
#include<stdio.h>

int main() {
    int percent, grade;
    printf("Enter percentage secured :");
    scanf("%d", &percent);
    grade = percent/10;

    switch(grade) {
          case 10 : printf("Outstanding,you secured O grade");
          break;
          case 9 : printf("Excellent,you secured E grade");
          break;
          case 8 : printf("Amazing,you secured A+ grade");
          break;
          case 7 : printf("Very Good,you secured A grade");
          break;
          case 6 : printf("Try Harder,you secured B+ grade");
          break;
          case 5 : printf("More effort needed,you secured B grade");
          break;
          case 4 : printf("Work Hard,you secured C+ grade");
          break;
          case 3 : printf("Work Hard,you secured C grade");
          break;
          case 2 : printf("WOrk Hard,you secured D grade");
          break;
          default : printf("Fail,you secured F grade");
          break;
    }
    return 0;
}
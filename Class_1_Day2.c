//datatypes and input function
#include<stdio.h>
#include<conio.h>

void main(){
    int a = 10;
    printf("%d\n",a);
    float b = 20;
    float c = 25.5;
    printf("Case 1: %.2f,%.2f\n",b,c);
    printf("Case 2: %f,%f\n",c,b);
    char f = 'c';
    char d;
    printf("%c\n",f);
    printf("Enter a number:\n");
    scanf("%c",&d);
    printf("This is the value you have entered: %c",d);
    getch();
}
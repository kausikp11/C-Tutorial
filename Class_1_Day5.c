//Looping statements
#include<stdio.h>
#include<conio.h>
void main(){
	int a=1;
	for(int i = 1; i<=10;i++){
		a = i*a;
		printf(" The Value in %d is %d\n",i,a);
	}
	printf("The for loop ended\n");
	while(a>120){
		printf("The value is %d\n",a);
		a = a/120;
	}
printf("The value of a is %d\n",a);
	printf("The loop ended");
	getch();
}
//conditionals statement
#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b;

	printf("Enter variable 1");
	scanf("%d",&a);

	printf("Enter variable 2");
	scanf("%d",&b);
	
	if(a>b){
		printf("A is greater than B");
	}
	else{
		if(a<b){
		printf("B is greater than A");	
		}
		else{
		printf("A and B are equal");
}
	}

	getch();
}

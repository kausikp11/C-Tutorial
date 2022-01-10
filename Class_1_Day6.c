#include<stdio.h>
#include<conio.h>

void main(){
	int a,b;

	printf("Enter Variable 1:\n");
	scanf("%d",&a);
	printf("Enter Variable 2:\n");
	scanf("%d",&b);

	int c;
	c = group_calc(a,b);
	switch(c){
		case 0:
		printf("%d>%d",a,b);
		break;
		case 1:
		printf("%d<%d",a,b);
		break;
		case 2:
		printf("%d=%d",a,b);
		break;
		default:
		printf("Some error occured");
	}

	getch();
}

int group_calc(int variable_1,int variable_2){
	if(variable_1>variable_2){
		return 0;
	}
	else{
	if(variable_1<variable_2){
		return 1;
	}
	else{
	return 2;
}
}
}
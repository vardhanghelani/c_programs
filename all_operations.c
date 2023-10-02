#include<stdio.h>
void main(){
	int choice;
	float a,b,add,sub,mul,div;
	printf("ENTER THE VALUE OF a=\n");
	scanf("%f",&a);
	printf("ENTER VALUE OF b=\n");
	scanf("%f",&b);
	printf("1. ADDDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISON\n");
	printf(" ENTER THE CHOICE FROM ABOVE \n");
	scanf("%d",&choice);
	if(choice==1){
		add=a+b;
		printf("%f",add);
	}
	else if(choice==2){
		sub=a-b;
		printf("%f",sub);
	}
	else if (choice==3){
		mul=a*b;
		printf("%f",mul);
	}
	else if(choice==4){
		div=a/b;
		printf("%f",div);
	}
	else {
		printf("ENTER VALID NUMBER");
	}
}

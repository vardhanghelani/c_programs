#include<stdio.h>
void main(){
	int m1,m2,m3,m4,m5;
	float per,perc,percn;
	printf("ENTER MARKS");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5/500.0);
	printf("%f",per);
    if(per>70){
    	printf("\nDISTINCT");
	}
	else if(per>=60 && per<=69){
		printf("\nCLASS ONE");
	}
	else if(per>=45 && per<=49){
		printf("\nsecond class");
	}
	else if(per>=36 && per<=44){
		printf("\nSTUDENT IS PASSED");
	}
	else{
		printf("\nstudent is fail");
	}
}

#include<stdio.h>
void main(){
	int basic,hra,da,gross;
	printf("ENETR BASIC SALLERY\n");
	scanf("%d",&basic);
    if(basic>=30000){
    	hra=0.3*basic;
    	printf("YOUR HRA IS:%d",hra);
    	da=0.95*basic;
     	printf("\nYOUR DA IS:%d",da);
    	gross=basic+hra+da;
    printf("\n YOUR GROSS SALLERY IS:%d",gross);
	}
	 else if(basic>=20000 ){
	 	hra=0.25*basic;
	 	printf("YOUR HRA IS:%d",hra);
	 	da=0.9*basic;
	 	printf("\nYOUR DA IS:%d",da);
	 	gross=basic+hra+da;
	 	printf("\n YOUR GROSS SALLERY IS:%d",gross);
	 }
	 else if(basic>=10000){
		hra=0.2*basic;
		printf("YOUR HRA IS:%d",hra);
		da=0.8*basic;
		printf("\nYOUR DA IS:%d",da);
		gross=basic+hra+da;
		printf("\n YOUR GROSS SALLERY IS:%d",gross);
}
        else{
        	hra=1*basic;
        	da=0.1*basic;
        	gross=da+basic+hra;
        	printf("\n YOUR GROSS SALLERY IS:%d",gross);
		}
}

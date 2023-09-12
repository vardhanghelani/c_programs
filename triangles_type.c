// isocelus triangle 
#include<stdio.h>
void main() {
	int a,b,c;
	printf("enter the side1=");
		scanf("%d",&a);
	printf("enter the side2=");
	scanf("%d",&b);
	printf("enter the side3=");
	scanf("%d",&c);
	if(a==b && b==c ){
		printf("triangle is equilateral triangle");
}
else if (a==b || b==c || c==a){
	printf("triangle is isocelus triangle ");
}
else if(a!=b || b!=c || a!=c){
	printf("triangle is scalene triangle \n");
}
if((a*a)==(b*b) +(c*c)|| (b*b)==(a*a) +(c*c)|| (c*c)==(a*a) +(b*b)){
	printf("triangle is right angle triangle ");
}
}

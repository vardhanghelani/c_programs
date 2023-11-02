#include<stdio.h>
void main(){
	int *p,*q,a,b;
	printf("ENTER VALUE OF A");
	scanf("%d",&a);
	printf("ENTER VALUE OF B\n");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("sum of number is=%d",*p+*q);
}

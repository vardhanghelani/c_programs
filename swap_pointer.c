#include<stdio.h>
void main(){
	int *p,*q,a,b,temp;
	printf("ENTER VALUE OF A");
	scanf("%d",&a);
	printf("ENTER VALUE OF B\n");
	scanf("%d",&b);
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("NEW VALUE ARE %d %d",*p,*q);
	
}

#include<stdio.h>
void main(){
	int *p,x;
	char *q,a;
	float *r,b;
	double *s,c;
	printf("ENTER VALUE of int");
	scanf("%d",&x);
	p=&x;
	printf("address is=%d valueis=%d\n",p,*p);
	
	printf("ENTER VALUE of char");
	scanf("\n%c",&a);
	q=&a;
	printf("address is=%d valueis=%c\n",q,*q);
	
	printf("ENTER VALUE of float");
	scanf("%f",&b);
	r=&b;
	printf("address is=%d valueis=%f\n",r,*r);
	
	printf("ENTER VALUE of double");
	scanf("%lf",&c);
	s=&c;
	printf("address is=%d valueis=%lf\n",s,*s);
}

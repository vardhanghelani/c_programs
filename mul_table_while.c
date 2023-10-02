// multiplication table 
#include<stdio.h>
void main(){
	int n,i=1,mul;
	printf("enter the number=");
	scanf("%d",&n);
	while (i<=10)
	{
		mul=i*n;
		printf("%dX%d=%d\n",n,i,mul);
		i++;
	}
}
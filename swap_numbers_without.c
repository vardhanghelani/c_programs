//swap numbers withouut temp
#include<stdio.h>
void main(){
	int a=4,b=6;
	a=a+b;
	b=a-b;
	
	a=a-b;
	printf("%d %d",a,b);
}

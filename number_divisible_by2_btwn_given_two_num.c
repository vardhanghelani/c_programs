#include<stdio.h>
void main(){
	int i,a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	i=a;
	
	while(i<=b){
		if(i%2==0){
			printf("%d",i);
			
		}
		i++;
	}
}
